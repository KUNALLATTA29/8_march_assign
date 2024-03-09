#include<stdio.h>
int main(){
    int num=34534645;
    int count=0;
    while(num>0){
        count++;
        num=num/10;
    }
    printf("%d", count);
    return 0;
}