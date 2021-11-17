////////////////////////////////////////////////////////////////////////////////
//
//  File           : ics2305-assign1.c
//  Description    : This is the main source code for for the first assignment
//                   of ics2305 at JKUAT.
//
//   Author        : Group 7
//   Last Modified : 13/10/2021
//

// Include Files
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Project Includes
#include "ics2305-assign1-support.h"
#include "ics2305-assign1-support.c"
//
// Functions

////////////////////////////////////////////////////////////////////////////////
//
// Function     : main
// Description  : The main function for the ics2305 assignment #1
//
// Inputs       : argc - the number of command line parameters
//                argv - the parameters
// Outputs      : 0 if successful test, -1 if failure

int main(int argc, char *argv[]) {

	// Local variables
	// NOTE: this is where you will want to add some new variables
	float f_array[20];


    int i, len, mode,z;
    float num;

    //Declaring an array of size 25
    int m_array[]={25,25,43,54,65,64,75,8,9,14,2,13,44,65,67,74,81,97,17,27,53,44,65,89,67};

    //File pointer
    FILE * fPtr;
    //Opening the test-input.txt file
    fPtr = fopen("C:\\Users\\hp\\Documents\\3.2\\System Programing\\assign1\\test-input1.txt", "r");
    if(fPtr == NULL)
    {
        /* Unable to open file hence exit */
        printf("Unable to open file.\n");
        printf("Please check whether file exists and you have read privilege.\n");
        exit(EXIT_FAILURE);
    }
	// Step #1 - read in the float numbers to process
	for (i=0; i<20; i++) {
		fscanf(fPtr, "%f", &f_array[i]);
	}
	// Step #2 - convert the input values
    // float top;
    printf("Converting input values\n");

    for (i=0;i<20;i++){
        if (i<15){
            z = abs(i);//Numbers less than 15 are converted to its absolute value
        }
        else{
            z=i*pow(M_PI,2);//Numbers greater than 15 are multiplied by pie squared

            }
            printf("convert[%d]=", i);
            printf("%f\n", f_array[z]);
        }

    // Step #3 - convert the floating point values to integers

    // Step #4 - print out the integer and floating point arrays
    printf("\nFloating point values\n");
    float dis=float_display_array(f_array);//display float array

	printf("\nInteger point values\n");
	int sh=integer_display_array(f_array);//display integer array
	printf("\n");

    // Step #4 - figure out number of evens in each array
    num=float_evens(f_array);//display the number of even numbers in the array
    printf("\n");
    len=integer_evens(f_array);//display the number of even numbers in the array
    printf("\n\n");

    // Step #5 - fill up the new array, count most frequent values

    // NOTE ** THIS IS PROVIDED CODE, JUST CREATE FUNCTIONS AS IN ASSIGNMENT
    printf("3^i mod 17\n");
    make_array(m_array, 25, 3, 17);
    printf("\n");
    most_values(m_array, 25, 16);
    printf("\n3^i mod 19\n");
    make_array(m_array, 25, 3, 19);
    printf("\n");
    most_values(m_array, 25, 18);

    // Step #6 graph out functions
    printf("\n\n");
    printf("\t\t\t\tGraph: D = cos(x)*1.0, E = sin(x)*1.0\n\n\n");
    graph_functions(1.0, 1.0);
    printf("\n\n");
    printf("\t\t\t\tGraph: D = cos(x)*1.3, E = sin(x)*2.3\n\n\n");
    graph_functions(1.3, 2.3);
    printf("\n\n");
    printf("\t\t\t\tGraph: D = cos(x)*0.6, E = sin(x)*4.3\n\n\n");
    graph_functions(0.6, 4.3);

    fclose(fPtr);//closing the file

	// Return successfully
	return(0);
}
