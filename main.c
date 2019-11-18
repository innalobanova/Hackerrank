#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);


// La chaine de caractères à traiter.
    char str[strlen(s)] ; //= "- Voici une phrase avec quelques séparateurs ! -";
    // La définitions de séparateurs connus.
    strcpy(str,s);
    const char * separators = " ";

    // On cherche à récupérer, un à un, tous les mots (token) de la phrase
    // et on commence par le premier.
    char * strToken = strtok ( str, separators );
    
     while ( strToken != NULL ) {
        printf ( "%s\n", strToken );
        // On demande le token suivant.
        strToken = strtok ( NULL, separators );
     }


    
    //Write your logic to print the tokens of the sentence here.
    return 0;
}

