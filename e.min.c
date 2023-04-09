// Given a number N, and N numbers, find minimum number in these N numbers.
#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a,min=INT_MAX;
    for(int i=1;i<=n; i++)
    {
        scanf("%d",&a);
        if(a<min)
        {
           min=a;
        }
    }
    printf("%d",min);
    return 0;
}

// min ber korar somoy sob thake boro  value dibo