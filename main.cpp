// Main.cpp : contains 'main' function

#include <iostream>
#include "Calculator.h"

using namespace std;

int main() {

     double x = 0.0;
     double y = 0.0;
     double result = 0.0;
     char oper = '+';

     cout << "Calculator Console App" << endl << endl;
     cout << "Please enter the opteration to perform. Format a+b | a-b | a*b | a/b" << endl;
     
     Calculator c;
     while (true) {
          cin >> x >> oper >> y;
          if (oper == '/' && y == 0){
               cout << "Attemped to divide by zero; Fatal error" << endl;
          } else {
               result = c.Calculate(x, oper, y);
               cout << "Result " << "of " << x << oper << y << " is: " << result << endl;
          }
     }

     return 0;

}