#include <fstream>
#define MAX_N 25

using namespace std;
ofstream out("output.txt");


void piastrelle(int n, int scelte[], int i){
    if(n < 0)
        return;
    if(n == 0){
        int j;
        for (j=0; j < i; j++) {
            if (scelte[j] == 1) {
                out << "[O]";
            } else {
                out << "[OOOO]";
            }
        }
        out << endl;
    }else{
        //metto una piastrella 1*1
        scelte[i] = 1;
        piastrelle(n-1, scelte, i+1);
        
        //alternativa: metto una piastrella 1*2
        scelte[i] = 2;
        piastrelle(n-2, scelte, i+1);
    }
}

int main(){
    ifstream in("input.txt");
    int N;
    in >> N;
    in.close();
    
    int scelte[MAX_N]; //al massimo N = 25 
    for(int i=0; i<MAX_N; i++){
        scelte[i] = 0;
    }
    
    piastrelle(N, scelte, 0);
    out.close();
}
