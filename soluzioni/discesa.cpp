#include <fstream>

#define MAX_N 10

using namespace std;

int max_discesa(int i, int j, int N, int piramide[MAX_N][MAX_N], int massima){
    if(i < N && j < N){
        massima += piramide[i][j];
        massima = max(max_discesa(i+1, j, N, piramide, massima),
                        max_discesa(i+1, j+1, N, piramide, massima));
    }
    return massima;
}

int main(){
    ifstream in("input.txt");
    
    int N;
    in >> N;
    int piramide[MAX_N][MAX_N]; //uso solo mezza matrice
    
    for(int i=0; i<N; i++){
        for(int j=0; j<=i; j++)
        in >> piramide[i][j];
    }
    
    ofstream out("output.txt");
    out << max_discesa(0,0, N, piramide, 0); //ciascun vino ha gradazione > 0
    out.close();
}