#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Open the file
    std::ifstream file("/example.txt");
    if (!file.is_open()) {
        std::cerr << "Failed to open the file!" << std::endl;
        return 1;
    }

    // Read the file content
    std::string line;
    while (std::getline(file, line)) {
        std::cout << line << std::endl;
    }

    // Close the file
    file.close();
    return 0;
}
