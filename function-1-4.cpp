void print_scaled(int array[3][3], int scale) {
    // Iterate through the matrix
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            // Print the scaled element
            std::cout << array[i][j] * scale << " ";
        }
        std::cout << std::endl; // Move to the next row after printing all elements in the current row
    }
}