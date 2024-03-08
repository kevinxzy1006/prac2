int binary_to_int(int binary_digits[], int number_of_digits) {
    int result = 0;

    // Iterate through the array from most significant digit to least significant digit
    for (int i = 0; i < number_of_digits; ++i) {
        // Multiply the result by 2 and add the current digit
        result = result * 2 + binary_digits[i];
    }

    return result;
}