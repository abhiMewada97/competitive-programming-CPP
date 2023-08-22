#include <iostream>
using namespace std;

class Student{
    char name[100];
    int age;
    char branch[100];

    public:

    Student(){
        cout <<"Enter the name ";
        cin >> name;
        cout <<"Enter the age ";
        cin >> age;
        cout <<"Enter the branch ";
        cin >> branch;
    }

    void printData(){
        cout << "Name : "<<name <<endl;
        cout << "Age : "<<age <<endl;
        cout << "Branch : "<<branch <<endl;
    }
};

int main()
{
    Student S1;
    S1.printData();

    return 0;
}