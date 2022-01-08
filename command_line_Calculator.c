#include<stdio.h>
/* Header file included for predefine functions */

#include<string.h>

#include<stdlib.h>
/* library added for using (atoi) function (atoi) function is basically convert
   ascii to integer command line argument is not taking integer it is always a string
   thats why we have to convert string ascii to integer */


/*-------------------------Main Star form here ------------------------------------*/

int main(int argc, char const *argv[])
{
    int num_one, num_two;
    /* variable declare to store return value of (atoi) function */

    int result;
    /* variable declared to store the result of arithmatic operation */
    

    if(argc!=4)  /* if argument count is not equal to four then if statement execute */
    {
        printf("Please Provide Proper Argument\n");
        printf("\nImportant Note Please Read: \n");
        printf("Charactor '*' is not supported in command line argument \nDue to this Please Use Charactor X for multiplication \n");
        printf("./a.out (first no.)  (operator) (second no.) total four arugment needed\n");
        
        /* printing message for user to provide proper input */
    }

    

    num_one = atoi(argv[1]);
    /* storing return value of atoi function in num_one */

    num_two = atoi(argv[3]);
    /* storing return value of atoi function in num_two */


    if(argv[2][0] == '+') /* if argv two of zero is equal to '+' then  */
    {
        result = num_one + num_two;
        /* num one and num two added and result stored in result var */
        
        printf("Additon is: %d\n",result);
        /* printing result on screen */
    }
    
       else if (argv[2][0] == '-') /* if argv two of zero is equal to '-' then */
        {
            result = num_one - num_two;
            /* num one and num two subtracted and result stored in result var */
            
            printf("Subtraction is: %d\n",result);
            /* printing result on screen */
        }

             else if (argv[2][0] == '/') /* if argv two of zero is equal to '/' then */
            {
                result = num_one / num_two;
                /* num one and num two multiplied and result stored in result var */
            
                printf("Division is: %d\n",result);
                /* printing result on screen */
            }
        
                    else if (argv[2][0] == 'x') /* if argv two of zero is equal to '*' then */
                    {
                        result = num_one * num_two;
                        /* num one and num two multiplied and result stored in result var */
            
                        printf("Multiplication is: %d\n",result);
                        /* printing result on screen */
                    }
                     
                        
  


    return 0;
}
/*-------------------------Main Ends Here -------------------------------------------*/
