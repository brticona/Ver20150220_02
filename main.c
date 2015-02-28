#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int const N=5;
    int i;
    int somma;
    float media;
    int massima,minima;
    int presidentidellareppubblica;
    int vettore[N];

    printf ("Inserisci l'eta'di %d persone\n",N);
    media = 0;
    for(i=0;i<N;i++) {
        printf("Inserisci l'eta'della %da persona :",i+1);
        scanf("%d",&vettore[i]);
        media = media + vettore[i];
    }
    
    
    massima = vettore[0];
    minima = vettore[0];
    presidentidellareppubblica = 0;
    for (i=0;i<N;i++) {
        if(vettore[i] > massima) 
            massima = vettore[i];
        else 
            if(vettore[i] < minima)
            minima = vettore[i];
        if (vettore[i] >50 )
            presidentidellareppubblica ++;
        }
    
    media = media/N;
    
    printf("\nEta' media : %f\n",media);
    printf("Eta' massima : %d\n",massima);
    printf("Eta' minima : %d\n",minima);
    printf("Numero potenziali presidenti della reppubblica : %d",presidentidellareppubblica);
        
    
    return (EXIT_SUCCESS);
}

