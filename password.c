#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>
    bool password(char str[])
    {
    if(strlen(str)<8)
    return false;
    int upper=0,lower=0,num=0,spl=0;
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]=' ')
        return false;
        else if (isupper(str[i]))
        upper++;
        else if (islower(str[i]))
        lower++;
        else if (isalnum(str[i]))
        num++;
        else
        spl++;
    }
    printf("%d %d %d %d\n",upper,lower,num,spl);
    if(upper>=1 && lower>=1 && num>=1 && spl>=1)
    return true;
    else
    return false;
}
int main()
{
    char arr[20];
    scanf("%[^\n]",arr);
    if(password(arr))
    printf("valid");
    else
    printf("invalid");
    return 0;
}
    