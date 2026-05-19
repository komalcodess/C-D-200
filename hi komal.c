#include <stdio.h>
#include <string.h>  // Needed for strcmp()

int main() {
    char song[60];

    printf("Enter a song of Lana Del Rey (first letter must be uppercase of all words): ");
    fgets(song, sizeof(song), stdin);


    song[strcspn(song, "\n")]=0;

    if (strcmp(song, "Summertime Sadness") == 0) {
        printf("Kiss me hard before you go, summertime sadness,\nI just wanted you to know, that baby you're the best.");
    } else if (strcmp(song, "Cinnamon girl") == 0) {
        printf("There's things I wanna say to you, but I'll just let you live\nlike if you hold me without hurting me\nyou'll be the first who ever did.");
    } else if (strcmp(song, "Brooklyn Baby") == 0) {
        printf("Well my boyfriend's in a band, he plays guitar while I sing Lou Reed\nAnd my jazz collection's rare, I get down on poetry.");
    } else if (strcmp(song, "Born To Die") == 0) {
        printf("Come and take a walk on the wild side, let me kiss you hard in the pouring rain,\nyou like your girls insane.");
    } else if (strcmp(song, "Young and Beautiful")==0) {
        printf("Dear lord when I get to heaven, please let me bring my man\nWhen he comes tell me that you'll let him, father tell me if you can.");
    } else if (strcmp(song, "Salvatore") == 0) {
        printf("Catch me if you can, working on my tan, Salvatore~~\nDying by the hand of a foreign man happily.");
    } else {
        printf("This song's lyrics aren't available... oh no.");
    }

    return 0;
}
