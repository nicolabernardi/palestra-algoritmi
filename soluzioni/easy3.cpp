#include <iostream>
#include <fstream>

using namespace std;

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int trova_max(int i, int j, int sequenza[]){
    if(i < 0 || j < 0)
        return -1;
    if(sequenza[i] %2 == 0 && sequenza[j] %2 == 0 ||
        sequenza[i] %2 != 0 && sequenza[j] %2 != 0)
        return sequenza[i]+sequenza[j];
    else
        return max(trova_max(i-1, j, sequenza), trova_max(i-1, i, sequenza));
}

int main(){
    ifstream in("input.txt");
    ofstream out("output.txt");
    
    int n;
    in >> n;

    int sequenza[n];
    for(int i=0; i<n; i++){
        in >> sequenza[i];
    }
    in.close();
    
    //ordino la sequenza
    qsort(sequenza, n, sizeof(int), cmpfunc);
    
    out << trova_max(n-2, n-1, sequenza);
    out.close();
}

