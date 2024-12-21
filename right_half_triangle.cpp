#include<iostream>
using namespace std;
// Develop a program that prints the given Right half triangle pattern using a nested for loop

int main()
{
    int i,j;
    for(i=41; i<=45; i++)
    {
    for(j=41; j<=i; j++)
    {
        cout << j << " ";
    }
    cout << endl;
}
    return 0;
}