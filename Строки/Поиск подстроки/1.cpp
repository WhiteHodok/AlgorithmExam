#include <iostream>
#include <string>
#include <vector>
 
int main()
{
    std::string text;   // введенный текст
    std::cout << "Enter some text:\n";
    std::getline(std::cin, text);       // вводим текст
 
    const std::string separators {" ,;:.\"!?'\n"};      // разделители слов
    std::vector<std::string> words;                     // вектор для хранения слов
    std::vector<size_t> counts;                         // счетчик вхождений для каждого слова
 
    size_t start {text.find_first_not_of(separators)};  // начальный индекс первого слова
    // в цикле ищем все слова, пока start представляет действительный индекс
    while (start != std::string::npos)
    {
        // позиция сразу после окончания слова
        size_t end {text.find_first_of(separators, start + 1)};
        // если разделитель не найден, например, после слова больше нет символов
        if (end == std::string::npos)                            
        {
            end = text.length(); 
        }
        std::string word{ text.substr(start, end - start) };     // получаем слово
 
        // проверяем, есть ли слово в векторе
        bool isExists {false};                  // true - если слово уже есть в векторе
        for (unsigned i {}; i < words.size(); i++)
        {
            if (words[i] == word)   // если слово найдено
            {
                ++counts[i];        // увеличиваем счетчик слов
                isExists = true;       // указываем, что слово найдено
                break;              // выходим из цикла
            }
        }
        if (!isExists)                // если же слово не найдено
        {
            words.push_back(word);      // добавляем слово в вектор
            counts.push_back(1);        // для счетчика слова устанавливаем 1
        }
        start = text.find_first_not_of(separators, end + 1);  // находим начальный индекс следующего слова
    }
    std::cout << "\nWords" << std::endl;
    for (unsigned i {}; i < words.size(); ++i)
    {
        std::cout << words[i] << ": " << counts[i] << std::endl;
    }
}