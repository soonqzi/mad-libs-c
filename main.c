#include <stdio.h> 
#include <string.h>

int main() {

    char noun [50] = "";
    char verb1 [50] = "";
    char verb2[50] = "";
    char adjective1[50] = "";  
    char adjective2[50] = ""; 

    printf("Enter an adjective (description): ");
    fgets(adjective1, sizeof(adjective1), stdin);
    adjective1[strlen(adjective1) - 1] = '\0';

    printf("Enter a noun (animal or person): "); 
    fgets(noun, sizeof(noun), stdin); 
    noun[strlen(noun) - 1] = '\0';

    printf("Enter a verb (ending with -ing): "); 
    fgets(verb1, sizeof(verb1), stdin); 
    verb1[strlen(verb1) - 1] = '\0';

    printf("Enter another verb (also ending with -ing): ");
    fgets(verb2, sizeof(verb2), stdin);
    verb2[strlen(verb2) - 1] = '\0';

    printf("Enter an adjective again (description): ");
    fgets(adjective2, sizeof(adjective2), stdin); 
    adjective2[strlen(adjective2) - 1] = '\0';

    printf("%s\n", noun);
    printf("%s\n", verb1); 
    printf("%s\n", verb2);
    printf("%s\n", adjective1);
    printf("%s\n", adjective2);

    printf("\nThere was this %s in the distance.\n", noun);
    printf("I wasn't sure if it was %s or %s, so I went and took a closer look.\n", verb1, verb2);
    printf("It was incredibly %s, but also a little %s.\n", adjective1, adjective2);
    printf("Then I realised...I was that %s.\n", noun);

    return 0;
}