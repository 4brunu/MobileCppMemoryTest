cmake_minimum_required(VERSION 3.4.1)

set(PROJECT_NAME mobilecppmemorytest)
project(${PROJECT_NAME})

file(GLOB_RECURSE SRCS

  #Source
  "${CMAKE_SOURCE_DIR}/src/main/cpp/*"

  #Djinni support lib
  "${CMAKE_SOURCE_DIR}/deps/djinni/support-lib/jni/*"

  #Djinni generated source
  "${CMAKE_SOURCE_DIR}/generated-src/cpp/*"
  "${CMAKE_SOURCE_DIR}/generated-src/jni/*"

  )

include_directories(

  #Source
  "${CMAKE_SOURCE_DIR}/src/main/cpp/"

  #Djinni support lib
  "${CMAKE_SOURCE_DIR}/deps/djinni/support-lib/jni/"

  #Djinni generated source
  "${CMAKE_SOURCE_DIR}/generated-src/cpp/"
  "${CMAKE_SOURCE_DIR}/generated-src/jni/"

  )

add_library(${PROJECT_NAME} SHARED ${SRCS})
target_link_libraries(${PROJECT_NAME})
