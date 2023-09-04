#include <stdio.h>
int main()
{
    int arr[100];
    int i, j, n, target, c = 0;
    printf("Enter the length of a string");
    scanf("%d", &n);
    printf("Enter the numbers");
    for (i = 0; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter the target");
    scanf("%d", &target);
    for (i = 0; i <= n; i++)
    {
        for (j = i + 1; j <= n; j++)
        {
            if (arr[i] + arr[j] == target)
            {

                printf(" number of paires=%d,%d", i, j);
                c++;
            }
        }
    }
    printf(" total number of paires=%d", c);

    return 0;
}
