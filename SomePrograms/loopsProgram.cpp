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

// #include <iostream>
// using namespace std;
// int main() {
//     int num=1234, rev=0;
//     do {
//         rev=rev*10+(num%10);
//         num/=10;
//     } while(num>0);
//     cout<<"Reversed = "<<rev;
// }


//4. Multiplication Table (for loop)


// #include <iostream>
// using namespace std;
// int main() {
//     int n=7;
//     for(int i=1;i<=10;i++)
//     cout<<n<<" x "<<i<<" = "<<n*i<<"\n";
// }


//5. Check Prime Number (while loop)


// #include <iostream>
// using namespace std;
// int main() {
//     int n=29, i=2;
//     bool prime=true;
//     while(i*i<=n){
//         if(n%i==0){ prime=false; break; }
//         i++;
//     }
//     cout<<(prime?"Prime":"Not Prime");
// }


//6. Fibonacci Series (for loop)


// #include <iostream>
// using namespace std;
// int main() {
//     int n=10, a=0, b=1;
//     cout<<a<<" "<<b<<" ";
//     for(int i=2;i<n;i++){
//         int c=a+b; cout<<c<<" ";
//         a=b; b=c;
//     }
// }


//7. Pattern Printing (nested for loop)

// #include <iostream>
// using namespace std;
// int main() {
//     int n=5;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++) cout<<"* ";
//         cout<<"\n";
//     }
// }


//8. Sum of Digits (while loop)


// #include <iostream>
// using namespace std;
// int main() {
//     int num=987, sum=0;
//     while(num>0){ sum+=num%10; num/=10; }
//     cout<<"Sum of digits = "<<sum;
// }

//9. Range-Based For Loop Example


// #include <iostream>
// #include <vector>
// using namespace std;
// int main() {
//     vector<int> v={10,20,30,40};
//     for(int x:v) cout<<x<<" ";
// }


//10. Palindrome Check (do-while loop)



// #include <iostream>
// using namespace std;
// int main() {
//     int num=121, temp=num, rev=0;
//     do {
//         rev=rev*10+(temp%10);
//         temp/=10;
//     } while(temp>0);
//     cout<<(rev==num?"Palindrome":"Not Palindrome");
// }



