#include<stdio.h>
int main(){
    int num=156;
    int rem,sum=0;
    int temp=num;
    while(num>0){
        rem=num%10;
        sum=sum+rem*rem*rem;
        num=num/10;
    }
    printf("%d", sum);
    if(temp==sum){
        printf("this number is armstrong");
    }else{
        printf("this number is not a armstrong");
    }
    return 0;
}