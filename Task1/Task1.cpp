#include <iostream>
#include <string>

int function(std::string str, int forbidden_length) {
    int l = str.length();
    if (l == forbidden_length) throw std::string{ "Вы ввели слово запретной длины! До свидания" };

    return l;
}

int main() {
    std::setlocale (LC_ALL, "Russian");
    int forbidden_length;
    std::cout << "Введите запретную длину: ";
    std::cin >> forbidden_length;

    std::string str = "";
    int tmp = 0;
    do {
        std::cout << "Введите слово: ";
        std::cin >> str;
        try {
            tmp = function(str, forbidden_length);
        }
        catch (const std::string& err_message) {
            std::cout << err_message << std::endl;
            return 0;
        }
        std::cout << "Длина слова \"" << str << "\" равна " << tmp << std::endl;
    } while (true);

    return 0;
}