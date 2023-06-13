#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "\nEnter your age: ";
    cin >> age;

    if(age >= 20)
    {
        cout << "You are a youth" <<endl;
    }
    else
    {
        cout << "You are a minor!";
    }
}