//question based on while loop
//Find the largest digit in the given number. 
#include <iostream>
using namespace std;

int main()
{
    int num, digit, largest = 0;
    cout << "Enter a number: ";
    cin >> num;

    while(num != 0)
    {
        digit = num % 10;
        if(digit > largest)
        {
            largest = digit;
        }
        num = num / 10;
    }
    cout << "Largest digit = " << largest;
    return 0;
}