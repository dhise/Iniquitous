#pragma once
#include <iostream>
#include <string>


class Testing {
public:
    Testing();  // Constructor declaration

    void testFunc();  // Function declaration that prints the test message

private:
    std::string testMessage;  // Member variable to store the test message
};