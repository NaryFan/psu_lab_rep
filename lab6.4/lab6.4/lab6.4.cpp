#include <iostream>
#include <string>

std::string extractFileName(const std::string& filePath) {
    size_t lastSlashPos = filePath.find_last_of("/\\");

    if (lastSlashPos == std::string::npos)
        return filePath;

    std::string fileName = filePath.substr(lastSlashPos + 1);

    size_t dotPos = fileName.find_last_of('.');

    if (dotPos == std::string::npos || dotPos == 0)
        return filePath;

    // Извлекаем подстроку до первого символа '.'
    fileName = fileName.substr(0, dotPos);

    return fileName;
}

int main() {
    std::string filePath = "C:/path/to/test.exe";
    std::string fileName = extractFileName(filePath);
    std::cout << fileName << std::endl;

    return 0;
}
