#include <iostream>
using namespace std;

int main() {
    // cout<<"My name is simran"<<endl;

    // int height ;
    // cout<<"Enter your height in feet"<<endl;
    // cin>>height;
    // int weight ;
    
    // cout<<"Enter your weight in kg"<<endl;
    // cin>>weight;

    // if (height>5)
    // {
    //     if (weight>70)
    //     {
    //         cout<<"you got a good BMI"<<endl;
    //     }
    //     else
    //     {
    //         cout<<"not good BMI"<<endl;
    //     }
        
        
    // }
    

    // char day;
    // cout<<"Enter a day"<<endl;
    // cin>>day;
     
    // switch(day){
    //     case '1' : cout<<"monday"<<endl;
    //     break;
    //     case '2' : cout<<"tuesday"<<endl;
    //     break;
    //     case '3' : cout<<"wednesday"<<endl;
    //     break;
    //     case '4' : cout<<"thursday"<<endl;
    //     break;
    //     case '5' : cout<<"friday"<<endl;
    //     break;
    //     case '6' : cout<<"saturday"<<endl;
    //     break;
    //     case '7' : cout<<"sunday"<<endl;
    //     break;
    // }

    //  int month = 3;

    //  (month>8)?cout<<"valid for entry":cout<<"not valid for entry";

    // cout << "print hello world" << endl;

    // for(int i = 1; i < 10; i++)
    // {
    //     cout<<"iteration"<<i<<endl;
    // }

    // int i = 1;
    // while (i<=6){
    //     cout<<i<<endl;
    //     i=i+1;
    // }
// int count = 20;
// int i = 1;
//     do {
//         cout<<"iteration"<<i<<endl;
//         i++;
//     }
//     while(i<=count);

// int n , sum = 0,r;
// printf("enter a no.: ");
// scanf("%d",&n);
// while(n>0){
//     r=n%10;
//     sum=sum+r;
//     n=n/10;
// }
// printf("sum of digit : %d",sum);
// int arr [5];
// cin>>arr[3];
// cin>>arr[2];

// for (int i = 0; i <=5; i++)
// {
//     cin>>arr[i];
//     cout<<endl;
// }
// for (int i = 0; i <=4; i++)
// {
//     cout<<arr[i]<<" ";
// }.

// int a ;
// int b ;

// cout<<"enter a and b : "<<endl;
// cin>>a;
// cin>>b;
// cout<<"sum of a and b :"<<a+b<<endl;

// int a ;
// cout<<"enter a: "<<endl;
// cin>>a;
// cout << a ;

// int num;
// cout<<"Enter a num : "<<endl;
// cin>>num;
// if(num>0){
//     cout<<"number is positive"<<endl;

// }
//    else {
//     cout<<"number is negative"<<endl;
//    }


// int a ;
// cout<<"enter a: "<<endl;
// cin>>a;
// (a%2==0)?cout<<"num is even":cout<<"num is odd";

// int a ;
// int b ;
// cout << "enter a and b :"<<endl;
// cin>>a;
// cin>>b;
// (a>b)?cout<<"a is larger":cout<<"b is larger";

// int age;
// cout<<"Enter your age: "<<endl;
// cin>>age;
// (age>=18)?cout<<"you are eligible":cout<<"you are not eligible";

// int a;
// int b;
// cout<<"Enter a ans b :"<<endl;
// cin>>a;
// cin>>b;
// (a<b)?cout<<"smaller one is "<<a:cout<<"smaller one is "<<b;

// int num;
// cout<<"enter num"<<endl;
// cin>>num;
// int absvalue = (num<0)? - num : num;

// std::cout<<absvalue<<std::endl;


// int a;
// int b;
// int c;
// cout<<"enter a and b and c :"<<endl;
// cin>>a;
// cin>>b;
// cin>>c;
// int largest = (a>b)?((a>c)?a:c):((b>c)?b:c);
// std :: cout<<largest;

// int marks;
// cout<<"enter your marks : "<<endl;
// cin>>marks;
// if (marks>40){
//     cout<<"pass"<<endl;
// }
// else{
//     cout<<"Fail"<<endl;
// }
// if (marks>95){
//     cout<<"Excelent"<<endl;

// }
// else if (marks>75)
// {
//     cout<<"Good"<<endl;
// }
// else if(marks<40){
//     cout<<"pass"<<endl;
// }


int year;
cout<<"enter a year"<<endl;
cin>>year;
if((year%4==0)&&(year%100!=0)||(year%400==0)){
    cout<<"this year is leap year"<<endl;
}
else {
    cout<<"this year is not leap year"<<endl;
}






    return 0;
}
    