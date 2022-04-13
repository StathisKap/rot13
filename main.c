#include <stdio.h>
#include <ctype.h>

void ROT13(char * string);

int main(int argc, char ** argv)
{

    argc > 1 ? ROT13(argv[1]) : ROT13("Hello World");
    
    return 0;
}

void ROT13(char * string)
{
    while(*string != '\0')
    if(isalpha(*string))
        if((toupper(*string) <= 'Z') && (toupper(*string) > 'Z' - 13))
            printf("%c", *string++ - 13);
        else
            printf("%c", *string++ + 13);
    else
        printf("%c", *string++);
}