/* 2. BCD to Decimal:
DS1307 has its time registers in BCD format as shown in the image found in the above link, 
To set the time we need to convert the decimal number to BCD format, hence, 
write a fucntion to convert decimal to BCD
*/
#include<stdio.h>
int main(){
    int n;int a[100],i=0,j;
    int k;int b[4]={0,0,0,0};
    printf("enter:");
    scanf("%d",&n);
    while(n!=0){
        a[i]=n%10;
        n=n/10;
        i++;
    }
    printf("\nDecimal number  ");
    for(j=i-1;j>=0;j--){
        printf("%d",a[j]);
    }
    printf(" is:");
    for(j=i-1;j>=0;j--){
        k=0;
        while(a[j]!=0){
            b[k]=a[j]%2;
            a[j]=a[j]/2;
            k++;
        }
        for(k=3;k>=0;k--){
            printf("%d",b[k]);
        }
        printf("\t");
    }
    
    return 0;
}
