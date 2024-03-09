#include<stdio.h>
int main(){
    int num=78;
    while(num>=65){
        if(num%2==0){
            printf("%d", num);
        }
        num--;
    }
    return 0;
}