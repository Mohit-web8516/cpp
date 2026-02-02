// #include <iostream>
// using namespace std;
// void greet (){
//       cout<<"good morning "<<endl;
//       cout<<"how are you?"<<endl;
// }
// int main (){
//     greet(); //function cALL
//     cout<<"hey"<<endl;
//     greet(); //FUNCTION CALL
// }
///////////////////
// #include <iostream>
// using namespace std;
// void usa (){
//       cout<<"YOU ARE IN USA "<<endl;
// }
// void india(){
//     cout<<"YOU ARE IN INDIA "<<endl;
// }
// int main (){
//     cout<<"hey"<<endl;
//     usa();
//     india(); //FUNCTION CALL
// }
/////////////////
// #include <iostream>
// using namespace std;
// void usa (){
//       cout<<"YOU ARE IN USA "<<endl;
//       return ;
// }
// void india(){
//     cout<<"YOU ARE IN INDIA "<<endl;
//     usa();
// }
// int main (){
//     cout<<"hey"<<endl;
//     india(); //FUNCTION CALL
//     return 0;
// }
//////////////
// #include <iostream>
// using namespace std;
// int sum(int a,int b){
//     cout<<a+b;
// }//////////////
// int main (){
//     int a;
//     cout<<"enter your number :";
//     cin>>a;
//     int b;
//     cout<<"enter your second number :";
//     cin>>b;
//     cout<<sum(a,b);
// }
///////////////////
// #include <iostream>
// #include <cmath>
// using namespace std;
// int main(){
//     cout<<sqrt(16);
// }
////////pointer 
// #include <iostream>
// using namespace std;
// int main (){
//     int x = 3;
//     int* p = &x;
//     // cout<<&x<<endl;
//     cout<<p<<endl;
// }
///////////////
// #include <iostream>
// using namespace std;
// int main (){
//     int x = 13;
//     int* ptr = &x;
//     cout<<x<<endl;
//     *ptr = 23;
//     cout<<x<<endl;
// }
//////////////////swap usig pointers
// #include <iostream>
// using namespace std;
// void swap(int* a, int*b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int main (){
//     int x = 35;
//     int y = 45;
//     cout<<x<<" "<<y<<endl;
//     swap(&x,&y);
//     cout<<x<<" "<<y<<endl;
// }
//////recursion
// #include <iostream>
// using namespace std;
// void greet (){
//     cout<<"hey"<<endl;
//     greet();
// }
// int main (){
//     greet();
// }
///////////////print n to 1 by recursion
// #include <iostream>
// using namespace std;
// void print (int n ){
//       if (n == 0) return;
//       cout<<n<<endl;
//       print (n-1);
// }
// int main (){
//     print(10);
// }
////////////////to print 1 to n  by recursion
// 
/////////////print sum of 1 to n number /////////////////
// #include <iostream>
// using namespace std;
// int sum (int n ){
//       if (n == 1) return 1;
//       return n + sum (n-1);
// }
// int main (){
//     int n;
//     cout <<"enter your n :";
//     cin >> n;
//     cout<<sum(n); 
// }
/////////////factorial seris by recursion
// #include <iostream>
// using namespace std;
// int fact (int n ){
//       if (n ==0 ||n == 1) return 1;
//       return n * fact (n-1);
// }
// int main (){
//     int n;
//     cout <<"enter your n :";
//     cin >> n;
//     cout<<fact(n); 
// }
////////////////////a powr b
// #include <iostream>
// using namespace std;
// int power (int n ,int m){
//       if (m ==0 ) return 1;
//       return n * power (n,m-1);
// }
// int main (){
//     int n;
//     cout <<"enter your n : ";
//     cin >> n;
//     int m;
//     cout<<"enter your m : ";
//     cin>>m;
//     cout<<power(n,m); 
// }
#include <iostream>
using namespace std;
int fibo (int n ){
      if (n ==1 ||n == 2) return 1;
      return fibo (n-1) + fibo (n-1);
}
int main (){
    int n;
    cout <<"enter your n :";
    cin >> n;
    cout<<fibo(n); 
}