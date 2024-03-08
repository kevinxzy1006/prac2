// Function to find the minimum element in the array
int array_min(int integers[], int length) {
    // If the length is 0 or negative, return -1
    if (length <= 0) {
        return -1;
    }

    // Initialize min_value to maximum possible integer value
    int min_value = INT_MAX;
    
    // Find the minimum element
    for (int i = 0; i < length; ++i) {
        if (integers[i] < min_value) {
            min_value = integers[i];
        }
    }

    return min_value;
}

// Function to find the maximum element in the array
int array_max(int integers[], int length) {
    // If the length is 0 or negative, return -1
    if (length <= 0) {
        return -1;
    }

    // Initialize max_value to minimum possible integer value
    int max_value = INT_MIN;

    // Find the maximum element
    for (int i = 0; i < length; ++i) {
        if (integers[i] > max_value) {
            max_value = integers[i];
        }
    }

    return max_value;
}

// Function to determine the sum of minimum and maximum elements in the array
int sum_min_max(int integers[], int length) {
    // Find the minimum and maximum elements
    int min_value = array_min(integers, length);
    int max_value = array_max(integers, length);

    // If either minimum or maximum element is not found, return -1
    if (min_value == -1 || max_value == -1) {
        return -1;
    }

    // Return the sum of minimum and maximum elements
    return min_value + max_value;
}