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

int n , sum = 0,r;
printf("enter a no.: ");
scanf("%d",&n);
while(n>0){
    r=n%10;
    sum=sum+r;
    n=n/10;
}
printf("sum of digit : %d",sum);


    
    
    return 0;
}