#Includi "lib.h"
#Includi "cstring"

int funzione (char elenco [10][20], char nome[20]) {

    for (int i = 0; i < 10; i++) {
        if (strcmp(elenco [i], nome) == 0) {
            ritorno i;
        }
    }

    ritorno 44;
}
