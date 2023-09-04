//this program is for check occurence of a charecter//
#include <stdio.h>
#include <stdio.h>
void main()
{
    char str[100], search;
    int i, count;
    printf("Enter any string");
    gets(str);
    printf("Enter any charecter you want to search");
    //scanf("%s", &search);
    search=getchar();
    count = 0;
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == search)
        {
            count++;
        }
        i++;
    }
    printf("Total occurence of %c=%d", search, count);
}