include_guard(GLOBAL)

set(DOCKERMSG ", or wait till my lazy ass finish the docker container :p.")

#========================================================
find_package(spdlog)

IF(${spdlog_FOUND})
    MESSAGE(STATUS "Found spdlog.")
ELSE(${spdlog_FOUND})
    MESSAGE(FATAL_ERROR "Could not locate spdlog. go to this link, https://github.com/gabime/spdlog for installation : " ${DOCKERMSG})
ENDIF(${spdlog_FOUND})

#========================================================
if(ENABLE_UNIT_TESTS)
    find_package(GTest REQUIRED)
endif()