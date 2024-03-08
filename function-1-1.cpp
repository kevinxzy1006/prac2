//Create a function to calculate the sum of the elements at the main diagonal of the array
int sum_diagonal(int array[4][4]) {
    int sum = 0;
    
    for(int i=0; i<4; i++) {
        sum += array[i][i]; //add the elements at the position (i,i) to the sumß
    }
    return sum;
}