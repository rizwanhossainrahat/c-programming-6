// Given multiple lines each line contains a number X which is a password. Print "Wrong" if the password is incorrect otherwise, print "Correct" and terminate the program.

// Note: The "Correct" password is the number 1999.
#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n) !=EOF)
    {
        if(n==1999)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }
    return 0;
}

// EOF means end of file jodi input koita na bole ba N input o na bole  tahole eivhabe input neya jai .
//  while(scanf("%d",&n) !=EOF) bujai protita input nite thakbe jotokhon na file sesh hoi.