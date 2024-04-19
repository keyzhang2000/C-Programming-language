#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("The return value of scanf() is 2.\n");
    printf("The decimal integer of the 1st variable is %d.\nThe octal integer of the 1st variable is %o.\nThe hexadecimal integer of the 1st variable is %x.\n",a,a,a);
    printf("The decimal integer of the 2nd variable is %d.\nThe octal integer of the 2nd variable is %o.\nThe hexadecimal integer of the 2nd variable is %x.\n",b,b,b);
}