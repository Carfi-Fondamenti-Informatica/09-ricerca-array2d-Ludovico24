#Includi "lib.h"

bool nome(char a[10][20], char d1[20], int &i){
    for(int k=0;k<10;k++){
            for(int j=0;j<20;j++){
                if(a[k][j] != d1[j]){
            j=20;
                } else se(j == 19){
                    i = k;
                    restituisci true;
                }
    }
    }
    return false;
}
