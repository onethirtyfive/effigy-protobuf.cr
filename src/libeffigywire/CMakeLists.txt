project(libeffigywire VERSION 0.1 LANGUAGES C)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/../cmake/Modules/")
MESSAGE( STATUS "CMAKE_MODULE_PATH: " ${CMAKE_MODULE_PATH} )

find_package(ProtobufC REQUIRED)
include_directories(${PROTOBUFC_INCLUDE_DIRS})

include_directories(
  ${CMAKE_CURRENT_SOURCE_DIR}/common
  ${CMAKE_CURRENT_SOURCE_DIR}/s2
)

add_library(effigywire
  STATIC
  src/demo.pb-c.c
  src/dota_commonmessages.pb-c.c
  src/dota_modifiers.pb-c.c
  src/dota_usermessages.pb-c.c
  src/netmessages.pb-c.c
  src/networkbasetypes.pb-c.c
  src/s2_base_gcmessages.pb-c.c
  src/s2_dota_gcmessages_common.pb-c.c
  src/s2_dota_match_metadata.pb-c.c
  src/s2_dota_usermessages.pb-c.c
  src/s2_gameevents.pb-c.c
  src/s2_netmessages.pb-c.c
  src/s2_te.pb-c.c
  src/s2_usermessages.pb-c.c
)

target_include_directories(effigywire
  PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
  PRIVATE src
)

install(TARGETS effigywire
    ARCHIVE  DESTINATION lib
    LIBRARY  DESTINATION lib)  # This is for Windows
install(DIRECTORY include/ DESTINATION include)

# This makes the project importable from the build directory
export(TARGETS effigywire FILE MyLibraryConfig.cmake)


