#include <iostream>
/*

Title: Chapter 2 Exercise 1 - Sum of Two Numbers

      File Name: Chapter2Ex1_FirstName_LastName

      Programmer: Katlyn Winkelhake

      Date: 08/2024

       Requirements: Write a program that stores the integers 50 and 100 in variables, and stores the sum of these two in a variable named total.

Use constants when appropriate. Naming convention for constants should look like this: STATE_TAX

Use camel casing for regular variables as well as module names; e.g. firstName.

Some assignments may require more than this, but at a minimum your programs should have these elements.

*/
// single line comment

using namespace std;

int main()
    {
        int number1;
        int number2;
        cout << "Please enter a number ";
        cin >> number1;
        cout << "Please enter another number ";
        cin >> number2;
        int answer = number1 + number2;
        cout << "The sum of " << number1 << " and " << number2 << " is " << answer;

    }