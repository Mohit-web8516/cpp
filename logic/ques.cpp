//question based on while loop
//Find the largest digit in the given number. 
// #include <iostream>
// using namespace std;

// int main()
// {
//     int num, digit, largest = 0;
//     cout << "Enter a number: ";
//     cin >> num;

//     while(num != 0)
//     {
//         digit = num % 10;
//         if(digit > largest)
//         {
//             largest = digit;
//         }
//         num = num / 10;
//     }
//     cout << "Largest digit = " << largest;
//     return 0;
// }

//////////////////////////////////
//print all factor of a given num

// #include <iostream>
// using namespace std;

// int main()
// {
//     int num;
//     cout << "Enter number: ";
//     cin >> num;
//     cout << "Factors are: ";
//     for(int i = 1; i <= num; i++)
//     {
//         if(num % i == 0)
//         {
//             cout << i << " ";
//         }
//     }
//     return 0;
// }


//////////////////////////////////////

//sum of all factors of a number
// #include <iostream>
// using namespace std;

// int main()
// {
//     int num, sum = 0;
//     cout << "Enter number: ";
//     cin >> num;
//     for(int i = 1; i <= num; i++)
//     {
//         if(num % i == 0)
//         {
//             sum += i;
//         }
//     }
//     cout << "Sum of factors = " << sum;
//     return 0;
// }


/////////////////////////////
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    // Traversal
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
