#include <fstream>

using namespace std;

int max_vini(int i, int N, int gradazioni[], int numero_vini, int precedente){
    if(i >= N)
        return numero_vini;
    else{
        int val = max_vini(i+1, N, gradazioni, numero_vini, precedente); //non prendo questo vino
        if(gradazioni[i] >= precedente){ //posso prendere il vino
            //prendo questo vino, devo saltare quello dopo
            int val1 = max_vini(i+2, N, gradazioni, numero_vini+1, gradazioni[i]); 
            val = max(val, val1);
        }
        return val;
    }
}

int main(){
    ifstream in("input.txt");
    
    int N;
    in >> N;
    int gradazioni[N];
    for(int i=0; i<N; i++)
        in >> gradazioni[i];
    
    ofstream out("output.txt");
    out << max_vini(0, N, gradazioni, 0, 0); //ciascun vino ha gradazione > 0
    out.close();
}