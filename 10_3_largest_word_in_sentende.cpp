#include <iostream>
using namespace std;

int main()
{
    int size;
    cout <<"Enter the size of array "<<endl;
    cin >> size;
    cin.ignore();
    char ch[size+1];
    cout<<"Enter the character in array "<<endl;
    cin.getline(ch,size);
    cin.ignore();
    int i=0,currentSize=0,maxSize=0;
    while(1){
        if(ch[i] == ' ' || ch[i] == '\0'){
            
            if (currentSize > maxSize){
                maxSize = currentSize;
            }
            currentSize = 0;
        }
        else{
            currentSize++;
        }
        if (ch[i] == '\0'){
            break;
        }   
        i++;
    }
    cout <<"Maximum size is "<<maxSize <<endl;

    return 0;    
}