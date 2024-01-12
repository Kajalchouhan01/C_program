#include<stdio.h>
int main()
{
    int a,b,c;
    float d;
    printf("Enter three numbers\n");
    printf("a :");
    scanf("%d",&a);
    printf("b :");
    scanf("%d",&b);
    printf("c :");
    scanf("%d",&c);

    d=a+b+c;
    printf("%f\n",d/3);
    return 0;

}