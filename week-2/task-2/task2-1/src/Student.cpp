#include <iostream>
#include <string>
#include <chrono>
#include <ctime>
#include <iomanip>
#include <sstream>

class Student {
private:
    std::string name;                                // Имя
    std::chrono::system_clock::time_point birthDate; // Дата рождения
    std::string group;                               // Группа
    int studentId;                                   // Код студента
    double averageScore;                             // Средний балл

public:
    // Конструктор класса
    Student(const std::string& name, const std::chrono::system_clock::time_point& birthDate,
            const std::string& group, int studentId, double averageScore)
            : name(name), birthDate(birthDate), group(group), studentId(studentId), averageScore(averageScore) {}

    // Геттеры
    std::string getName() const { return name; }
    std::chrono::system_clock::time_point getBirthDate() const { return birthDate; }
    std::string getGroup() const { return group; }
    int getStudentId() const { return studentId; }
    double getAverageScore() const { return averageScore; }

    // Сеттеры
    void setName(const std::string& newName) { name = newName; }
    void setBirthDate(const std::chrono::system_clock::time_point& newDate) { birthDate = newDate; }
    void setGroup(const std::string& newGroup) { group = newGroup; }
    void setStudentId(int newId) { studentId = newId; }
    void setAverageScore(double newScore) { averageScore = newScore; }

    // Метод для вычисления возраста
    int getAge() const {
        auto now = std::chrono::system_clock::now();
        auto ageInSeconds = std::chrono::duration_cast<std::chrono::seconds>(now - birthDate).count();
        return ageInSeconds / (365 * 24 * 60 * 60); // Простой расчет в годы
    }

    // Метод для вывода информации о студенте
    std::string toString() const {
        std::time_t birthTime = std::chrono::system_clock::to_time_t(birthDate);
        std::ostringstream oss;
        oss << "Никита: " << name << "\n"
            << "Дата рождения: " << std::put_time(std::localtime(&birthTime), "%Y-%m-%d") << "\n"
            << "Группа: " << group << "\n"
            << "Код студента: " << studentId << "\n"
            << "Средний балл: " << averageScore << "\n";
        return oss.str();
    }

    // Метод для проверки, является ли студент отличником
    bool isExcellentStudent() const {
        return averageScore >= 4.8;
    }
};

int main() {
    // Создание объектов класса Student
    auto birthDate1 = std::chrono::system_clock::now() - std::chrono::hours(24 * 365 * 21); // Примерно 21 год
    Student student1("Никита Сюрняев", birthDate1, "Группа А", 1, 4.9);
    
    auto birthDate2 = std::chrono::system_clock::now() - std::chrono::hours(24 * 365 * 19); // Примерно 19 лет
    Student student2("Петр Петров", birthDate2, "Группа Б", 2, 4.5);

    // Тестирование методов
    std::cout << student1.toString() << std::endl;
    std::cout << "Возраст: " << student1.getAge() << " лет\n";
    std::cout << "Отличник: " << (student1.isExcellentStudent() ? "Да" : "Нет") << "\n\n";

    std::cout << student2.toString() << std::endl;
    std::cout << "Возраст: " << student2.getAge() << " лет\n";
    std::cout << "Отличник: " << (student2.isExcellentStudent() ? "Да" : "Нет") << "\n";

    return 0;
}
