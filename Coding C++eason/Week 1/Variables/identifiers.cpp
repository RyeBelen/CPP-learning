// Rules for Naming Identifiers in C++

// Valid Identifiers
int myVariable = 10;       // Letters and starts with a letter
int _start = 5;            // Starts with an underscore
int counter123 = 20;       // Letters and digits combined

// Invalid Identifiers (These will cause compilation errors)
// int 123variable = 30;   // Starts with a digit
// int void = 15;          // Uses a reserved keyword
// int my-variable = 50;   // Contains a hyphen (not allowed)

// Note: Identifiers are case-sensitive
int Variable = 100;
int variable = 200;
int VARIABLE = 300;

// Each of the above is treated as a different identifier
