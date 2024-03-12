cmake_minimum_required(VERSION 3.5)

project(klausurtayari2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(klausurtayari2 main.cpp
    exif.h exif.cpp
    image.h image.cpp
    imageviewer.h imageviewer.cpp
    album.h album.cpp)

include(GNUInstallDirs)
install(TARGETS klausurtayari2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
