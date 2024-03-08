void print_summed(int array1[3][3], int array2[3][3]) {
    // Iterate through the matrices
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            // Print the sum of corresponding elements from both matrices
            std::cout << array1[i][j] + array2[i][j] << " ";
        }
        std::cout << std::endl; // Move to the next row after printing all elements in the current row
    }
}