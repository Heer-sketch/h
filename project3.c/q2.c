#include<stdio.h>

int main()
{
    int n, count=0;

    printf("Enter your value:-");
    scanf("%d", &n);

    for(int i=1 ; n!=0 ; i++ )
    {
        n/=10;
        count++;
    }
printf("Total number of digits:%d", count);

}