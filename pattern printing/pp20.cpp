#include<iostream>
using namespace std;

void nTriangle(int n) {
	
    for(int i = 0;i< n;i++){
		for(int j = n-i-1;j >= 0;j--){
			cout<<"*";
		}
        for(int j = 0;j<2*i;j++){
            cout<<" ";
        }
        for(int j = n-i-1;j>=0;j--){
            cout<<"*";
        }
		cout<<endl;
    }
    for(int i = 0;i < n;i++){
        for(int j = 0;j <= i;j++){
			cout<<"*";
		}
        for(int j = 2*(n-1-i);j>0;j--){
            cout<<" ";
        }
        for(int j = 0;j<=i;j++){
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