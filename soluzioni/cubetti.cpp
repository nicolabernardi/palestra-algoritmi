using namespace std;

/*
    N.B. Se ottenete 0/100 e non capite perchè,
    provate a controllare bene gli indici dei vettori (taken e coda),
    taken ha dimensione N+1 mentre coda ha dimensione N
*/

void Vernicia(int indice, int colore); //definita nei file forniti, basta dichiarare qui la funzione

void reset_vettore(int N, bool vettore[]){
    //inizializzo/resetto il vettore, mettendo tutto a false
    for(int i=0; i<N; i++) {
        vettore[i] = false;
    }
}

void Diversifica(int N, int colore[]) {
    bool taken[N+1]; //i colori vanno da 1 a N, la dimensione del vettore è N+1
    int coda[N]; //N cubetti, la dimensione della coda è N
    int fine_coda = -1;
    int inizio_coda = 0;
    
    reset_vettore(N+1, taken);

    //vedo se un certo colore è stato preso oppure no
    for(int i=0; i<N; i++) {
        taken[colore[i]] = true;
    }
    //per ogni colore che non è stato preso, lo metto in una coda di colori che posso usare
    //i colori vanno da 1 a N
    for (int i=1; i<=N; i++) {
        if (!taken[i]) {
            fine_coda++;
            coda[fine_coda] = i;
        }
    }
    //resetto il vettore che mi dice se i colori sono stati usati oppure no
    reset_vettore(N+1, taken); //mette tutto a false
    for (int i=0; i<N; i++) {
        if (!taken[colore[i]]) { //se il colore di cui è colorato il cubetto non è ancora stato usato
            taken[colore[i]] = true;  //allora uso quel colore: il cubetto resta dello stesso colore
        } else { 
            Vernicia(i,coda[inizio_coda]); //altrimenti se il colore è già stato usato, lo devo cambiare
            //quindi ricoloro il cubetto di uno tra i colori che sono presenti nella coda
            inizio_coda++; //e tolgo il colore dalla coda, per non riusarlo (non lo considero, non lo "cancello" effettivamente)
            //non mi devo preoccupare che ci siano abbastanza colori, perchè questo è garantito dal testo del problema
        }
    }
}