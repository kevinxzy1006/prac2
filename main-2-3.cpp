#include <iostream>

int main() {
    int array1[] = {1, 2, 3, 2, 1}; // Palindrome array
    int array2[] = {1, 2, 3, 4, 5}; // Not a palindrome array

    // Test cases
    std::cout << "Sum if palindrome: " << sum_if_palindrome(array1, 5) << std::endl;
    std::cout << "Sum if not palindrome: " << sum_if_palindrome(array2, 5) << std::endl;

    return 0;
}
