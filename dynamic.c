#include <stdio.h>
#include <stdlib.h>
int main()
{
int * arr= NULL;
int n=5;
arr=(int *)malloc(n*sizeof(int));
arr=(int *)realloc(arr,7*sizeof(int));
float*arr2=(float *)calloc(5,sizeof(float));
for(int i=0;i<7;i++){
    arr[i]=n*i;
    printf("%d\n",arr[i]);
}
for(int i=0;i<5;i++){
    scanf("%f",&arr2[i]);
    printf("%f\n",arr2[i]);
}
free(arr);
free(arr2);
return 0;
}
    