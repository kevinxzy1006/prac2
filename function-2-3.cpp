// Function to check if an array is a palindrome
bool is_palindrome(int integers[], int length) {
    // If the length is 0 or negative, return false
    if (length <= 0) {
        return false;
    }

    // Check if the array is a palindrome
    for (int i = 0; i < length / 2; ++i) {
        if (integers[i] != integers[length - i - 1]) {
            return false;
        }
    }

    return true;
}

// Function to calculate the sum of elements in an array
int sum_array_elements(int integers[], int length) {
    // If the length is 0 or negative, return -1
    if (length <= 0) {
        return -1;
    }

    // Calculate the sum of elements
    int sum = 0;
    for (int i = 0; i < length; ++i) {
        sum += integers[i];
    }

    return sum;
}

// Function to calculate the sum of elements if the array is a palindrome, otherwise return -2
int sum_if_palindrome(int integers[], int length) {
    // Check if the array is a palindrome
    if (!is_palindrome(integers, length)) {
        return -2;
    }

    // Calculate the sum of elements if it's a palindrome
    return sum_array_elements(integers, length);
}