#Includi <iostream>
#Includi "lib.h"
Utilizzo dello spazio dei nomi STD;


int main() {

    char elenco [10][20];
    char nome [20];

    for (int i=0; i<10; i++) {
        cin >> elenco[i];
    }

    cin >> nome;

    int a = funzione(elenco, nome);
    if (a <= 10) {
        cout << a;
    }
    altro {
 cout << "non presente";
    }

    ritorno 0;
}
