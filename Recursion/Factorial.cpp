#include <iostream>
using namespace std;

int Factorial(int N){
    if (N == 1)
    {
        return 1;
    };

    
    return N * Factorial(N-1);
}
int main(){
    int N;
    cout<<"Enter the number : ";
    cin>>N;
    cout<<Factorial(N);
}
