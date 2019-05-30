project(json)
add_library(json STATIC)

# adding sources in subdirectories, leads to cleaner files for larger projects, globbing for source and headers because they might be there
file(GLOB_RECURSE inc
include/*.c 
include/*.cpp 
include/*.h 
include/*.hpp
)

file(GLOB_RECURSE src 
src/*.c 
src/*.cpp 
src/*.h 
src/*.hpp
)

target_sources(json 
PRIVATE
${src}
${inc}
)

# targets that depend on this will have to do #include "json/<header-file>"
# internal to this lib, you can simply do #include "<header-file>"
target_include_directories(json
PUBLIC
"include"
)

# set up folder structure in visual studio
#target_source_group(json ${CMAKE_CURRENT_SOURCE_DIR})
