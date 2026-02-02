#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter your number";
    cin>>n;
    if (n%2==0) 
    cout << "even number";
    if (n%2!= 0) 
    cout << "odd number";
}
//////////////////
/////////////////
// #include<iostream>
// using namespace std;
// int main (){
//     int n;
//     cout<<"enter your number";
//     cin>>n;
//     if (n%2==0)
//        cout << "even number";
//     else 
//        cout << "odd number " <<endl;
//        cout <<" wow  mohit you have done it !!!!";

// }
//////////////////
////////////absolute value program/////
/////////////////
/////////////////////
// 
// #include<iostream>
// using namespace std;
// int main (){
//     int n;
//     cout<<"enter your number";
//     cin>>n;
//     if (n>=0)
//        cout << n;
//     else 
//        cout <<-n ;

// }
//////////////progfit loss program////
// #include<iostream>
// using namespace std;
// int main (){
//     int cp;
//     cout<<"enter your cost price";
//     cin>>cp;
//     int sp;
//     cout<<"enter your selling  price ";
//     cin >>sp;
//     if (sp >cp ){
//         cout <<"profit";
//     }
//     if (sp <cp){
//         cout <<"loss";
//     }
//     if (sp==cp){
//         cout <<"no profit no loss";
//     }
// }
////////
// #include<iostream>
// using namespace std;
// int main (){
//     int cp;
//     cout<<"enter your cost price";
//     cin>>cp;
//     int sp;
//     cout<<"enter your selling  price ";
//     cin >>sp;
//     if (sp >cp ){
//         cout <<"profit";
//     }
//     else if  (sp <cp){
//         cout <<"loss";
//     }
//     else 
//         cout <<"no profit no loss";
    
// }
//////////////
// #include <iostream>
// using namespace std;
// int main (){
//     int n;
//     cout <<"enter n :";
//     cin >> n;
//     if (n >99 and n < 1000)
//         cout <<"3 digit number ";
//     else 
//         cout <<"not a 3 digit number ";
// }
////////////////ternary operator/////
// #include<iostream>
// using namespace std;
// int main (){
//     int n;
//     cout<<"enter n :";
//     cin>>n;
//     (n % 2 == 0)? cout << "even" : cout <<"odd";   
     //(condition ) ? if true : if false ;   
// }
/////////////switch statement //////////////
// #include <iostream>
// using namespace std;
// int main (){
//     int x = 10 ,y = 20 ;
//     if (x==y)
//     cout << x << ""<<y;
// }
/////////////loops///////////////////
// #include <iostream>
// using namespace std;
// int main (){
//      for (int i = 1 ;i <= 11 ; i++)
//      cout <<"radhe radhe radhe radhe radhe radhe radhe radhe radhe  "<<endl;
// }
/////////////////////
// #include <iostream>
// using namespace std;
// int main (){
//     int n;
//     cout <<"enter your number :";
//     cin>>n;
//      for (int i = 1 ;i <= n ; i++)
//      cout <<"radhe radhe radhe radhe radhe radhe radhe radhe radhe  "<<endl;
// }
//////////////
// #include <iostream>
// using namespace std;
// int main (){
//      for (int i = 1 ;i <= 100 ; i++){
//        if (i % 2==0) cout <<i << " ";
//      }
// }   
/////////////ap AND GP /////////////
// #include <iostream>
// using namespace std;
// int main (){
//     int n;
//     cout<<"enter n :";
//     cin >>n;
//      for (int i = 1 ;i <= 2*n-1 ; i+=2){
//       cout <<i << " ";
//      }
// }   
//////////////////gp /////////////
// #include <iostream>
// using namespace std;
// int main (){
//     int n;
//     cout<<"enter n :";
//     cin >>n;
//     int a = 1;
//      for (int i = 1 ;i <= n ; i++){
//       cout <<a << " ";
//       a = a*2;
//      }
// }  
/////////////////wap to calculate factor///////
// #include <iostream>
// using namespace std;
// int main (){
//     int n;
//     cout<<"enter n :";
//     cin >>n;
//      for (int i = 1;i <= n ;i++){
//         if (n%i==0) cout << i << "  ";

//      }
// }   
////////////////wap to check number is composite or not ???/
// #include <iostream>
// using namespace std;
// int main (){
//     int n;
//     cout<<"enter n :";
//     cin >>n;
//      for (int i = 2 ;i <= n/2 ; i++){
//           if (n%i==0){
//             cout << "COMPOSITE";
//             break;
//        }
//     }
// }    
//////////////////continue statement////////////
// #include <iostream>
// using namespace std;
// int main (){ 
//      for (int i = 1 ;i <=20 ; i++){
//       if (i ==2) continue;
//       if (i ==12) continue;
//       cout <<i << " ";
//      }
// }   
//////////////wap to print odd number using continue 
// #include <iostream>
// using namespace std;
// int main (){ 
//       for (int i = 1 ;i <=100 ; i++){
//       if (i %2 ==0) continue;
//       cout <<i << " " <<endl;
//      }
// }  
///////////while loop
// #include <iostream>
// using namespace std;
// int main (){
//     int i = 1;
//     while (i <= 10){
//         cout<<i <<endl;
//         i++;
//     }
// } 
///////////do while loop
// #include <iostream>
// using namespace std;
// int main (){
//     int i = 11;
//     do {
//         cout <<i << endl;
//         i++;
//     } while (i <= 10);
// }
/////////////////wap to count digit of a number 
// #include <iostream>
// using namespace std;
// int main (){ 
//     int n ;
//     cout<<"enter your number :";
//     cin >> n;
//     int count = 0;
//     while (n!=0){
//         n = n/10;
//         count++;
//     }
//      cout << count;
// }   
/////////wap to print sum of digits of a given number 
// #include <iostream>
// using namespace std;
// int main (){ 
//     int n ;
//     cout<<"enter your number :";
//     cin >> n;
//     int sum = 0;
//     while (n!=0){
//         int ld = n%10;
//         n = n/10 ;
//        sum += ld ;
//     }
//      cout <<sum ;
// }   
////////////////////////wap to find reverse of a number 
// #include <iostream>
// using namespace std;
// int main (){ 
//     int n ;
//     cout<<"enter your number :";
//     cin >> n;
//     int r = 0;
//     while (n!=0){
//         int ld = n%10;
//         r *= 10 ;
//         r += ld ;
//         n /= 10;
//     }
//      cout <<r ;
// }   
/////////////////
// #include <iostream>
// using namespace std;
// int main (){ 
//     int n ;
//     cout<<"enter your number :";
//     cin >> n;
//     int r = 0;
//     while (n!=0){
//         int ld = n%10;
//         r *= 10 ;
//         r += ld ;
//         n /= 10;
//     }
//      cout <<r ;
// }
////////////////////pattern printing /////////


