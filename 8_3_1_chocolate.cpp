#include <iostream>
using namespace std;

int main()
{
    int rupees,chocolate,wrappers;
    cout<<"Enter the rupees to buy chocolate quantity ";
    cin>>rupees;
    chocolate=rupees;

    while (rupees>2)
    {
        wrappers = rupees%3;
        chocolate += rupees/3;
        rupees = wrappers+(rupees/3);
    }
    cout << chocolate;

    return 0;
}