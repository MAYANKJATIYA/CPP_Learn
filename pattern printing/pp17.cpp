#include<iostream>
using namespace std;

void nTriangle(int n) {
	char ch = 'A';
    for(int i = 0;i< n;i++){
		for(int j = 0;j < n-1-i;j++){
			cout<<" ";
		}
        for(int ch = 'A';ch <= 'A' + i;ch++){
            cout<<char(ch);
        }
        for(char ch = 'A'+i-1;ch>='A';ch--){
            cout<<(ch);
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