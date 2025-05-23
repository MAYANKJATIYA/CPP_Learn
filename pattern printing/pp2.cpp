#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter the rows of rectangle : ";
    cin>>a;
    cout<<"Enter the columns of rectangle : ";
    cin>>b;

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    
}