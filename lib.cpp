bool f(char d2[10][20], char d1[20],int &i){
    for(int x=0; x<10; x++){
        for(int k=0; k<20; k++){
            if(d2[x][k]!=d1[k]){
                k=20;
            }altro{
                se(k==19){
                    i=x;
                    restituisci true;
                }
            }
        }
    }
    return false;
}
