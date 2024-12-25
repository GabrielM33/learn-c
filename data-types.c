#include <stdio.h>

int main()
{
    // Integer types
    int age = 25;                           // Basic integer type, typically 4 bytes (-2,147,483,648 to 2,147,483,647)
    float price = 19.99;                    // Single-precision floating point, 4 bytes, ~7 decimal digits precision
    double pi = 3.14159265;                 // Double-precision floating point, 8 bytes, ~15 decimal digits precision
    short small_num = 32454;                // Small integer type, 2 bytes (-32,768 to 32,767)
    long big_num = 30942309550290;          // Large integer type, 8 bytes (-9 quintillion to +9 quintillion)
    unsigned int positive_only = 350929523; // Integer that can only be positive (0 to 4,294,967,295)

    // Float point types
    float temperature = 98.4f;        // 'f' suffix denotes a float literal, good for simple decimal values
    double precise_num = 3.141513443; // More precise decimal numbers, used in scientific calculations

    // Character type
    char single_char = 'A';    // Single character, 1 byte, can also store small numbers (-128 to 127)
    char string[] = "Gabriel"; // Array of characters (string), terminated with '\0' null character

    // Boolean values (C89/90 doesn't have built-in boolean type)
    int is_true = 1;  // In C, non-zero values are considered true
    int is_false = 0; // Zero represents false

    // Constants
    const int MAX_SIZE = 100; // Constant value that cannot be modified after declaration
                              // Used for fixed values and magic numbers

    printf("I'm %d years old\n", age);
    printf("Current temperature: %.1f*C\n", temperature);
    printf("My name is %s\n", string);

    return 0;
}
