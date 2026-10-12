#include <iostream>
using namespace std;

int main() {
    int num;
cout<<"enter num"<<endl;
cin>>num;
int absvalue = (num<0)? - num : num;

std::cout<<absvalue<<std::endl;
    return 0;
}