#include <stdio.h>

int main()
{
    //build a system that takes in an integer and returns a collection of integers for "floors" visited (assuming you started at floor 0)
    //Must define a first floor and a top floor
    //If input is out of these bounds return an error
    //must compile with MSVC with the flag /w4 or /w3 enabled with no warnings or errors
    //must take input from the user and display output in the console
    //submission must be in the form of a github url containing your source files only with no build artifacts

    int floor = 0;
    int maxFloors = 22;
    int button;

    printf("Welcome to the Elevator!\nYou are currently on Floor %d.\nThis elevator goes up to floor %d.\n\n", floor, maxFloors);


    printf("Which floor would you like to go to?\n");
    scanf_s("%d", &button);

    if(button < (maxFloors+1))
    {
        printf("Moving to Floor %d.\n\n", button);
    }
    else
    {
        printf("Sorry, this elevator cannot go to that floor.\n\n");
    }



    return 0;
}