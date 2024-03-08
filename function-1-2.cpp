int is_identity(int array[10][10]) {
    for (int i=0; i<10; i++) {
        for(int j=0; j<10; j++) {
            if(i == j && array[i][j] != 1) {

                    return 0; //elements in main diagonal should be 1
                } else if (i != j && array [i][j] != 0) {

                    return 0; //elements not in main diagonal should be 0
            }
        }
    }

    return 1; //Indentity matrix
}