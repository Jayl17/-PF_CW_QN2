#include <iostream>
#include <vector>
using namespace std;

int main() {

   cout << "Enter a positive integer number to find its divisors.\n";
   cout << "Enter a non-positive integer to terminate the program.\n";
   while (true) {
       int num;
       char ter;
       cout << "Enter a positive integer: ";
       cin >> num;
       if (num <= 0) {
           cout << num << " is not a positive integer.\n";
           break;
       }
       cout << "Positive divisors of " << num << " (in decreasing order):\n";
       vector<int> divisors;
       for (int i = num; i >= 1; i--) {
           if (num % i == 0) {
               divisors.push_back(i);
           }
       }
       for (int divisor : divisors) {
           cout << divisor << endl;
       }
       cout << "Would you like to see the divisors of another integer (Y/N)? ";
       cin >> ter;

       if (ter == 'n') {
           cout << "Program terminated.\n";
           break;
       }
   }
   return 0;
}
