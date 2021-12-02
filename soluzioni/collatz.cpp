#include <iostream>
#include <fstream>

using namespace std;

int collatz(int n, int len){
    if(n == 1)
        return len; //termina la sequenza
    if(n %2 == 0)
        return collatz(n/2, len+1);
    else
        return collatz(3*n+1, len+1);
}

int main(){
    ifstream in("input.txt");
    ofstream out("output.txt");
    
    int n;
    in >> n;
    
    out << collatz(n, 1); //la lunghezza di base è 1 --> soltanto il numero 1
    out.close();
}

