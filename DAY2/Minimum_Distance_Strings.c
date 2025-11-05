#include <limits.h>
#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    printf("Enter the number of words\n");
    scanf("%d", &n);
    printf("Enter the Sentence\n");
    char words[n][101];
    // Storing the wordss
    for(int i=0;i<n;i++){
        scanf("%s",words[i]);
    }
    char word1[101], word2[101];
    printf("Enter the start and end to calculate minimum distance\n");
    scanf("%s", word1);
    scanf("%s", word2);

    // Creating Auxillary variables
    int idx1 = -1, idx2 = -1;
    int min_dist = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (strcmp(words[i], word1) == 0)
        {
            idx1 = i;
        }
        if (strcmp(words[i], word2) == 0)
        {
            idx2 = i;
        }

        if (idx1 != -1 && idx2 != -1)
        {
            int dist = (idx1 > idx2) ? (idx1 - idx2) - 1 : (idx2 - idx1) - 1;
            if (dist < min_dist)
            {
                min_dist = dist;
            }
        }
    }
    if(idx1==-1||idx2==-1){
        printf("-1\n");
    }
    else{
        printf("%d\n",min_dist);
    }
}