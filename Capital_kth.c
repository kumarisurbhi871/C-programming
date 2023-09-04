#include <stdio.h>
#include <string.h>
void main()
{
    char s[100];
    int i, k;
    printf("Enter your string");
    gets(s);
    printf("Enter the kth value of string");
    scanf("%d", &i);
    for (k = 0; k <= strlen(s); k++)
    {
        if (i == k)
        {
            s[k] = s[k] - 32;
        }
    }
    printf("%s", s);
}