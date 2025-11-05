#include<stdio.h>
#include<stdbool.h>
bool isPowerOfTwo(int num){
    return num>1 && (num&(num-1))==0;
}


int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    if(isPowerOfTwo(num))
        printf("%d is a power of 2\n",num);
    else
    printf("%d is not a power of 2\n",num);

}