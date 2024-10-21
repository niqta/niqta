#include "string.hpp"

int countOccurrences(const std::string& searchStr, std::string strings[], int numStrings) {
    int totalCount = 0;

    for (int i = 0; i < numStrings; ++i) {
        size_t pos = strings[i].find(searchStr);
        // Ищем вхождения
        while (pos != std::string::npos) {
            totalCount++;
            pos = strings[i].find(searchStr, pos + searchStr.length());
        }
    }

    return totalCount;
}
