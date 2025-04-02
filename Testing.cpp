#include "Testing.h"
#include <iostream>



// Constructor definition: Initializes the testMessage member variable
Testing::Testing() {
    testMessage = "This is a test message inside the class!";  // Hardcoded message
}

// Member function definition: Prints the testMessage member variable
void Testing::testFunc() {
    std::cout << testMessage << std::endl;  // Print the testMessage
}