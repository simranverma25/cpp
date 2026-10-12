#include <iostream>
using namespace std;

int main() {
    int a;
int b;
int c;
cout<<"enter a and b and c :"<<endl;
cin>>a;
cin>>b;
cin>>c;
int largest = (a>b)?((a>c)?a:c):((b>c)?b:c);
std :: cout<<largest;
    return 0;
}