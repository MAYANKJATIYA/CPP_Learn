#include<iostream>
using namespace std;

void nTriangle(int n) {
	// Write your code here
    for(int i = 0;i< n;i++){
		for(int j = 0;j < n-1-i;j++){
			cout<<" ";
		}
        for(int j = 0;j<2*i+1;j++){
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