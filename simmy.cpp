#include <iostream>
using namespace std;

int main() {
    // cout<<"My name is simran"<<endl;

    int height ;
    cout<<"Enter your height in feet"<<endl;
    cin>>height;
    int weight ;
    
    cout<<"Enter your weight in kg"<<endl;
    cin>>weight;

    if (height>5)
    {
        if (weight>70)
        {
            cout<<"you got a good BMI"<<endl;
        }
        else
        {
            cout<<"not good BMI"<<endl;
        }
        
        
    }
    

    
    return 0;
}