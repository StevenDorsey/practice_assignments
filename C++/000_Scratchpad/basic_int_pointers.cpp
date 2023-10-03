/***********************************************************************************
    This scratchpad tests a theory with int pointers
************************************************************************************/

#include <iostream>

void multi_line_print(int*);

void single_line_print(int*);

void multi_line_reverse(int*, int);

void single_line_reverse(int*, int);

/***********************************************************************************
    Name:       Main

    Purpose: 
            (1) Constructs an integer array of 8 int values
            (2) Prints the values of the constructed integer array in linear and 
                reverse order, passing the integer array by reference to each.

    Input:      No user input given

    Output:  
            (1) Returns a 0 if no error occurs
            (2) Returns a nonzero int if error occurs
***********************************************************************************/
int main()
{
    int set[8] = {5, 10, 15, 20, 25, 30, 35, 40};

    // Testing function that prints in linear order, using multiple lines of code:
    multi_line_print(set);

    // Testing function that prints in linear order, using a single line of code (in body)
    single_line_print(set);

    // Testing function that prints in reverse order, using multiple lines of code
    multi_line_reverse(set, 7);

    // Testing function that prints in reverse order, using a single line of code
    single_line_reverse(set, 7);
    
    return 0;
}

/***********************************************************************************
    Name:       Multi-Line Print Function

    Purpose: 
            (1) Prints the elements in linear order of an integer array in linear 
                order.
            (2) Tests a print function that uses multiple lines to print the 
                elements in an integer array.

    Input:      Integer Array (passed by Reference)

    Output:     None
***********************************************************************************/
void multi_line_print(int* arr)
{
    int* nums = arr;

    // Display the numbers in an the array
    std::cout << "Multi-line result: \n";

    // Displays the first element 
    std::cout << *nums << " ";

    // Multi-line while-loop (body)
    while (nums < &arr[7])
    {
        // Increment address by 1
        nums++;

        // Output the next value pointed to by nums 
        std::cout << *nums << " ";
    }  
    std::cout << "\n";
}

/***********************************************************************************
    Name:       Single-Line Print Function

    Purpose: 
            (1) Prints the elements in linear order of an integer array in linear 
                order.
            (2) Tests a print function that uses a single line to print the 
                elements in an integer array.

    Input:      Integer Array (passed by Reference)

    Output:     None
***********************************************************************************/
void single_line_print(int* arr)
{
    int* nums = arr;

    // Separator
    std::cout << "\nSingle-line result: \n";

    // Single-line while-loop (body)
    while (nums <= &arr[7])
    {
        std::cout <<  *(nums)++ << " ";
    }
    std::cout << "\n";
}

/***********************************************************************************
    Name:       Multi-Line Reverse Print Function

    Purpose: 
            (1) Prints the elements in reverse order of an integer array in linear 
                order.
            (2) Tests a print function that uses multiple lines to print the 
                elements in an integer array. 
    
    Input:      Integer Array (passed by Reference)

    Output:     None
***********************************************************************************/
void multi_line_reverse(int* arr, int sze)
{
    int* nums = &arr[sze];
    
    std::cout << "\nPrinting the values in reverse order:\n";

    /***********************
        Multi-Line Version:
    ************************/ 

    // output the rear value in the array
    std::cout << "\nMulti-Line Code Result: \n";

    // Would have printed an extra digit == 0
    std::cout << *nums << " ";

    while (nums > &arr[0])
    {
        // Decrement the addr back by 1
        nums--;

        // Output the previous value next
        std::cout << *nums << " ";
    }
    std::cout << "\n";
}

/***********************************************************************************
    Name:       Multi-Line Print Function

    Purpose: 
            (1) Prints the elements in reverse order of an integer array in linear 
                order.
            (2) Tests a print function that uses a single line to print the 
                elements in an integer array. 
    
    Input:      Integer Array (passed by Reference)

    Output:     None
***********************************************************************************/
void single_line_reverse(int* arr, int sze)
{
    // Reset nums address back to the rearmost element
    int* nums = &arr[sze];

    std::cout << "\nSingle-Line Code Result: \n";
    while ( nums >= &arr[0])
    {
        std::cout << *(nums)-- << " ";
    }
}