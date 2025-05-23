#include<iostream>
using namespace std;

void nTriangle(int n) {
	char ch = 'A';
    for(int i = 0;i< n;i++){
		for(int j = 0;j <= i;j++){
			cout<<char(ch+i);
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