#include <stdio.h> 
#include <string.h>

int main() {

    char noun [50] = "";
    char verb1 [50] = "";
    char verb2[50] = "";
    char adjective1[50] = "";  
    char adjective2[50] = ""; 

    printf("Enter an adjective: ");
    fgets(adjective1, sizeof(adjective1), stdin);
    adjective1[strlen(adjective1) - 1] = '\0';

    printf("Enter a noun (animal/person): "); 
    fgets(noun, sizeof(noun), stdin); 
    noun[strlen(noun) - 1] = '\0';

    printf("Enter a verb (ending with -ing): "); 
    fgets(verb1, sizeof(verb1), stdin); 
    verb1[strlen(verb1) - 1] = '\0';

    printf("Enter another verb (also ending with -ing): ");
    fgets(verb2, sizeof(verb2), stdin);
    verb2[strlen(verb2) - 1] = '\0';

    printf("Enter one more adjective: ");
    fgets(adjective2, sizeof(adjective2), stdin); 
    adjective2[strlen(adjective2) - 1] = '\0';

    printf("\nThere was this %s in the distance.\n", noun);
    printf("I wasn't sure if it was %s or %s, so I went and took a closer look.\n", verb1, verb2);
    printf("It was incredibly %s, but also a little %s.\n", adjective1, adjective2);
    printf("Then I realised...I was that %s.\n", noun);

    char input; 
    printf("\nWant to play again? (y/n): ");
    scanf(" %c", &input);

    if (input == 'y' || input == 'Y') {
        printf("\nAlright, here's another game. \n\n");
        char nouna [50] = "";
        char verba [50] = "";
        char verbb[50] = "";
        char adjective0[50] = "";
        char adjective00[50] = "";
        
        printf("Enter an adjective: ");
        getchar();
        fgets(adjective0, sizeof(adjective0), stdin);
        adjective0[strlen(adjective0) - 1] = '\0';

        printf("Enter a noun (animal/person): "); 
        fgets(nouna, sizeof(nouna), stdin); 
        nouna[strlen(nouna) - 1] = '\0';

        printf("Enter a verb (ending with -ing): "); 
        fgets(verba, sizeof(verba), stdin); 
        verba[strlen(verba) - 1] = '\0';

        printf("Enter another verb (also ending with -ing): ");
        fgets(verbb, sizeof(verbb), stdin);
        verbb[strlen(verbb) - 1] = '\0';

        printf("Enter one more adjective: ");
        fgets(adjective00, sizeof(adjective00), stdin); 
        adjective00[strlen(adjective00) - 1] = '\0';

        printf("\nYour eyes are a %s blue\n", adjective0);
        printf("So why can't I be %s through you?\n", verba);
        printf("I find it hard to see us %s\n", verbb);
        printf("The other boys are %s to reach out to me\n", adjective00);
        printf("Only want to talk to %s", nouna);
    }
    else {
        printf("\nOkay, bye then!\n");
    }

    return 0;
}