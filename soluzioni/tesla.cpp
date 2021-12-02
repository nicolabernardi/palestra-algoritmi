#include <fstream>
#include <iostream>

using namespace std;

int main(){
    ifstream in("input.txt");
    ofstream out("output.txt");
    
    int N;
    in >> N;
    
    int stazioni[N];
    for(int i=0; i<N; i++){
        in >> stazioni[i];
        stazioni[i] = stazioni[i] - 10;
    }
    
    for(int i=0; i<N; i++){ //valuto la stazione i(range 0:n-1) come stazione di partenza
        int residuo = stazioni[i];
        int stazioni_passate = 0;
        int j = i;
        while(residuo >= 0 && stazioni_passate < N){
            j = (j+1) % N; //giro il vettore in maniera circolare
            residuo += stazioni[j];
            stazioni_passate++;
        }
        if(residuo >= 0 && stazioni_passate == N){
            out << i+1; //i è la staz. di partenza. Il range lo sposto da (0:n-1) a (1:n)
            i = N; //esco dal for
        }
    }
    
    out.close();
}