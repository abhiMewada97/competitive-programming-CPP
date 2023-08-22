#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
	string s;
	cin >>n;
    int arr[n][n];
    int arr1[n][n];
    
    for(int i=0; i<n; i++){
    	for (int j = 0; j < n; ++j)
    	{
    		cin >> arr[i][j];
    	}
    }

	cin>>s;

	if(s==RLR || s==rlr){
		for(int i=0; i<n; i++){
    	for (int j = 0; j < n; ++j)
    	{
    		arr1[j][n-1-i] = arr[i][j];
    	} 
    }
	}
	else{
		for(int i=0; i<n; i++){
    	for (int j = 0; j < n; ++j)
    	{
    		arr1[j][n-1-i] = arr[i][j];
    	} 
    }
	}

    

    for(int i=0; i<n; i++){
    	for (int j = 0; j < n; ++j)
    	{
    		cout << arr1[i][j]<<" ";
    	}
        cout <<endl;
    }
return 0;
}