#include <iostream>
using namespace std;

class student
    {
        char name[100], enrollment[20];
        int age;

        public:

        void setData(){
            cout <<"Enter the name ";
            cin >> name;
            cout <<"Enter the Enrollment ";
            cin >> enrollment;
            cout <<"Enter the age ";
            cin >> age;
        }

        void printData(){
            cout<<"Name : "<<name <<"\nEnrollmet : "<<enrollment <<"\n Age "<<age <<endl;
        }
    };

class marks : public student{
    int p,c,m,total;
    float percentage;

    public:
    void setMarks(){
        cout <<"Enter the marks of p c m ";
        cin >>p >>c >>m;
    }

    void printMarks(){
    total = p+c+m;
    percentage = (float)total/3;
    cout <<"Total marks is "<<total <<" and Percentage is "<<percentage <<"%" <<endl;
    }
};

int main()
{
    marks M;
    M.setData();
    M.setMarks();

    M.printData();
    M.printMarks();

    return 0;
}