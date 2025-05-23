#include<iostream>
using namespace std;

void nTriangle(int n) {
	int a = 1;
    for(int i = 1;i <= n;i++){
		for(int j = 1;j <= i;j++){
			cout<<a;
            a+=1;
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