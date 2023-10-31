#include <iostream>

int main(int argc, char *argv[])
{
   int a, b;
   int sum;
   
   std::cout << "Type number 1: ";
   std::cin >> a;
   std::cout << "Type number 2: ";
   std::cin >> b;
   
   sum = ((b*(b+1) - a*(a+1))/2)-b+a;
   
   std::cout << "Hello CMake!" << std::endl;
   
   std::cout << sum << "\n";
   
   return 0;
}
