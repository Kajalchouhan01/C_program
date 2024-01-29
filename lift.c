#include <stdio.h>

static int currentFloor = 1;
int newFloor;

void up()
{
    for (int i = currentFloor; i <= newFloor; i++)
    {
        printf("You are on floor %d\n", i);
    }
    currentFloor = newFloor;
}

void down()
{
    for (int i = currentFloor; i >= newFloor; i--)
    {
        printf("You are on floor %d\n", i);
    }
    currentFloor = newFloor;
}


void operation()
{


  {
    printf("Enter the floor you want to visit (1 -10): ");
    scanf("%d", &newFloor);
      
      
   
    if (newFloor > currentFloor)
    {
        up();
    }
    else if (newFloor < currentFloor)
    {
        down();
    }
    else
    {
        printf("You are already on floor %d\n", currentFloor);
    }
  }

}

int main() {
    int choice;
    do {
         printf("\n currentFloor = %d \n",currentFloor);   //showing current floor
        operation();
        printf("Do you want to continue? (1 for Yes, 0 for No): ");
        scanf("%d", &choice);
        
    } while (choice != 0);

    return 0;
}
