#include <iostream>
using namespace std;

int main() {
    int a;
    long long factorial = 1;
    cin>>a;
    for (int i = 1; i <=a; i++)
    {
       factorial = factorial * i; 
    }
    cout<<factorial;
    return 0;
}