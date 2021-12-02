#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream in("input.txt");
    ofstream out("output.txt");
    
    int n;
    in >> n;
    
    int curr, prec, var, max_var = 0;
    in >> prec; //leggo primo elemento
    for(int i=1; i<n; i++){
        in >> curr;
        var = abs(curr-prec); //uso il valore assoluto, mi interessa la "distanza" tra due valori
        if(var > max_var)
            max_var = var;
        prec = curr;
    }
    
    out << max_var;
    out.close();
}