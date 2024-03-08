void count_digits(int array[4][4]) {
    int counts[10] = {0}; // Initialize an array to store counts for each digit from 0 to 9

    //get all the numbers of the elements in the given array
    for(int i=0; i<4; i++) {
        for(int j=0; j<4; j++) {
            int number = array[i][j]; //get the current number
            counts[digit]++; //Increment the count of the current number
        }
    }

    //Print the numbers
    for(int k=0; k<10; k++) {
        std::cout << "k" << ":" << counts[k] << ";" << std::endl; //Print the numbers and the times count 
    }
    std::cout << std::endl;
}