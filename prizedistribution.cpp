#include <iostream>
using namespace std;

int main() {
    int n ; 
cout<<"enter n"<<endl;
cin>>n;
if(n>=300&&n<=460){
    cout<<"prize is macbook"<<endl;
    if (n>=300 && n<=380)
    {
        cout<<"Model: M1 Mac "<<endl;
    }  
    else {
        cout<<"Model: M2 Mac "<<endl;
    }
}
else if (n>=200 && n<=280){
    cout<<"prize is kurkure"<<endl;

     if (n>=200 && n<=240){
        cout<<"you won chilli kurkure"<<endl;
    }
    else {
        cout<<"you won onion kurkure"<<endl;
    }

}
else if (n>=1100 && n<=1500){
    cout<<"prize is cycle"<<endl;
    if(n>=1100 && n<=1300){
        cout<<"brand:avon cycle"<<endl;
    }
    else {
        cout<<"brand: hero cycle"<<endl;
    }
}
else if (n>=50 && n<=80){
    cout<<"prize is bike"<<endl;
    if (n>=50 && n<=65){
        cout<<"prize is bullet"<<endl;

    }
    else{
        cout<<"prize is rajdoot"<<endl;
    }
}

else{
    cout<<"better luck for next time"<<endl;
}

    return 0;
}