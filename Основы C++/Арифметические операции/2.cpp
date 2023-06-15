#include <iostream>
 
int main()
{
  const double pi {3.1415};     // число pi
  double radius {};
  std::cout << "Enter the radius: "; // вводим радиус
  std::cin >> radius;
   
  const auto area{ pi * radius * radius };
 
  std::cout << "The area of the circle: " << area;
}