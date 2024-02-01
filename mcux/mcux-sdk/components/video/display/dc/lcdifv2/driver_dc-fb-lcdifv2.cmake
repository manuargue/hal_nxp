#Description: Driver dc-fb-lcdifv2; user_visible: True
include_guard(GLOBAL)
message("driver_dc-fb-lcdifv2 component is included.")

target_sources(${MCUX_SDK_PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/fsl_dc_fb_lcdifv2.c
)

target_include_directories(${MCUX_SDK_PROJECT_NAME} PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/.
)


include(driver_dc-fb-common)
include(driver_display-common)
include(driver_lcdifv2)
