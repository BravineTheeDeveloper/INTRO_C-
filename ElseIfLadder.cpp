#include <iostream>
using namespace std;

int main()
{
    int marks;
    cout << "Enter your marks: " <<endl;
    cin >> marks;

    if (marks >= 0 && marks <= 39)
    {
        cout << "Grade: Fail!" <<endl;
    }
    else if(marks >= 40 && marks <= 39)
    {
        cout << "Grade: D" <<endl;
    }
    else if(marks >= 50 && marks <= 59)
    {
        cout << "Grade: C" <<endl;
    }
    else if(marks >= 60 && marks <= 69)
    {
        cout << "Grade: B" <<endl;
    }
    else if(marks >= 70 && marks <= 100)
    {
        cout << "Grade: A" <<endl;
    }
    else
    {
        cout << "Invalid input!" <<endl;
    }
}