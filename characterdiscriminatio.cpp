#include <iostream>
using namespace std;

int main() {
    char ch;
cout<<"enter character"<<endl;
cin>>ch;

std :: string result = (ch>='A' && ch<='Z' )?"UPPERCASE"
                      :(ch>='a'&& ch<='z')?"lowercase"
                      :(ch>='0' && ch<='9')?"Digit":"Special Character";

                      std::cout<<result<<std::endl;
                      
    return 0;
}