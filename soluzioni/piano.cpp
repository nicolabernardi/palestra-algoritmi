#include <fstream>

#define MAX_N 30
#define BIG_N 10000000

int grafo[MAX_N][MAX_N];
int crediti[MAX_N];

using namespace std;

int minOre(int N, int corrente, int crediti_restanti, int ore_totali, bool visited[]){
    if(crediti_restanti <= 0){
    	return ore_totali;
    }
    else{
        int minH = BIG_N;
        visited[corrente] = true;
        for(int i=0; i<N; i++){
            if(i != corrente && grafo[corrente][i] != 0 && !visited[i]){
                int res = minOre(N, i, crediti_restanti-crediti[i], ore_totali+grafo[corrente][i], visited);
                minH = min(minH, res);
            }
        }
        visited[corrente] = false;
        return minH;
    }
}

int main(){
    ifstream in("input.txt");
    int N, K;
    in >> K >> N;
    
    for(int i=0; i<N; i++){
        in >> crediti[i];
    }
        
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            in >> grafo[i][j];
        }
    }
    in.close();
    
    bool visited[N];
    for(int i=0; i<N; i++){
        visited[i] = false;
    }
    
    int minH = BIG_N;
    for(int i=0; i<N; i++){
        int res = minOre(N, i, K-crediti[i], 0, visited); 
        //il primo esame (i), da crediti[i] crediti e richiede 0 ore (si assuma che tu abbia già studiato)
        minH = min(minH, res);
    }
    
    ofstream out("output.txt");
    out << minH << endl;
    out.close();
    
}