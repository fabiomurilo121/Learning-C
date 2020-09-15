#include<stdio.h>
#include <string.h>

int main() {
    char *word[] = {"fnsdfjkn","nfen","ndj"},recebe[50];
    //printf("Enter word: ");
    //scanf("%s", word);        //Inputting word
    int i;

    printf("\nSplitting word into characters:");
    for(i=0;i<strlen(word);i++) {    //i is the index of character
        printf("\n%c", word[i]);
        
    }

    printf("%s",word);
    //printf("%d",tam);
    return 0;
}