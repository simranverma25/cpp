#include <iostream>
using namespace std;

int main() {
    int marks;
cout<<"enter your marks : "<<endl;
cin>>marks;
if (marks>40){
    cout<<"pass"<<endl;
}
else{
    cout<<"Fail"<<endl;
}
if (marks>95){
    cout<<"Excelent"<<endl;

}
else if (marks>75)
{
    cout<<"Good"<<endl;
}
else if(marks<40){
    cout<<"pass"<<endl;
}
    return 0;
}