#include <iostream>
using namespace std;

int main() {
    int n;
cout<<"enter n :"<<endl;
cin>>n;
if(n>=300&&n<=460){
    cout<<"prize is macbook"<<endl;
}
else if (n>=200 && n<=280){
    cout<<"prize is kurkure"<<endl;
}
else if (n>=1100 && n<=1500){
    cout<<"prize is cycle"<<endl;
}
else if (n>=50 && n<=80){
    cout<<"prize is bike"<<endl;
}

    return 0;
}