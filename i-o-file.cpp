#include <fstream>

using namespace std;

int main(){
    //INPUT
    ifstream in("input.txt");
    
    int a,b;
    //uso lo stream del file come il cin
    in >> a >> b;
    int v[10];
    for(int i=0; i<10; i++){
        in >> v[i];
    }

    in.close(); //dopo che ho letto tutto quello che serve dal file di input

    //OUTPUT
    ofstream out("output.txt");
    
    //lo uso come il cout
    out << a+b << endl;
    
    out.close(); //dopo che ho scritto tutto quello che serve sul file di output
}
