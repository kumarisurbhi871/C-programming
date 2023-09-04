#include <stdio.h>
int main()
{
    int arr[100];
    int i, j, n, position;
    printf("Enter the size of array");
    scanf("%d", &n);
    printf("Enter the elements");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position");
    scanf("%d", &position);
    for (i = 1; i <= position; i++)
    {
        printf("%d", i);
    }
    
        for (i = 0; i < n; i++)
        {
            if (arr[i] == position)
            {

                for (j = n; j > position; j--)
                {
                    printf("%d ", j);
                }
            }
        }
        // printf("%d", j);
    }

