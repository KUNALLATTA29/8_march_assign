#include<stdio.h>
int main(){
    int num=67;
    while(num<=89){
        if(num%2!=0){
            printf("%d", num);
        }
        num++;
    }
    return 0;
}