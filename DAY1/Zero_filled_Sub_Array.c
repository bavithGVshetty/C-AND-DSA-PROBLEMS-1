#include<stdio.h>

long long zeroFilledSubarray(int* nums,int numsSize){
    long long result=0;
    long long countZeros=0;

    for(int i=0;i<numsSize;i++){
        if(nums[i]==0){
            countZeros++;
        }
        else{
            result=result+(countZeros*(countZeros+1))/2;
            countZeros=0;
        }
    }
 result=result+(countZeros*(countZeros+1))/2;

 return result;

}

int main(){
int num1[]={0,0,0,2,0,0};
int size1=sizeof(num1)/sizeof(num1[0]);
long long output=zeroFilledSubarray(num1,size1);
printf("%lld",output);

    return 0;
}