/***********************************************************************************************
Programming Assignment 1.
Program to operate on an ATM Machine.
Menu driven system which gives the user 3 different PIN management options and an exit option:

1. Enter PIN and verify correct
2. Change PIN
3. Display the number of times the PIN was entered
4. Exit Program

Author:Dónal Kelly
Begin Date: 27/10/2018
End Date: 09/11/2018
***********************************************************************************************/

#include <stdio.h>

int main()

{

    int option;
    int pin;
    int pinChange;
    int correct;
    int incorrect;

    // while loop used so that the main menu re-displays after each option has completed.
    while (1)//begin loop
    {

        printf("\n\nATM Machine #c49503, Kevin Street - BankOfKelly\n");

        //dislay a menu of options, 1-4.
        printf("Please select one of the PIN services below:\n");
        printf("1.Enter PIN for verification\n");
        printf("2.Change PIN\n");
        printf("3.Display the number of times your PIN was entered\n");
        printf("4.Exit\n\n");


        printf("Enter the number of your choice, 1-4: \n\n");
        scanf("%d", &option);


        {
            //begin 'if' 'elseif' statements. If the user inputs '1', the compiler will run the following.
            if (option==1)
            {
                printf("Enter your PIN: \n");
                scanf("%d",&pin);

                    //original pin 1234 and if pin changed, new pin accepted.
                    if (pin==1234 || pin==pinChange)
                    {
                        printf("PIN Correct\n");//print "Pin Correct".
                        correct++;//counter for option 3
                    }
                    else//if not.
                    {
                        printf("Invalid PIN\n");//print "Invalid Pin".
                        incorrect++;//counter for option 3
                    }
            }

            else if(option==2)//If the user inputs '2', the following will compile.
            {
                printf("Please enter your existing PIN: \n");
                scanf("%d",&pin);

                    if (pin==1234)//need to verify old PIN.
                    {
                        printf("Please enter your new PIN: \n");
                        scanf("%d",&pinChange);//whatever number the user inputs, is now known as 'pinChange'
                        pin= pinChange;//we want the number in 'pinChange' to be the new 'pin'.

                        printf("Please enter your new PIN again: \n");
                        scanf("%d",&pin);//'pinChange' is now 'pin', we have to confirm this.

                        if(pin!=pinChange)//If the pin is not equals to the number the user inputted(pinChange).
                        {
                            printf("Invalid Input\n");//print an error message.
                        }
                        else
                        {
                            printf("New PIN:%d\n",pinChange);//if pin is equal to pinChange, confirm to the user that the pin has changed.
                        }
                    }
                    else
                    {
                        printf("Invalid Input\n");
                    }
            }
            else if (option==3)
            {
                printf("You entered your PIN correctly, %d time(s). You entered your PIN incorrectly, %d time(s)\n\n", correct,incorrect);

            }
            else if (option==4)
            {
                printf("Exiting program...\n");
                break;//exit program using "break".
            }
            else
            {
                printf("Invalid Input, try again.");
            }


        }
    }//end loop

    return 0;

}//end main
