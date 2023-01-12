
#include <iostream>
#include <string>
#include <unordered_map>

std::string convert_string(const std::string& input)
{
    std::unordered_map<char, int> char_counts;
    std::string output;

    for (char c : input) {
        char_counts[std::tolower(c)]++;
    }

    for (char c : input) {
        c = std::tolower(c);
        if (char_counts[c] == 1) {
            output += "(";
        }
        else {
            output += ")";
        }
    }

    return output;
}

int main()
{
    std::string input;
    std::getline(std::cin, input);

    std::string output = convert_string(input);
    std::cout << output << std::endl;

    return 0;
}