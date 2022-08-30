include_guard(GLOBAL)

include(FeatureSummary)

option(ENABLE_UNIT_TESTS "Enable unit tests" ON)
add_feature_info("Enable unit tests" ENABLE_UNIT_TESTS "enables building of unit tests")

option(ENABLE_COMPONENT_TESTS "Enable component tests" ON)
add_feature_info("Enable component tests" ENABLE_UNIT_TESTS "enables building of component tests")

option(WARNINGS_AS_ERRORS "Treat as errors" OFF)
add_feature_info(
    "Treat warnings as errors" WARNINGS_AS_ERRORS
    "Treat warnings as errors"
)