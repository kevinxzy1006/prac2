#include <iostream>

int main() {
    // Test cases
    int binary1[] = {1, 0, 1}; // Binary number: 101
    int binary2[] = {1, 0, 0, 1}; // Binary number: 1001
    int binary3[] = {1, 1, 0, 1, 0}; // Binary number: 11010

    std::cout << "Binary 101 to int: " << binary_to_int(binary1, 3) << std::endl;
    std::cout << "Binary 1001 to int: " << binary_to_int(binary2, 4) << std::endl;
    std::cout << "Binary 11010 to int: " << binary_to_int(binary3, 5) << std::endl;

    return 0;
}
