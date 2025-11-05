#include<stdio.h>

int main(){
    int a=8,b=6;

    printf("Before Swap\n");
    a=a^b;
    b=a^b;
    a=a^b;
    printf("After swaping\n");
printf("A=%d and B=%d",a,b);
}