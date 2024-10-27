#include "entropy.hpp"
#include <iostream>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        std::cerr << "Использование: " << argv[0] << " <text.txt> <output.txt>" << std::endl;
        return 1;
    }

    const std::string inputFilename = argv[1];
    const std::string outputFilename = argv[2];

    calculateShannonEntropy(inputFilename, outputFilename);

    return 0;
}

