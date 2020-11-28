/* Example using strcmp by TechOnTheNet.com */

#include <stdio.h>
#include <string.h>

int main(int argc, char * argv[]){
    int result;

    char string[50] = "calendario";

    result = strcmp(string, argv[1]);

    if (result == 0) printf("Strings are the same\n");

    if (result < 0) printf("Second string is less than the first\n");

    return 0;
}