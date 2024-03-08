#include <iostream>

int main() {
    int array[10][10] = {{1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                         {0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
                         {0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
                         {0, 0, 0, 1, 0, 0, 0, 0, 0, 0},
                         {0, 0, 0, 0, 1, 0, 0, 0, 0, 0},
                         {0, 0, 0, 0, 0, 1, 0, 0, 0, 0},
                         {0, 0, 0, 0, 0, 0, 1, 0, 0, 0},
                         {0, 0, 0, 0, 0, 0, 0, 1, 0, 0},
                         {0, 0, 0, 0, 0, 0, 0, 0, 1, 0},
                         {0, 0, 0, 0, 0, 0, 0, 0, 0, 1}};

    if (is_identity(array)) {
        std::cout << "This is an identity array" << std::endl;
    } else {
        std::cout << "This is not an identity array" << std::endl
    }
}