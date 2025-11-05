#include<stdio.h>
#include<string.h>
void reverse(char *str,int start,int end){
    while(start<end){
        char temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }
}


int main(){
    char str[100];
    printf("Enter the string");
    scanf("%s",str);

    int len=strlen(str);
    int mid=len/2;
    reverse(str,0,mid-1);
    reverse(str,mid,len-1);
    printf("After: %s \n",str);
    return 0;


}