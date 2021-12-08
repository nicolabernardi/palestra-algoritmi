#include <fstream>

using namespace std;

int main() {
    ifstream in("input.txt");

    int N, M, i, n1, n2;
    in >> N >> M;
    
    int partenza[N]; //mi dice l'ordine di partenza
    int posizioni[N+1]; //mi dice in che posizione è la vettura numero i, con i che parte da 1
    // leggo l'ordine di partenza
    for(i=0; i<N; i++){
        in >> partenza[i];  //es. macchina 3, è la i-esima nell'ordine
        posizioni[partenza[i]] = i; //mi salvo in che posizione è (i) la macchina 3
    }
    // ora leggo i sorpassi ed aggiorno l'ordine di conseguenza
    for(i=0; i<M; i++){
        in >> n1 >> n2;
        //n1 ha sorpassato n2: li scambio nel vettore che mi dice l'ordine (classifica)
        int tmp = partenza[posizioni[n1]];
        partenza[posizioni[n1]] = partenza[posizioni[n2]];
        partenza[posizioni[n2]] = tmp;
        // aggiorno di conseguenza anche il vettore delle posizioni
        tmp = posizioni[n1];
        posizioni[n1] = posizioni[n2];
        posizioni[n2] = tmp;
    }
    in.close();
    
    ofstream out("output.txt");
    out << partenza[0];
    out.close();
    
    return 0;
}
