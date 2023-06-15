#include <iostream>
 
int main()
{
  const int m_per_km{ 1000 };    // количество метров в километре 
 
  int meters{};
  std::cout << "Enter a number of metres: ";
  std::cin >> meters;   // вводим общее количество метров
 
  const int kilometers{ meters / m_per_km };        // получаем количество километров
  const int remaining_meters{ meters % m_per_km };  // получаем оставшиеся метры
 
  std::cout << meters << " meters = " << kilometers << " kilometers and " << remaining_meters << " meters.";
}