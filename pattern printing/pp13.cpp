#include<iostream>
using namespace std;

void nTriangle(int n) {
	
    for(int i = 0;i< n;i++){
		for(char ch = 'A';ch <= 'A' + i;ch++){
			cout<<ch;
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