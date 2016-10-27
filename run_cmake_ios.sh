#! /usr/bin/env bash

# IOS.cmake
# Architectures: i386 armv7 armv7s x86_64 arm64

declare -a ABIs=("SIMULATOR" "OS" "SIMULATOR64")
# declare -a ABIs=("OS")
# declare -a ABIs=("SIMULATOR")

# declare -a BUILD_TYPES=("Debug" "Release")
# declare -a BUILD_TYPES=("Debug")
declare -a BUILD_TYPES=("Release")

PROJECT_NAME=MobileCppMemoryTest


rm -rf "cmake/build/ios"
rm -rf "cmake/bin/ios"

for ABI in "${ABIs[@]}"
do
	echo "$ABI"

	mkdir -p "cmake/build/ios/$ABI"

	cmake -G"Xcode" \
	 -DCMAKE_TOOLCHAIN_FILE="cmake/toolchains/iOS.cmake" \
	 -DIOS_PLATFORM=$ABI \
	 -B"cmake/build/ios/$ABI" -H.


	for BUILD_TYPE in "${BUILD_TYPES[@]}"
	do
	echo "$BUILD_TYPE"

		cmake --build "cmake/build/ios/$ABI" \
		 --target ALL_BUILD --config $BUILD_TYPE

		echo "-----"
	done

	echo "----------"
done

STATIC_LIBRARIES=($(ls "cmake/bin/ios/${BUILD_TYPES[0]}/${ABIs[0]}/"))

# Put all librarues in the fat file.
echo "Create FAT library!"

for BUILD_TYPE in "${BUILD_TYPES[@]}"
do
	echo "$BUILD_TYPE"

	mkdir -p "cmake/bin/ios/$BUILD_TYPE/UNIVERSAL"

	for STATIC_LIBRARY in "${STATIC_LIBRARIES[@]}"
	do
		echo "$STATIC_LIBRARY"

		LIPO_LIBRARIES=$(
			for ABI in "${ABIs[@]}"
			do
				echo "cmake/bin/ios/$BUILD_TYPE/$ABI/${STATIC_LIBRARY}"
			done
		)

		# LIPO_LIBRARIES=$(
		# 	for ABI in "${ABIs[@]}"
		# 	do
		# 		echo "cmake/bin/ios/$BUILD_TYPE/$ABI/lib${PROJECT_NAME}.a"
		# 	done
		# )
		#
		echo $LIPO_LIBRARIES

		lipo -create -output "cmake/bin/ios/$BUILD_TYPE/UNIVERSAL/$BUILD_TYPE-${STATIC_LIBRARY}" \
		$LIPO_LIBRARIES

		lipo -info cmake/bin/ios/$BUILD_TYPE/UNIVERSAL/$BUILD_TYPE-${STATIC_LIBRARY}

		echo "-----"
	done

	echo "-----"
done

echo "done"
