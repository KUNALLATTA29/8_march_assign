#include<stdio.h>
int main(){
    char cho;
    printf("choose any one e,o,r,p,a,s,g,m,c");
    scanf(" %c", &cho);
    if(cho=='e'){
        
        int num=23;
        while(num<=89){
            if(num%2==0){
                printf("%d", num);
            }
            num++;
        }
    }else if(cho=='o'){
        int num=67;
        while(num>=23){
            if(num%2!=0){
                printf("%d", num);
            }
            num--;
        }
    }else if(cho=='r'){
        int num;
        printf("enter a number: ");
        scanf("%d", &num);
        int rem,sum=0;
        while(num>0){
            rem=num%10;
            sum=sum*10+rem;
            num=num/10;
        }
        printf("%d", sum);
    }else if(cho=='p'){
        int num;
        printf("enter a number: ");
        scanf("%d", &num);
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
    }else if(cho=='a'){
        int num;
        printf("enter a number: ");
        scanf("%d", &num);
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
    }else if(cho=='s'){
        char zoom;
        printf("choose one w or o: ");
        scanf(" %c", &zoom);
        if(zoom=='w'){
            int num1,num2;
            printf("enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            printf("before swap: %d %d", num1, num2);
            int c;
            c=num1;
            num1=num2;
            num2=c;
            printf("after swap: %d %d", num1, num2);
        }else if(zoom=='o'){
            int num1,num2;
            printf("enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            printf("before swap: %d %d", num1, num2);
            num1=num1+num2;
            num2=num1-num2;
            num1=num1-num2;
            printf("after swap: %d %d", num1, num2);
        }else{
            printf("input mismatch");
        }
        
    }else if(cho=='g'){
        char zoom;
        printf("choose m, f or o: ");
        scanf(" %c", &zoom);
        if(zoom=='m'){
            printf("male");
        }else if(zoom=='f'){
            printf("female");
        }else if(zoom=='o'){
            printf("other");
        }else{
            printf("input mismatch");
        }
    }else if(cho=='m'){
        int a;
        printf("enter a number: ");
        scanf("%d", &a);
        if(a==1){
            printf("jan");
        }else if(a==2) {
            printf("feb");
        }else if(a==3) {
            printf("mar");
        }else if(a==4) {
            printf("apr");
        }else if(a==5) {
            printf("may");
        }else if(a==6) {
            printf("jun");
        }else if(a==7) {
            printf("jul");
        }else if(a==8){
            printf("agu");
        }else if(a==9){
            printf("sep");
        }else if(a==10){
            printf("oct");
        }else if(a==11){
            printf("nov");
        }else if(a==12){
            printf("dec");
        }else{
            printf("input mismatch");
        }
    }else if(cho=='c'){
        int num;
        printf("enter a number: ");
        scanf("%d", &num);
        int count=0;
        while(num>0){
            count++;
            num=num/10;
        }
        printf("%d", count);
    }else{
        printf("input mismatch");
    }
    return 0;
}