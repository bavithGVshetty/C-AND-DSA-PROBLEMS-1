#include<stdio.h>

int flipbit(int num,int i){
    return num^(1<<i);
}


int main(){
    int num,i;
    printf("Enter number: ");
    scanf("%d",&num);
    printf("Enter the bit position to flip");
    scanf("%d",&i);
    
    int result=flipbit(num,i);
    printf("After flip Number=%d",result);
    return 0;
}