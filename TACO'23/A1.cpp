#include <iostream>
#include <string>

std::string removeSubstring(const std::string& s) {
    std::string result = s;
    size_t found = result.find("01");

    while (found != std::string::npos) {
        result.erase(found, 2);
        found = result.find("01");
    }

    return result;
}

int main() {
    std::string binaryString;
    std::getline(std::cin, binaryString);

    std::string finalString = removeSubstring(binaryString);

    std::cout << finalString.length() << std::endl;
    std::cout << finalString << std::endl;

    return 0;
}
