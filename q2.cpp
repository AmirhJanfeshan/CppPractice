#include<iostream>
using namespace std;

int main()
{
    int number, Cnumber;
    cout << "Enter Your number: ";
    cin >> number;
    Cnumber =number;
    number = 1;
    while( Cnumber > 0 )
    {
        number *= Cnumber;
        Cnumber --;
    }

    cout << "Factorial of your number is: "<< number << endl << endl ;
}