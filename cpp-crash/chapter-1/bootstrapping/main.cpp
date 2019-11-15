// LIBRARY IMPORT //
// You know what this is.
#include <cstdio>

// DECLARING VARIABLES //
// Variable declarations contain a type followed by the variable's name.
// Below shows the declaration of an integer variable named "the_answer".
int the_answer;

// INITIALIZING A VARIABLES STATE //
// You can a variable "equal to" a value (of the same type).
// This sets the value and initializes the variable at the same time.
// You can also initialize a variable to the result of an expression (shown following).
int the_meaning = 42;

// EXPRESSIONS //
// Expressions can pull values of other variables.
// You can + (add), - (sub), * (mult), / (div), and % (mod).
// There are many more operators.
int lucky_number = the_meaning / 6;

// FUNCTIONS
// Blocks of code that accept inputs and return outputs.
// Decalared with a type for the return value, a name, and input declarations.
// These must be defined before they are used.
bool check_a_meaning(int value) {
    if (the_meaning == value) {
        printf("Equal!\n");
        return true;
    } else {
        printf("Not equal.\n");
        return false;
    }
}

// MAIN FUNCTION //
// You know what this is.
int main() {

    // CONDITIONAL STATEMENTS //
    // These return booleans (true/false values).
    // By adding conditionals, programs can make decisions.
    int x = 0;
    42  == x; // Equality
    42  != x; // Inequality
    100 >  x; // Greater Than
    123 >= x; // Greater Than OR Equal To
    -10 <  x; // Less Than
    -99 <= x; // Less Than OR Equal To

    // USING CONDITIONALS (IF/THEN/ELSE) //
    // If (true) then do.something() else do.somethingelse();
    // These evaluate an expression/conditional and will execute if true.
    // You can add additional choices with "else" and "else if"
    if (x < the_meaning) {
        printf("x is less than the_meaning\n");
    } else if (x > the_meaning) {
        printf("x is more than the_meaning\n");
    } else {
        printf("x is neither less or more than the_meaning, it must be equal.\n");
    }

    // USING FUNCTIONS
    // To call a function, use it's name, and give it it's required inputs.
    check_a_meaning(x);

    // PRINTF FORMAT SPECIFIERS
    // A format specifier in a printf string begins with a % followed by one character.
    // Example: the format specifier for an int (integer) is %d.
    // Values for format specifiers are the arguments following the string.
    printf("x is %d, the_meaning is %d, and your lucky_number is %d\n", x, the_meaning, lucky_number);

}