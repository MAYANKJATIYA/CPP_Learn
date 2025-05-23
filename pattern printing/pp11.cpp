#include<iostream>
using namespace std;

void nTriangle(int n) {
	
    for(int i = 1;i<= n;i++){
		for(int j = i;j <= i;j++){
			cout<<j;
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