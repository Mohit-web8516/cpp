//Fill() = fills a range of elements with a specified value 
//fill(begin, end, value)

// #include <iostream>
// #include <string>
// #include <algorithm>  // for std::fill

// using namespace std;

// int main()
// {
//     const int SIZE = 100;   // fixed semicolon
//     string foods[SIZE];

//     fill(foods, foods + SIZE, "pizza");  // fills all elements with "pizza"

//     for (string food : foods) {
//         cout << food << '\n';
//     }

//     return 0;
// }

/////////////////////////////////////////////
// #include<iostream>

// using namespace std;

// int main()
// {
//     const int SIZE = 100;
//     string foods[SIZE];

//     fill(foods, foods + (SIZE/3), "pizza");
//     fill(foods + (SIZE/3), foods + (SIZE/3)*2,"HAMBURGER");
//     fill(foods + (SIZE/3)*2, foods + SIZE, "HOTDOG");


//     for(string food : foods){
//         cout << food << '\n';
//     }
//     return 0 ;
// }


/////////////////////////////////////////////////
/////////////////////////////////////////////////
//FILL AN ARRAY WITH USER INPUT

#include<iostream>

using namespace std;

int main()
{
    string foods[5];
    int size = sizeof(foods)/sizeof(foods[0]);

    for(int i = 0; i < size; i++){
        cout << "Enter a food you like #" << i +1 << ": ";
        getline(cin,foods[i]);
    }
    cout << "You like the following food:\n";

    for(string food : foods){
        cout << food << '\n';
    }
}