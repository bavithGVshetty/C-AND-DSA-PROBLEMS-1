#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int permutationDefference(char *s, char *t)
{
    int index_s[27];
    int len=strlen(s);
for (int i=0;i<len;i++){
    index_s[s[i]-'a']=i;
}

int total_diff=0;
for(int i=0;i<len;i++){
    int diff=abs(index_s[t[i]-'a']-i);
    total_diff=total_diff+diff;
}
return total_diff;
}

int main()
{
    char s[27], t[27];
    scanf("%s", s);
    scanf("%s", t);

    int result = permutationDefference(s, t);
    printf("%d\n", result);
    return 0;
}