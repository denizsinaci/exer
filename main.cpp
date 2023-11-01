#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

// Function to calculate the sum of integers from 'a' to 'b'
int sumOfIntegers(int a, int b) {
    return ((b*(b+1) - a*(a+1))/2) - b + a;
}

// Function to calculate the factorial of 'n'
double factorialOfNumber(int n) {
    double factorial = 1.0;
    for(int i = 1; i <= n; ++i) {
        factorial *= i;
    }
    return factorial;
}

int main(int argc, char *argv[])
{
   int a, b;
   
   cout << "Type number 1: ";
   cin >> a;
   cout << "Type number 2: ";
   cin >> b;
   
   cout << "For part 1a!" << endl;
   cout << abs(sumOfIntegers(a, b)) << "\n";
   
   cout << "For part 1b!" << endl;
   
   int n;
   cout << "Enter a positive integer: ";
   cin >> n;

   if (n < 0) {
       cout << "Error! Factorial of a negative number doesn't exist." << endl;
   } else {
       cout << "Factorial of " << n << " = " << fixed << factorialOfNumber(n) << endl;    
   }
   
   return 0;
}
