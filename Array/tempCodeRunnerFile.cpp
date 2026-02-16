#include<iostream>

using namespace std;

int main()
{
    const int SIZE = 100;
    string foods[SIZE];

    fill(foods, foods + (SIZE/3), "pizza");
    fill(foods + (SIZE/3), foods + (SIZE/3)*2,"HAMBURGER", "pizza");
    fill(foods + (SIZE/3)*2, foods + SIZE, "HOTDOG");


    for(string food : foods){
        cout << food << '\n';
    }
    return 0 ;
}