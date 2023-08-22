#include <iostream>
#include <string>
using namespace std;

int main()
{
    string st="family asd gsda as";
    st.clear();
    
    if (st.empty())
    {
        cout << "String is empty "<<endl;
    }
    else{
        cout << "String is not empty ";
    }
    

    return 0;
}