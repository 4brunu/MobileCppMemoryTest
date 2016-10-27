cmake_minimum_required(VERSION 3.0)

set(PROJECT_NAME MobileCppMemoryTest)
project(${PROJECT_NAME})

file(GLOB SRCS

  #Djinni support lib
  "${CMAKE_SOURCE_DIR}/deps/djinni/support-lib/objc/*"

  #Djinni generated source
  "${CMAKE_SOURCE_DIR}/generated-src/cpp/*"
  "${CMAKE_SOURCE_DIR}/generated-src/objc/*"

  )

include_directories(

  #Djinni support lib
  "${CMAKE_SOURCE_DIR}/deps/djinni/support-lib/objc/"

  #Djinni generated source
  "${CMAKE_SOURCE_DIR}/generated-src/cpp/"
  "${CMAKE_SOURCE_DIR}/generated-src/objc/"

  )

add_library(${PROJECT_NAME} STATIC ${SRCS})
target_link_libraries(${PROJECT_NAME})
