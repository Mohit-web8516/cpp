//1. Sum of First N Natural Numbers (for loop)

// #include <iostream>
// using namespace std;
// int main() {
//     int n=10, sum=0;
//     for(int i=1;i<=n;i++) sum+=i;
//     cout<<"Sum = "<<sum;
// }

//2. Factorial of a Number (while loop)

// #include <iostream>
// using namespace std;
// int main() {
//     int n=5, fact=1;
//     while(n>0){ fact*=n; n--; }
//     cout<<"Factorial = "<<fact;
// }



//3. Reverse a Number (do-while loop)

#include <iostream>
using namespace std;
int main() {
    int num=1234, rev=0;
    do {
        rev=rev*10+(num%10);
        num/=10;
    } while(num>0);
    cout<<"Reversed = "<<rev;
}
