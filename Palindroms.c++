#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter Number : ";
    cin >> number;
    int n , digit , rev = 0;
    n = number;
    while(number != 0)
    {
        digit = number % 10;
        rev = (rev * 10) + digit;
        number = number / 10;
    }
    cout << rev << endl;
    if(n == rev)
    {
        cout << "Palindrome Number" << endl;
    }
    else
    {
        cout << "Not Palindrome Number" << endl;
    }
}