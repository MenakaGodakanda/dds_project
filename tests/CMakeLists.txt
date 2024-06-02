add_executable(test_safe_dds test_safe_dds.cpp)
target_link_libraries(test_safe_dds dds)
add_test(NAME SafeDDSTest COMMAND test_safe_dds)
