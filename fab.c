	
/*

Title        : Write a program to generate fibonacci numbers <= 'n'

Author       : razik

Date         : 07-9-2024

Description  :

            Input - Read a number from the user

            Output - Print the fibanocci series 

               Sample Output: Enter a number: 8

                              0, 1, 1, 2, 3, 5, 8

                              Do you want to continue (y/Y) : y



                              Enter a number: 10

                              0, 1, 1, 2, 3, 5, 8

                              Do you want to continue (y/Y) : y



                              Enter a number: -21

                              0, 1, -1, 2, -3, 5, -8, 13, -21

                              Do you want to continue (y/Y) : y



                              Enter a number: -13

                              0, 1, -1, 2, -3, 5, -8, 13

                              Do you want to continue (y/Y) : y



                              Enter a number: 2000000

                              Error : Number out of range, please enter the value -2 20 < 'N' < 2 20

                              Do you want to continue (y/Y) : n

*/



#include <stdio.h>



int main()

{

    //Declare the required variables

    int i;

    int res = 1;

    char option;



    for(i = 0; i < 20; i++) 

    {

        res = res * 2;

    }



    do

    {

        //Declare required variables

        int num;

        int next_term = 0;

        int prev_term = 0;

        int cur_term = 1;



        //Read number from user

        printf ("Enter a number: ");

        scanf ("%d", &num);



        //Validate if the user input lies between -2^20 and 2^20

        if ( num > -res && num < res )

        {



            //Logic to print positive fibonacci series

            if ( num > 0 )

            {

                printf ("%d, ", prev_term);

                while ( cur_term <= num )

                {

                    printf ("%d, ", cur_term);

                    next_term = prev_term + cur_term;

                    prev_term = cur_term;

                    cur_term = next_term;

                }

                printf ("\n");

            }

            

            //Logic to print negative fibonacci series

            else if ( num < 0 )

            {

                printf ("%d, ", prev_term);

                while ( cur_term >= num && cur_term <= -num )

                {

                    printf ("%d, ", cur_term);

                    next_term = prev_term - cur_term;

                    prev_term = cur_term;

                    cur_term = next_term;

                }

                printf ("\n");

            }

            else

            {

                printf ("%d\n", prev_term);

            }

        }

        else

        {

            printf ("Entered number %d is out of range\n", num);

        }

    

    //Implement the continue option

    printf ("Do you want to continue? (Y|N):");

    getchar();

    scanf ("%c", &option);

    } while ( option == 'y' || option == 'Y');



    return 0;

}

