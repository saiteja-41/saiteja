#include <stdio.h>
void swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a=40,b=90;
    printf("%d,%d\n",a,b);
    swap(&a,&b);
    printf("%d,%d\n",a,b);
    return 0;
}
