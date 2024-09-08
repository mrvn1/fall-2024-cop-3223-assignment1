#include <stdio.h>
#include <math.h>
#define PI 3.14159



// Helper function, meant to ask for user input throughout the program in order to calculate formulas without having to re=enter expressions. 
double askForUserInput(char *arg1) {
    double user_input;                  // Stores input
    printf("%s", arg1);                 // Prints the input back
    scanf("%lf", &user_input);          // Scan for user input

    return user_input;
}



// Asking for user's input in terms of (x1, y1) and (x2, y2)
double calculateDistance() {
    
    double x1 = askForUserInput("Enter x1: ");
    double y1 = askForUserInput("Enter y1: ");
    double x2 = askForUserInput("Enter x2: "); 
    double y2 = askForUserInput("Enter y2: ");

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));          // Distance formula meant to calculate the diameter of the circle.
    printf("Point #1 entered: x1 = %.2lf, y1 = %.2lf\n", x1, y1);       // Printing out the entered value back to the terminal. 
    printf("Point #2 entered: x2 = %.2lf, y2 = %.2lf\n", x2, y2);

    return distance; 
}



// With help of helper function, able to re-enter value to calculate perimeter. 
double calculatePerimeter() {

    double diameter = calculateDistance();          // Taking the distance calulated from the previous function as a base for the definition of diameter.
    double radius = diameter / 2;                   // Calculating radius by dividing  diameter by 2.
    double perimeter = 2 * PI * radius;             // Following the perimeter formula of a circle.

    printf("The perimeter of the city encompassed by your request is %.2lf\n", perimeter);          // Printing the asked value of the circle.

    return 4.0;         // Concept took a good while to understand and how to implement formulas from another function.
}



// Similar to perimeter, followed general steps for area. Using user input for area formula.
double calculateArea() {
    
    double diameter = calculateDistance();          // Using distance as base for diameter definition. Followed similar steps to perimeter.
    double radius = diameter / 2;                   
    double area = PI * pow(radius, 2);              

    printf("The area of the city encompassed by your request is %.2lf\n", area);
    
    return 3.0;             // Concept became a bit easier after understanding perimeter.
}



// Using user input for x1 and x2 in order to find the distance between the two x values.
double calculateWidth() {
    
    double x1 = askForUserInput("Enter x1: ");          // Maybe slight repeat, but decided to just ask user to input x value again. Could not understand how to carry over value from the distance function.
    double x2 = askForUserInput("Enter x2: "); 
    double width = fabs(x2 - x1);                       // Used Google to ensure that value remains positive with the use of abs or fabs in case of floating point.

    printf("The width of the city encompassed by your request is %.2lf\n", width);

    return 5.0;                 // Concept was hard as there was difficutly bringing in values from a different function.
}



// Using user input for y1 and y2 in order to find the distance between the two x values.
double calculateHeight() {
    
    double y1 = askForUserInput("Enter y1: ");          // Similar step to width in reusing user's input.
    double y2 = askForUserInput("Enter y2: "); 
    double height = fabs(y2 - y1);

    printf("The height of the city encompassed by your request is %.2lf\n", height);

    return 2.0;                // Concept easier after struggling with width for a while.
}



// Main to call the other functions into one. 
int main(int argc, char** argv) {

    double distance = calculateDistance();                                     
    printf("The distance between the two points is %.2lf\n", distance);         // Moved print function from distance function to main so print does not repeat after every formula.

    calculatePerimeter();

    calculateArea();
    
    calculateWidth();

    calculateHeight();

    return 0;
}