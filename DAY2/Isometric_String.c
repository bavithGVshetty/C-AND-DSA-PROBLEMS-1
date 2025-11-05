#include<stdio.h>
#include<stdbool.h>
#include<string.h>

bool areIsometric(char *s ,char *t){
    int map_s[256]={0};
    int map_t[256]={0};
    int len_s=strlen(s);
    int len_t=strlen(t);

    if (len_s!=len_t){
        return false;
    }
    for(int i=0;i<len_s;i++){
        char c1=s[i];
        char c2=t[i];
        // It should be zero for creating a map
        if(map_s[(int) c1]==0 && map_t[(int)c2]==0){
            map_s[(int)c1]=c2;
            map_t[(int)c2]=c1;
        }
        else if (map_s[(int)c1]!=c2 || map_t[(int) c2]!=c1){
            return false;
        }
    }
return true;
}
int main(){
    char s[101],t[101];
    scanf("%s %s",s,t);
    if(areIsometric(s,t))
        printf("Strings are isometric\n");
    else
        printf("Strings are not isometric\n");
    
return 0;

}