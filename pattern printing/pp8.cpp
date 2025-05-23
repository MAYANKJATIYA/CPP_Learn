#include<iostream>
using namespace std;

void nTriangle(int n) {
	// Write your code here
    for(int i = 0;i< n;i++){
		for(int j = 0;j <i;j++){
			cout<<"*";
		}
        
		cout<<endl;
	}
    for(int i = 1;i<n;i++){
        for(int j = n-i-1;j>0;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int n;
	cout<<"Enter the number : ";
	cin>>n;
    nTriangle(n);
}