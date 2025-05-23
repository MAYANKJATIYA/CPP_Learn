#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter the rows of rectangle : ";
    cin>>a;
    cout<<"Enter the columns of rectangle : ";
    cin>>b;

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout<<'*';
        }
        cout<<endl;
    }
    
}