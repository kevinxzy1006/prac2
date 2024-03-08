#include <iostream>

int main() {
    //declare the function
    int array[4][4] = {{1, 2, 3, 4},
                        {5, 6, 7, 8},
                        {9, 10, 11, 12},
                        {13, 14, 15, 16}};

    int diagonal_sum = sum_diagonal(array); //call the function to calculate the sum
    std::cout << "Sum of the elements along the main diagonal is: " << diagonal_sum << std::endl;

    return 0;
}