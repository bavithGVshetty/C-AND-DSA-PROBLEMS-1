#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool areAnagrams(char *s1,char *s2){
    int len1=strlen(s1);
    int len2=strlen(s2);
    if(len1!=len2){
        return false;
    }
    int freq[26]={0};
    for (int i=0;i<len1;i++){
        freq[s1[i]-'a']++;
        freq[s2[i]-'a']--;
    }
    for(int i=0;i<26;i++){
        if(freq[i]!=0)
        return false;
    }
    return true;
}

int main(){

    char s1[100],s2[100];
    printf("Enter the string 1: \n");
    scanf("%s",s1);
    printf("Enter the String 2: ");
    scanf("%s",s2);
    
    if (areAnagrams(s1,s2))
    {
        printf("TRUE\n");
    }
    else{
        printf("FALSE");
    }
    
    
}