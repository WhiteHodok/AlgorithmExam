Задание 1 :

- Дан следующий класс Integer, который хранит некоторое число:


```sh
#include <iostream>
 
class Integer
{
public:
    Integer(int number);
    int getValue();
    void setValue(int number);
    void print();
private:
    int value;
};
Integer::Integer(int number)
{
    value=number;
    std::cout << "Object created" << std::endl;
}
int Integer::getValue(){ return value; }
void Integer::setValue(int number) { value = number; }
void Integer::print()
{
    std::cout << "Value: " << value << std::endl;
}
```

- Исправьте класс, сделав константными все функции, которые можно сделать константными. Определите в функции main переменную и константу этого класса Integer и и проверьте, какие операции можно применять к ним.
