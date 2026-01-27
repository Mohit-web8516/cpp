// #include<iostream>
// using namespace std;
// int main (){
//     int arr[5];
//     cout<<"enter array elements :";
//     for (int i = 0;i <= 4;i++){
//       cin>>arr[i];
//     }
//      for (int i=0;i<=4;i++){
//     cout<<arr[i]<<" ";
//     }
// }
/////////////////array initialization
// #include<iostream>
// using namespace std;
// int main (){
//     int arr[5] = {4,1,3,5,6};
//     arr[0]= 0;
//     for (int i = 0;i <= 4;i++){
//      cout<<arr[i]*2<<" ";
//     }
// }
//sum of array
#include<iostream>
// using namespace std;
// int main (){
//     int arr[5];
//     cout<<"enter array elements :";
//     for (int i = 0;i <= 4;i++){
//       cin>>arr[i];
//     }
//      for (int i=0;i<=4;i++){
//     cout<<arr[i]<<" ";
//     }
// }
//////sum of aaray
#include<iostream>
// using namespace std;
// int main (){
//     int arr[5];
//     cout<<"enter array elements :";
//     for (int i = 0;i <= 4;i++){
//       cin>>arr[i];
//     }
//      for (int i=0;i<=4;i++){
//     cout<<arr[i]<<" ";
//     }
/////sum of array
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[]={12,6,7,34,9,23};
//     int sum = 0;
//     for (int i= 0;i<=5;i++){
//         sum+= arr[i];
//     }
//     cout<<sum;
// }
///////////////
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[]={12,6,7,34,9,23};
//     int mx= arr[0];
//     for (int i= 1;i<=5;i++){
//         if (arr[i]>mx) mx = arr[i];
//     }
//     cout<<mx;
// }
//////////////////count minimum
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[]={12,6,7,34,9,23};
//     int n = sizeof(arr)/4;
//     int mn = arr[0];
//     for (int i= 1;i<n;i++){
//         if (arr[i]<mn) mn = arr[i];
    
//     }
//     cout<<mn;
// }
//////////to copy vlue of one array to another arry in reverse order
// #include <iostream>
// using namespace std;
// int main(){
//     int a[]={12,6,7,34,9,23};
//     int n = sizeof(a)/4;
//     int b[n];
//     for(int i = 0;i<n;i++){
//         int j = n-1-i;
//         b[i]=a[j];
//     }
//     for (int i = 0;i <n;i++){
//         cout<<b[i]<<" ";
//     }
    
// }
///////////reverse the array without using any other arary
// #include <iostream>
// using namespace std;
// int main(){
//     int a[]={12,6,7,34,9,23};
//     int n = sizeof(a)/4;
//     int b[n];
//     for(int i = 0;i<n;i++){
//         int j = n-1-i;
//         b[i]=a[j];
//     }
//     for (int i = 0;i <n;i++){
//         cout<<b[i]<<" ";
//     }   
// }
//////////////////
///2d arry
// #include <iostream>
// using namespace std;
//   int main(){
//     int arr[2][3];
//     arr [0][0] = 6 ; 
//     arr[0][1] = 1 ;
//     arr[0][2] =2 ;
//     arr[1][0] = 4;
//     arr[1][1] = 3;
//     arr[1][2] = 5;
//     for (int j = 0;j<3;j++){
//         for (int i = 0;i<2;i++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
// }
// }
////////////////////////////to store roll number//
#include <iostream>
using namespace std;
  int main(){
    int arr[2][3];
    arr[0][0] = 6; 
    arr[0][1] = 1;
    arr[0][2] = 2;
    arr[1][0] = 4;
    arr[1][1] = 3;
    arr[1][2] = 5;
    for (int j = 0;j<3;j++){
        for (int i = 0;i<2;i++){
            cout<<arr[i][j]<<" ";
        }       
    }
}