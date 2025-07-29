// Navya Pawan Khajuria
// 24070123151
// B3

#include <iostream>
#include <string>

int main() {
    std::string str1, str2;

    std::cout << "Enter the first string: ";
    std::getline(std::cin, str1);  

    std::cout << "Enter the second string: ";
    std::getline(std::cin, str2);  

    std::string result = str1 + " " + str2;  
    std::cout << "Concatenated string: " << result << std::endl;

    return 0;
}

//Output:
//Enter the first string: navya
//Enter the second string: vaani
//Concatenated string: navya vaani
