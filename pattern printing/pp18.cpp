#include<iostream>
using namespace std;

void nTriangle(int n) {
	
    for(int i = n-1;i>=0;i--){
		for(char ch = 'A'+i;ch <='A'+n-1;ch++){
			cout<<char(ch);
		}
        
		cout<<endl;
	}
}
int row ,col;

int main(){
    int n;
	cout<<"Enter the number : ";
	cin>>n;
    nTriangle(n);
}