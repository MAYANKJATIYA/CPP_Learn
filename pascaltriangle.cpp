#include <iostream>
using namespace std;

int fact(int x){
    int f = 1;
    for (int i = 1; i <= x; i++)
    {
        f = f*i;
    }
    return f;
    
}
int ncr(int n,int r){
    return fact(n)/(fact(r)*fact(n-r));
}
int main(){
    int a;
    cout<<"Enter a number : ";
    cin>>a;
    for (int i = 0; i < a; i++)
    {
        for (int k = a; k > i; k--)
        {
            cout<<" ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout<<ncr(i,j)<<" ";
        }
        cout<<endl;
        
    }
    
}