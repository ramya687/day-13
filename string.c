#include <stdio.h>
#include <string.h>
int main()
{
    char arr1[100]; 
    scanf("%[^\n]s", arr1);
    char arr2[strlen(arr1)];
    int x = 0;
for (int i = 0; i < strlen(arr1); i++)
{
        if (arr1[i] == ' ')
        {
            continue;
        }
        else
        {
            arr2[x++] = arr1[i];
        }
}
arr2[x] = '\0'; 
    printf("%s\n", arr2);
return 0;
}
