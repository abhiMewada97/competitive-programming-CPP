#include <iostream>
using namespace std;

int main()
{
    int qt,b,r;
    cout<<"Enter the chocolate quantity ";
    cin>>qt;
    b=qt;
    
    while(b>=0)
    {
        b/=3;
        r=b%3;
        b+=r;#include <stdio.h>

void display(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int insertion(int arr[], int size, int element, int capacity, int index)
{
    if(size >= capacity && size<=index){
        printf("insertion failed");
    }
    for(int i=size-1; i>=index; i--){
        arr[i+1]= arr[i];
    }
    arr[index]=element;
    
    size+=1;
    display(arr,size);
    // return 1;    
}

int main()
{
    int arr[100]={7,8,12,27,88};
    int element = 45, size=5, index=3;
    display(arr,size);
    insertion(arr, size, element, 100, index);
   
    return 0;
}

    }
    cout<<"Total chocolate "<<b;

    return 0;
}