#include <iostream>
using namespace std;

int main ()
{
    int num1, num2, num3;

    cout << "Enter the first number: " <<endl;
    cin >> num1;
    cout << "Enter the second number: " <<endl;
    cin >> num2;
    cout << "Enter the third number: " <<endl;
    cin >> num3;

    if (num1 >= num2)
    {
        if (num1 >= num3)
        {
            cout << num1 << " is the Greatest" <<endl;
        }
        else
        {
            cout << num3 << " is the Greatest." <<endl;
        }
    }
    else
    {
        if (num2 >= num3)
        {
            cout << num2 << " is the Greatest." <<endl;
        }
        else
        {
            cout << num3 << " is the Greatest." <<endl;
        }
    }

}