cmake_minimum_required(VERSION ${CMAKE_VERSION})

project("Innards Engine" VERSION 0.1.0)

set(SOURCES
  "${CMAKE_CURRENT_LIST_DIR}/assets/Asset.cpp"
)

add_library(innards_engine ${SOURCES})

target_include_directories (innards_engine PRIVATE "${CMAKE_CURRENT_LIST_DIR}")

set_target_properties(innards_engine PROPERTIES
  ARCHIVE_OUTPUT_NAME "Innards_Engine"
  ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_CURRENT_LIST_DIR}/bin"
)