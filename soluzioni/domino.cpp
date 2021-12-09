#include<fstream>

using namespace std;

#define MAX_N 10

bool usate[MAX_N];
int v[MAX_N][2];
int N;
int M;

void solve(int tessera, int len) {
	if(len > M) M = len; //aggiorno la lunghezza massima che ho trovato finora
	for(int i=0;i<N;i++) { //provo ad aggiungere ciascuna tessera che non ho ancora usato come prossima tessera
		if(!usate[i]) {
			if(tessera == v[i][0]) { //controllo se la tessera i-esima si può "attaccare" in uno dei due modi
				usate[i] = true; //marco la tessera i-esima come usata
				solve(v[i][1], len+1); //provo ad andare avanti
				usate[i] = false; //resetto
			}
			else if(tessera == v[i][1]) { //controllo se la tessera i-esima si può "attaccare" nell'altro modo
				usate[i] = true; //marco la tessera i-esima come usata
				solve(v[i][0], len+1); //provo ad andare avanti
				usate[i] = false; //resetto
			}
		}
	}
}

int main() {
    //leggo i dati dal file
	ifstream in("input.txt");
	in>>N;
	for(int i=0;i<N;i++) {
		in>> v[i][0] >> v[i][1]; //leggo la tessera, nelle sue due facce
		usate[i] = false;  //non ho ancora usato la tessera, la marco come non usata
	}
	in.close();
	
	for(int i=0;i<N;i++) { //per ogni tessera:
		usate[i] = true;  //1. marco la tessera come usata
		solve(v[i][0], 1); //2. provo a creare una sequenza con la tessera rovesciata [1|0]
		solve(v[i][1], 1); //3. provo a creare una sequenza con la tessera dritta [0|1]
		                    //la lunghezza che passo è 1, perchè è lunga almeno 1 tessera (quella che ho scelto)
		usate[i] = false; //4. RESETTO: ora, che ho provato a creare tutte le sequenze a partire da questa tessera,
		                    // non segno più la tessere come usata, in modo che possa comparire in altre sequenze
		                    // con altre tessere di partenza
	}
	
	/*
	    N.B: la fase di RESET serve per fare in modo di analizzare tutte le possibili sequenze di tessere,
	    se non la faccio, me ne perdo qualcuna
	*/
	
	//stampo il risultato
	ofstream out("output.txt");
	out<< M <<endl;
	out.close();
	
	return 0;
}