#include<stdio.h>

int countSetBits(int n){
    int count=0;
    while(n>0){
        if((n&1)==1){
            count++;
        }
        n>>=1;
    }
    return count;
}

int main(){
    int n1=15,n2=8;
    printf("Set bits in %d= %d\n",n1,countSetBits(n1));

    
}