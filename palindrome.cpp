#include<iostream>
using namespace std;

int main()
{
    int a = 121;
    string b = "abc";
    string str = to_string(a);
    for (int i = 0; i < str.size(); i++)
    {
        b[i] = str[str.size() - i - 1];
        //cout<<b[i];
    }
    cout<<b;
    if (str == b)
    {
        cout<<"true"<<endl;
    }
    else
    {
        cout<<"false"<<endl;
    }
    // cout<<str<<endl;
    // cout<<b;
}