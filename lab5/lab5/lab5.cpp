#include <iostream>
#include <algorithm>

const int NUM_STUDENTS = 3;
const int NUM_GRADES = 5;

struct STUDENT {
    std::string sername;
    std::string initials;
    std::string group;
    float grades[NUM_GRADES];
};

bool compareByGroup(const STUDENT& student1, const STUDENT& student2) {
    return student1.group < student2.group;
}

int main() {
    setlocale(LC_ALL, "Russian");

    STUDENT students[NUM_STUDENTS];

    // Ввод данных с клавиатуры
    std::cout << "Введите данные о студентах:\n";
    for (int i = 0; i < NUM_STUDENTS; i++) {
        std::cout << "Студент " << i + 1 << ":\n";

        std::cout << "Фамилия и инициалы: ";
        std::cin >> students[i].sername >> students[i].initials;

        std::cout << "Номер группы: ";
        std::cin >> students[i].group;

        std::cout << "Успеваемость (введите " << NUM_GRADES << " оценок): ";
        for (int j = 0; j < NUM_GRADES; j++) {
            std::cin >> students[i].grades[j];
        }
    }

    // Сортировка студентов по возрастанию номера группы
    std::sort(students, students + NUM_STUDENTS, compareByGroup);

    // Вывод фамилий и номеров групп студентов с средним баллом больше 4
    bool hasStudents = false;
    std::cout << "\nСтуденты с средним баллом больше 4:\n";
    for (int i = 0; i < NUM_STUDENTS; i++) {
        float sumGrades = 0;
        for (int j = 0; j < NUM_GRADES; j++) {
            sumGrades += students[i].grades[j];
        }
        float averageGrade = sumGrades / NUM_GRADES;
        if (averageGrade > 4) {
            std::cout << "Студент " << i + 1 << ":\n";
            std::cout << "Фамилия и инициалы: " << students[i].sername << ' ' << students[i].initials << "\n";
            std::cout << "Номер группы: " << students[i].group << "\n";
            std::cout << "Средний балл: " << averageGrade << "\n\n";
            hasStudents = true;
        }
    }

    if (!hasStudents) {
        std::cout << "Нет студентов с средним баллом больше 4.\n";
    }

    return 0;
}