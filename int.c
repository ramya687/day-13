#include <stdio.h>
int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int x = sizeof(arr) / sizeof(arr[0]);
for (int i = 0; i < x / 2; i++) {
        int y = x - 1 - i;
        int t = arr[i];
        arr[i] = arr[y];
        arr[y] = t;
    }
    for (int i = 0; i < x; i++) {
        printf("%d ", arr[i]);
    }
return 0;
}






