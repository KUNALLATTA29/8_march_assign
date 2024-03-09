#include<stdio.h>
int main(){
    int num=10;
    while(num>=1){
        if(num%2==0){
            printf("%d", num);
        }
        num--;
    }
    return 0;
}