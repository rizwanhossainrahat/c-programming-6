// Given N numbers. Count how many of these values are even, odd, positive and negative.

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a;
    int even=0,odd=0,pos=0,neg=0;
    for (int i=1;i<=n; i=i+1)
    {
        scanf("%d",&a);
        if(a%2==0)
        {
            even++;
        }
        else{
            odd++;
        }

        if(a>0)
        {
            pos++;
        }
        else if(a<0)
        neg++;
    }
    
    printf("Even: %d\n Odd: %d\n Positive: %d\n Negative: %d\n",even,odd,pos,neg);

    return 0;
}