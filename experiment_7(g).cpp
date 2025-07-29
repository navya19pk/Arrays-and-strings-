// Navya Pawan Khajuria
// 24070123151
// B3

#include <iostream>
#include <string>
#include <algorithm> 

int main() {
    std::string input;

    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    std::reverse(input.begin(), input.end());

    std::cout << "Reversed string: " << input << std::endl;

    return 0;
}

//Output:
//Enter a string: navya
//Reversed string: ayvan
