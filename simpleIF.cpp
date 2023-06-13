#include <iostream>
using namespace std;

int main()
{
    int age; //Declaration (Naming a memory space)
    cout << "Enter your age: " << endl;
    cin >> age;

    if(age >= 18)
    {
        cout << "Yes you can vote!" << endl;
    }
    return 0;
}