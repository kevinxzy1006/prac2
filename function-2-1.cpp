void print_binary_str(std::string decimal_number) {
    // Convert string to integer
    int decimal = std::stoi(decimal_number);

    // Convert decimal to binary
    std::string binary = "";
    while (decimal > 0) {
        int remainder = decimal % 2;
        binary = std::to_string(remainder) + binary;
        decimal /= 2;
    }

    // Print binary result
    std::cout << binary << std::endl;
}