#include <stdio.h>

void main()
{
 int a;
 do
 {
 printf("1. addition \n2. subtraction \n3. division \n4. multiplication \n5. exit \n");
 printf("Enter your option : ");
 scanf("\n%d",&a);
 
 int num1,num2;
  

 switch(a)
 
 {
     case 1: 
             printf(" Enter First number = ");
             scanf("%d",&num1);
             printf("Enter Second number = ");
             scanf("%d",&num2);
             printf("addition of two numbers are :  %d  \n",num1+num2);
     break;
     case 2: 
             printf("Enter First number = ");
             scanf("%d",&num1);
             printf("Enter Second number = ");
             scanf("%d",&num2);
             printf("subtraction of two numbers are :  %d  \n",num1-num2);
     break;
     case 3: 
             printf("Enter First number = ");
             scanf("%d",&num1);
             printf("Enter Second number = ");
             scanf("%d",&num2);
             printf("division of two numbers are : %d  \n",num1/num2);
     break; 
     case 4: 
             printf("Enter First number = ");
             scanf("%d",&num1);
             printf("Enter Second number = ");
             scanf("%d",&num2);
             printf("multiplication of two numbers are : %d  \n",num1*num2);
     break;
     default: printf("exit:\n");
     
 }
 }while(a!=5);
 
}