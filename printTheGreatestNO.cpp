#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cout<<"Enter the first no. : ";
    cin>>a;
    cout<<"Enter the 2nd no. :";
    cin>>b;
    cout<<"Enter the 3rd no.: ";
    cin>>c;

    // if (a>b && a>c){
    //     cout<<"The biggest no. is "<<a;

    // }
    // else if (b>a && b>c)
    // {
    //     cout<<"the greatest no. is "<<b;
    // }
    // else if (c>a && c> b)
    // {
    //     cout<<"The greatest no. is "<<c;
    // }
    // else if (a == b && b == c)
    // {
    //     cout<<"All the no. are equal";
    // }
    // else if (a ==b && b> c)
    // {
    //     cout<<"The greatest no. are "<<a<<" and "<<b;
    // }
    // else if ( b==c && c> a)
    // {
    //     cout<<"The greatest no. are "<<c<<" and "<<b;
    // }
    // else if (a == c && c > b)
    // {
    //     cout<<"The greatest no. are "<<a<<" and "<<c;
    // }
    



    if (a>b){
        if (a>c){
            if (b>c){
                cout<<a<<">"<<b<<">"<<c;
            }
            else if (b<c)
            {
                cout<<a<<">"<<c<<">"<<b;
            }
            else
            {
                cout<<a<<">"<<c<<"="<<b;
            }
            
            
            
        }
        else if (c>a)
        {
            cout<<c<<">"<<a<<">"<<b;
        }
        else
        {
            cout<<a<<"="<<c<<">"<<b;
        }
        
        
    }
    else if (b>a)
    {
        if (b>c){
            if (a>c){
                cout<<b<<">"<<a<<">"<<c;
            }
            else if (b<c)
            {
                cout<<b<<">"<<c<<">"<<a;
            }
            else
            {
                cout<<b<<">"<<c<<"="<<a;
            }
            
            
            
        }
        else if (c>a)
        {
            cout<<c<<">"<<b<<">"<<a;
        }
        else
        {
            cout<<b<<"="<<c<<">"<<a;
    
    }
}
    else if (b=a)
    {
        if (a>c)
        {
            cout<<b<<"="<<a<<">"<<c;
                    }
        else if (a<c)
        {
            cout<<c<<">"<<a<<"="<<b;
        }
        else
        {
            cout<<b<<"="<<a<<"="<<c;
        }
        
        
    }
    
    
    
    
}