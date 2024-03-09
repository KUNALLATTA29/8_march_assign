#include<stdio.h>
int main(){
    int num=12321;
    int rem,sum=0;
    int temp=num;
    while(num>0){
        rem=num%10;
        sum=sum*10+rem;
        num=num/10;
    }
    printf("%d", sum);
    if(temp==sum){
        printf("this is pallindrome");
    }else{
        printf("this is not a pallindrome");
    }
    return 0;
}