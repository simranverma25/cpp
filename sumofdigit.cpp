#include<iostream>
using namespace std;
int main(){
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