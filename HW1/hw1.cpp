#include <iostream>
using namespace std;
int main()
{
    int stop_number = 0;
    cout << "Please input your chosen value where the Fizz Buzz Game will stop: ";
    cin >> stop_number;
    for (int number = 0; number <= stop_number; number ++)
    {
        if (number % 3 == 0 && number % 5 == 0)
        {
            cout << "Fizz Buzz" << endl;
        }
        else if (number % 3 == 0)
        {
            cout << "Fizz" << endl;
        }
        else if (number % 5 == 0)
        {
            cout << "Buzz" << endl;
        }
        else 
        {
            cout << number << endl;
        }
    }
    return 0;
}