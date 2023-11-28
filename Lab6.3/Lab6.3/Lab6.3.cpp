#include <iostream>
#include <cctype>
#include <string>

void fixSentenceCase(std::string& sentence) {
    if (!sentence.empty()) {
        sentence[0] = std::toupper(sentence[0]);
    }

    for (std::size_t i = 1; i < sentence.length(); i++) {
        sentence[i] = std::tolower(sentence[i]);
        
        if (sentence[i] == '.' || sentence[i] == '!' || sentence[i] == '?') {
            if (i + 2 < sentence.length()) {
                i +=2;
                sentence[i] = std::toupper(sentence[i]);
            }
        }
    }
}

int main() {
    std::string sentence;
    std::cout << "Введите предложение: ";
    std::getline(std::cin, sentence);

    fixSentenceCase(sentence);

    std::cout << "Исправленное предложение: " << sentence << std::endl;

    return 0;
}