#include <iostream>
#include <string>
#include <vector>
 
int main()
{
    std::vector<std::string> names;
    std::vector<double> grades;
   
    size_t max_length {};        // Longest name length
    double average_grade {};     // для хранения среднего бала
    // в цикле считываем имена и оценки студентов
    while (true)
    {
        std::cout << "Enter a student name: ";
        std::string name;                       // считываем имя студента
        std::getline(std::cin, name);
 
        names.push_back(name);  // сохраняем в вектор имен
     
        if (max_length < name.length()) 
            max_length = name.length();
 
        std::cout << "Enter " << name << "'s grade: ";
        double grade {};                        // вводим оценку студента
        std::cin >> grade;
        grades.push_back(grade);                // сохраняем в вектор оценок
 
        average_grade += grade;                 // сначала вычисляем сумму всех оценок
 
        std::cout << "Finish (y/n): ";          // спрашиваем, закончить ли ввод
        char answer {};
        std::cin >> answer;
     
        // Игнорируем введенный перевод строки после символов y/n
        // чтобы при следующем вызове std::getline() не считывалась пустая строка
        std::cin.ignore();
        // если введено Y/y, завершаем ввод и выходим из цикла
        if (answer == 'Y' || answer == 'y') break;
    } 
 
    // вычисляем среднюю оценку
    average_grade /= grades.size();
    std::cout << "\nAverage grade: " << average_grade << std::endl;
 
    // выводим имена студентов и их оценки
    std::cout << "Name\tGrade"<< std::endl;
    for (size_t i {}; i < names.size(); ++i)
    {
        std::cout << names[i] << "\t" << grades[i] << std::endl;
    }
}