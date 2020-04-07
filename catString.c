#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX 255
int i = 0, j = 0;
int main()
{

    int n = 0;

    char words[MAX] = "";
    char str[MAX] = "";

    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%s", words);
        strcat(str, words);

    }

    int  m = 0, arr[MAX] = {0};

    scanf("%d", &m);

    for(i = 0; i < m; i++)
    {
        scanf("%d", &arr[i]);
    }

    int length = strlen(str) + 1;
    for(i=0; i<m; i++)
    {
        for(j=0; j<length; j++)
        {
            if(j == arr[i])
            {
                printf("%c", str[j-1]);
            }

        }

    }

    return 0;
}
