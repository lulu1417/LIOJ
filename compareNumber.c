#include <stdio.h>

int main()
{

    long  i, m, a, b, k;

    scanf("%d", &m);
    for(i=0; i<m; i++)
    {
        scanf("%d %d %d", &a, &b, &k);
        if(a == b)
        {
            printf("DRAW€n");

        }
        else if(k == 1)
        {
            if(a > b)
            {
                printf("A€n");
            }
            else if(a < b)
            {
                printf("B€n");
            }

        }
        else if(k == -1)
        {
            if(a < b)
            {
                printf("A€n");
            }
            else if(a > b)
            {
                 printf("B€n");
            }
        }

    }

    return 0;
}

