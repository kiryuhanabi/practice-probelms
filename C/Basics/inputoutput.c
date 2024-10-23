#include <stdio.h> //Standard library header header file for printf ,stdio -> standard input and output, header file contains declaration of functions and block of codes, has built in functions
int main ()  //main() function declares the the execution point of a code, here we are expecting an integer return, the integer return tells the system how it operated, 0 for successful return., non zero for error
{
    printf("Hello\nI m not okay\n");//(\n) for a new line,(\t) for tab distance

    //int haruhi = 100, kyon=50;
    //float nagato = 4.56789;
    //printf("%d %d %0.6f",haruhi, kyon, nagato); //format specifier -> %d for integer, %f for float, %c for character,%s for string,%lf for double,%lld for long long integer
    //char mikuru = "F";
    //printf("c",mikuru);
    int mikuruP,mikuruF;
    scanf("%d %d", &mikuruP, &mikuruF); //"&" declares the address for the variable in memory
    printf("%d %d", mikuruP, mikuruF);
    return 0;



}
// data types -> int = 4 byte, long long int = 8 bytes, float = 4 bytes, double = 8 bytes , char
// declaring variable -> data type  variable;
// 4 bytes = 32 bits, can store upto (2^32)-1
