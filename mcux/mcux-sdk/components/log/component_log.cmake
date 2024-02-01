#Description: Component log; user_visible: True
include_guard(GLOBAL)
message("component_log component is included.")

target_sources(${MCUX_SDK_PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/fsl_component_log.c
)

target_include_directories(${MCUX_SDK_PROJECT_NAME} PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/.
)

#OR Logic component
if(${MCUX_DEVICE} STREQUAL "RW612")
    include(utility_str)
endif()
if(${MCUX_DEVICE} STREQUAL "RW610")
    include(utility_str)
endif()
if(${MCUX_DEVICE} STREQUAL "MIMXRT1166_cm7")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "MIMXRT1052")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "MK22F12810")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "MKV10Z1287")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "MIMXRT633S_cm33")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "MIMXRT1064")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "LPC5526")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "LPC54607")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "LPC54S016")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "LPC54606")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "LPC54616")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "MKE15Z7")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "K32L2B31A")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "MKE16Z4")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "MKM14ZA5")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "LPC54016")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "MKV11Z7")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "LPC54018")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "MKV31F51212")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "MKE12Z7")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "LPC54628")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "LPC5512")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "MK22F51212")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "MIMXRT1173_cm4")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "MIMXRT1173_cm7")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "LPC5516")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "MKM34ZA5")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "LPC54605")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "MIMXRT1051")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "LPC54618")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "MKE13Z7")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "MKE14Z7")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "MIMXRT1021")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "MKV10Z7")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "MIMXRT555S_cm33")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "LPC54018M")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "LPC5514")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "LPC55S16")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "K32L2B11A")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "MK02F12810")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "MIMXRT1062")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "LPC54S018")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "MKE15Z4")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "K32L3A60_cm0plus")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "K32L3A60_cm4")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "MIMXRT1042")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "MIMXRT1176_cm4")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "MIMXRT1176_cm7")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "MIMXRT1175_cm4")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "MIMXRT1175_cm7")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "LPC54S018M")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "MK22F25612")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "MKM35Z7")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "K32L2B21A")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "LPC51U68")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "MIMXRT1061")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "LPC5528")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "MIMXRT1165_cm7")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "LPC55S66_cm33_core0")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "MKM34Z7")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "MKV31F12810")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "LPC54S005")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "MKE17Z7")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "MIMXRT1171_cm7")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "LPC55S69_cm33_core0")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "K32L2A31A")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "MIMXRT1024")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "MKM33ZA5")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "MIMXRT1011")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "LPC54005")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "LPC55S28")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "MKE14Z4")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "MIMXRT533S_cm33")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "LPC55S14")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "MKV31F25612")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "MKV30F12810")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "LPC55S26")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "K32L2A41A")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "LPC54608")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "MIMXRT685S_cm33")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "MIMXRT595S_cm33")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "MIMXRT1172_cm7")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "MIMXRT1015")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "MK64F12")
    include(utility_debug_console)
endif()
if(${MCUX_DEVICE} STREQUAL "MK66F18")
    include(utility_debug_console)
endif()

