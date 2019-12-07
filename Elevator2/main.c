#include <stdio.h>
#include <stdlib.h>

int main()
{
    //build a system that takes in an integer and returns a collection of integers for "floors" visited (assuming you started at floor 0)
    //Must define a first floor and a top floor
    //If input is out of these bounds return an error
    //must compile with MSVC with the flag /w4 or /w3 enabled with no warnings or errors
    //must take input from the user and display output in the console
    //submission must be in the form of a github url containing your source files only with no build artifacts
    //modify your original elevator assignment to allow for multiple floors to be requested
    //elevator to move to multiple floors in quick succession
    //must print the floor history
    //The elevator can move up and down, but it must move up then down and cannot "ping pong"

    //Unfortunately, it ping-pongs.

    int floor = 0;
    int maxFloors = 8;
    int button;
    int loop = 1;
    int move = 0;

    printf("Welcome to the Elevator!\nYou are currently on Floor %d.\nThis elevator goes up to floor %d.\n\n", floor, maxFloors);

    printf("Which floor would you like to go to?\n");

    printf("For multiple floors, separate choices with a space.\n");

    do{
        scanf_s("%d", &button);

        if(button == 0 || button == 1 || button == 2 || button == 3 || button == 4 || button == 5 || button == 6 || button == 7 || button == 8)
        {
            if(button>floor)
            {
                move = button-floor;
                for(int i = floor; i < button; i++)
                {
                    printf("Moving to Floor %d.\n\n", i);
                }
            }
            else if(button<floor)
            {
                move = button-floor;
                for(int i = floor; i > button; i--)
                {
                    printf("Moving to Floor %d.\n\n", i);
                }
            }
            floor = button;
            printf("Welcome to Floor %d, you have traveled %d floors.\n", floor, move);
        }
        else
        {
            printf("Sorry, this elevator cannot go to that floor.\n\n");
        }
    }while(loop==1);

/*     if(button < (maxFloors+1))
    {
        printf("Moving to Floor %d.\n\n", button);
    }
    else
    {
        printf("Sorry, this elevator cannot go to that floor.\n\n");
    } */


    return 0;
}