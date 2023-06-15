#include <iostream>
#include <string>
 
std::string reverse(std::string str);
 
int main()
{
    std::string text;
    std::cout << "Enter a string: "; // вводим строку
    getline(std::cin, text);
 
    std::cout << "\nString in reverse order: ";
    std::cout << reverse(text) << std::endl;
}
 
std::string reverse(std::string str)
{
    const size_t length {str.length()};
    // проходим по всем символам строки и меняем их местами с противоположными
    for (size_t i {}; i < length / 2; ++i)
    {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
    return str;
}