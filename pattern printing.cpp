#include <iostream>
using namespace std;
int main (){ 
    int n ;
    cout<<"enter your number of rows :";
    cin >> n;
    // int m ;
    // cout <<"enter your number of column: ";
    // cin >> m;
    for(int i = 1;i <= n; i++){
        for (int j = 1;j <= n;j++){
            cout << j ;
        }
           cout <<endl;
    }
}
// #include <iostream>
// using namespace std;
// int main (){ 
//     int n ;
//     cout<<"enter your number of rows :";
//     cin >> n;
    
//     for(int i = 1;i <= n; i++){
//         for (int j = 1;j <= n;j++){
//             cout <<(char)(j+64)<<" ";
//         }
//            cout <<endl;
//     }
// }
///////////////star triangle
// #include <iostream>
// using namespace std;
// int main (){ 
//     int n ;
//     cout<<"enter your number of rows :";
//     cin >> n;
    
//     for(int i = 1;i <= n; i++){
//         for (int j = 1;j <= i;j++){
//             cout <<"*"<<" ";
//         }
//            cout <<endl;
//     }
// }   
////////////////number star/////////
// #include <iostream>
// using namespace std;
// int main (){ 
//     int n ;
//     cout<<"enter your number of rows :";
//     cin >> n;
    
//     for(int i = 1;i <= n; i++){
//         for (int j = 1;j <= i;j++){
//             cout <<j<<" ";
//         }
//            cout <<endl;
//     }
// }   
//////////////////////number tiangle
// #include <iostream>
// using namespace std;
// int main (){ 
//     int n ;
//     cout<<"enter your number of rows :";
//     cin >> n;
    
//     for(int i = 1;i <= n; i++){
//         for (int j = 1;j <= i;j++){
//             cout <<i<<" ";
//         }
//            cout <<endl;
//     }
// }  
/////////////////number square
// #include <iostream>
// using namespace std;
// int main (){ 
//     int n ;
//     cout<<"enter your number of rows :";
//     cin >> n;
    
//     for(int i = 1;i <= n; i++){
//         for (int j = 1;j <= n;j++){
//             cout <<i<<" ";
//         }
//            cout <<endl;
//     }
// }    
////////////////star stringle ulta
// #include <iostream>
// using namespace std;
// int main (){ 
//     int n ;
//     cout<<"enter your number of rows :";
//     cin >> n;
    
//     for(int i = 1;i <= n; i++){
//         for (int j = 1;j <= n+1-i ;j++){
//             cout <<j<<" ";
//         }
//            cout <<endl;
//     }
// }  
////////////////
// #include <iostream>
// using namespace std;
// int main (){ 
//     int n ;
//     cout<<"enter your number of rows :";
//     cin >> n;
    
//     for(int i = 1;i <= n; i++){
//         for (int j = 1;j <= i;j++){
//             cout <<2*j-1<<" ";
//         }
//            cout <<endl;
//     }
// }    
////////////floyd's triangle
// #include <iostream>
// using namespace std;
// int main (){ 
//     int n ;
//     cout<<"enter your number of rows :";
//     cin >> n;
//     int a = 1;
//     for(int i = 1;i <= n; i++){
//         for (int j = 1;j <= i;j++){
//             cout <<a<<" ";
//             a++;
//         }
//            cout <<endl;
//     }
// }   
//////////////////////zero one triangle
// #include <iostream>
// using namespace std;
// int main (){ 
//     int n ;
//     cout<<"enter your number of rows :";
//     cin >> n;
//     for(int i = 1;i <= n; i++){
//         for (int j = 1;j <= i;j++){
//             if ((i+j)%2 == 0)
//             cout <<1<<" ";
//             else cout << 0 << " ";
//         }
//         cout <<endl;
//     }
// }  
/////////////////////mid star rectangle 
// #include <iostream>
// using namespace std;
// int main (){ 
//     int n ;
//     cout<<"enter your number of rows :";
//     cin >> n;
//     int mid = n/2 + 1; 
//     for(int i = 1;i <= n; i++){
//         for (int j = 1;j <= n;j++){
//             if (i == mid || j == mid )   cout <<"* ";
//             else cout << "  ";
//         }
//            cout <<endl;
//     }
// }    
//////////////////
// #include <iostream>
// using namespace std;
// int main (){ 
//     int n ;
//     cout<<"enter your number of rows :";
//     cin >> n;
    
//     for(int i = 1;i <= n; i++){
//         for (int j = 1;j <= n-i;j++){
//             cout <<" ";
//         }
//         for(int j = 1;j<=i;j++){
//             cout<<"* " ;
//         }       
//            cout<<endl;
//     }
// }   
////////////////////////////
// #include <iostream>
// using namespace std;
// int main (){ 
//     int n ;
//     cout<<"enter your number of rows :";
//     cin >> n;
//      for(int i = 1;i <= n; i++){
//         for (int j = 1;j <=n- i;j++){
//             cout <<"  ";
//         }
//         for (int j = 1;j<= i ; j++){
//             cout<<"* ";
//         }
//            cout <<endl;
//     }
// }   