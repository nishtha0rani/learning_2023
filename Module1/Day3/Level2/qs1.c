/* 1. Bit Operations:
DS1307 has its time registers in BCD format as shown in the image found in the above link, so 
a. Write a function to Set, clear and toggle bit of an 8-bit number      */

#include<stdio.h>
void setfun(int n);
void clearfun(int n);
void togglefun(int n);
void setfun(int n){
    int k;
    printf("\nEnter a bit to be set in a given number:");
    scanf("%d",&k);
    printf("\nGiven number is %d",n);
    n =n|(1<<(k-1));
    printf("\nAfter setting a %d-bit of a given number, Number is %d:",k,n);
    return;
}
void clearfun(int n){
    int k;
    printf("\nEnter a bit to be set in a given number:");
    scanf("%d",&k);
    printf("\nGiven number is %d",n);
    n =n&(~(1<<(k-1)));
    printf("\nAfter clear a %d-bit of a given number, Number is: %d",k,n);
    return;
}
void togglefun(int n){
    int k;
    printf("\nEnter a bit to be set in a given number:");
    scanf("%d",&k);
    printf("\nGiven number is %d",n);
    n =n^(1<<(k-1));
    printf("\nAfter toggle a  %d-bit of a given number, Number is: %d",k,n);
    return;
}

int main(){
    int n,op,t;
    printf("\nEnter a number:");
    scanf("%d",&n);
    while(1){
        printf("\nEnter 1 For set operation of bit");
        printf("\nEnter 2 For clear  operation of bit");
        printf("\nEnter 3 For toggle operation of bit");
        printf("\nNow enter your option:");
        scanf("%d",&op);
        if(op==1){
            setfun(n);
        }
        else if(op==2){
            clearfun(n);
        }
        else if(op==3){
            togglefun(n);
        }
        else{
            printf("Invalid option");
        }
        printf("\nIf you want to exit, please enter 0 or enter 1 to continue :");
        scanf("%d",&t);
        if(t==0){
            break;
        }
    }
}
