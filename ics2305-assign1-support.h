#ifndef ICS2305_A1SUPPORT_INCLUDED
#define ICS2305_A1SUPPORT_INCLUDED

#define WIDTH 100
#define HEIGHT 50
#define X WIDTH/2
#define Y HEIGHT/2
#define XMAX WIDTH-X-1
#define XMIN -(WIDTH-X)
#define YMAX HEIGHT-Y
#define YMIN -(HEIGHT-Y)+1
#define MAX_X 3.0
#define MAX_Y 3.0

////////////////////////////////////////////////////////////////////////////////
//
//  File          : ICS2305-assign1-support.h
//  Description   : This is a set of general-purpose utility functions we use
//                  for the homework assignment #1.
//
//  Author   : ????
//  Created  : ????

//
// Functional Prototypes
int float_display_array(float f_array[]);
	// This function prints out the array of floating point values

int integer_display_array(float f_array[]);
	// This function prints out the array of integer values

int float_evens(float f_array[]);
	// Return the number of even numbers in the array (float version)

int integer_evens(float f_array[]);
	// Return the number of even numbers in the array (int version)

int make_array(int m_array[], int range, int exp, int mode);
	// Make an exponentiated set of values

int most_values(int m_array[],int n, int maxCount);
	// Print out the values with the most occurences in array

int graph_functions(float s, float u);
	// Print out the functions cos(x)+d1 and tan(x)*e1
int plot(int x, int y);

void init_grid(void);

void show_grid(void);
#endif // ICS2305_A1SUPPORT_INCLUDED
