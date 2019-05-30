
if (TARGET json)
    return()
endif()

set(_json_SourceDir ${CMAKE_SOURCE_DIR}/ThirdParty/json)
set(_json_BinaryDir ${CMAKE_BINARY_DIR}/ThirdParty/json)

add_subdirectory(${_json_SourceDir} ${_json_BinaryDir})

include(${CMAKE_ROOT}/Modules/FindPackageHandleStandardArgs.cmake)

find_package_handle_standard_args(
    json
    REQUIRED_VARS
        _json_SourceDir
)

 
