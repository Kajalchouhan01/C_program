#include <stdio.h>
float addition(float a, float b);
float subtraction(float a, float b);
float multiplication(float a, float b);
float division(float a, float b);
void main()
{
 int a;
 float result;
 do
 {
 printf("1. addition \n2. subtraction \n3. division \n4. multiplication \n5. exit \n");
 printf("Enter your option : ");
 scanf("\n%d",&a);
 
 float num1,num2;
  

 switch(a)
 {
 
     case 1: printf(" Enter First number = ");
             scanf("%f",&num1);
             printf("Enter Second number = ");
             scanf("%f",&num2);
             
             result = addition(num1, num2);
             printf("Result: %.2f\n", result);
             
     break;
     case 2: printf(" Enter First number = ");
             scanf("%f",&num1);
             printf("Enter Second number = ");
             scanf("%f",&num2);
             
             result = subtraction(num1, num2);
             printf("Result: %.2f\n", result);
     break;
     case 3: printf(" Enter First number = ");
             scanf("%f",&num1);
             printf("Enter Second number = ");
             scanf("%f",&num2);
             
            if (num2 != 0)
                        {
                            result = division(num1, num2);
                        } else 
                        {
                            printf("Error: Division by zero!\n");
                            continue;  
                        }
            printf("Result: %.2f\n", result);            
     break; 
     case 4: 
             
             result = multiplication(num1, num2);
             printf("Result: %.2f\n", result);
     break;

     default: printf("exit:\n");
     
 }
 }while(a!=5);
 
}
 
float addition(float a, float b) {
    return a + b;
}

float subtraction(float a, float b) {
    return a - b;
}

float multiplication(float a, float b) {
    return a * b;
}

float division(float a, float b) {
    return a / b;
}