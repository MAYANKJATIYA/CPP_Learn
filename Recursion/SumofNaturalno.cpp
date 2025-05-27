#include <iostream>
using namespace std;

int NnumbersSum(int N){
    if (N < 0)
    {
        return 0;
    };

    
    return N + NnumbersSum(N-1);
}
int main(){
    int N;
    cout<<"Enter the number : ";
    cin>>N;
    cout<<NnumbersSum(N);
}
