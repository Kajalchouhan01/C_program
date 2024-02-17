#include <stdio.h>
#include <string.h>

int main() 
{
    char input_str[100];
    
    printf("Enter a string to reverse: ");
    fgets(input_str, sizeof(input_str), stdin);
    
    input_str[strcspn(input_str, "\n")] = '\0';
    
    int length = strlen(input_str);
    
    for (int i = 0; i < length / 2; i++)
    {
        char a = input_str[i];
        input_str[i] = input_str[length - i - 1];
        input_str[length - i - 1] = a;
    }
    
    printf("Reversed string: %s\n", input_str);
    
    return 0;
}
