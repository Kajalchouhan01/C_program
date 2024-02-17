#include <stdio.h>

int main()
{
    int a,b,sum;
    
    printf("Enter two numbers between which you want to find the sum of even numbers \n");
    scanf("%d",&a);
     scanf("%d",&b);
    for (int i = a; i <= b; i++) 
    {
        if (i % 2 == 0) 
    {
            sum += i;
    }
    }
    printf("Sum of all even numbers b/w given no. is : %d",sum);
    
    return 0;
}
