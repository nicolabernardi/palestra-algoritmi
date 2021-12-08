#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define MAXN 10000

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int interroga(int N, int K, int D[]) {
    // Mettete qui il codice della soluzione
    
    //voglio ordinare il vettore
    qsort(D, N, sizeof(int), cmpfunc);
    
    //ora cerco la sequenza lunga K, a partire da ogni elemento, tale che la sua differenza
    //tra un elemento e il successivo (scontentezza) sia la minore possibile
    int scontentezza = -1 , scont_parziale;
    int i, n1, n2;
    for(i=0; i<=N-K; i++){
        scont_parziale = D[i+K-1] - D[i];
        if(scont_parziale < scontentezza || scontentezza == -1)
            scontentezza = scont_parziale;
    }
    return scontentezza;
}

int D[MAXN];

int main() {
    FILE *fr, *fw;
    int N, K, i;

    fr = fopen("input.txt", "r");
    fw = fopen("output.txt", "w");

    assert(2 == fscanf(fr, "%d%d", &N, &K));
    for (i = 0; i < N; i++)
        assert(1 == fscanf(fr, "%d", &D[i]));

    fprintf(fw, "%d\n", interroga(N, K, D));
    fclose(fr);
    fclose(fw);
    return 0;
}
