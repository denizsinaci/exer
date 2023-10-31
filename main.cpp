#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
   int a, b;
   int sum;
   
   cout << "Type number 1: ";
   cin >> a;
   cout << "Type number 2: ";
   cin >> b;
   
   sum = ((b*(b+1) - a*(a+1))/2)-b+a;
   
   cout << "For part 1a!" << endl;
   
   cout << sum << "\n";
   
   cout << "For part 1b!" << endl;
   
   int n;
    double factorial = 1.0;

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0)
        cout << "Error! Factorial of a negative number doesn't exist.";
    else {
        for(int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        cout << "Factorial of " << n << " = " << factorial;    
    }
   
   return 0;
}
