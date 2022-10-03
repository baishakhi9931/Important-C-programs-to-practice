#include <stdio.h>
/* 
    Global declaration. 
    Value of a const variable cannot be changed 
    throughout the execution of program
*/
const int MAX = 5;  

int main()
{

    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");

    int var[]={10, 20, 30, 40, 50}; // initializing an array(here var) of int pointers
    int i = 0;

    /*
        ptr is an array of int pointers i.e. 
        it stores the address of each array element
    */
    int *ptr[MAX];

    for(i = 0; i < MAX; i++)
    {
        /*
            Assign the address of each of the array 
            element to the ptr array
        */
        ptr[i] = &var[i];
    }

    for(i = 0; i < MAX; i++)
    {
        /*
            ptr[i] stores the address of the element var[i]. 
            Hence, *ptr[i] returns the value of the element 
            stored at location ptr[i]
        */
        printf("Value of var[%d] = %i\n\n", i, *ptr[i]);
    }

    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}
