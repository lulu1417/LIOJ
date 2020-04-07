#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX 10000
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

        printf("%c", str[arr[i]-1]);


    }

    return 0;
}
