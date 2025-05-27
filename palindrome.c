#include <stdio.h>
#include <string.h>
int main()
{
    char arr[20];
    scanf("%s",arr);
    char arr2[20];
    strcpy(arr,arr2);
    int x = strlen(arr);
for (int i = 0; i < x / 2; i++) {
        int y = x - 1 - i;
        char t = arr[i];
        arr[i] = arr[y];
        arr[y] = t;
    }
    int a=strcmp(arr,arr2);
    if(a==0)
{
    printf("yes");
}
    else{
    printf("no");
    }
return 0;
}






