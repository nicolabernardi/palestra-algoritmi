#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream in("input.txt");
    ofstream out("output.txt");
    
    int n, max=-1, a, b;  //a e b sono i numeri della coppia
    in >> n;
    bool trovato = false;
    for(int i=0; i<n; i++){
        in >> a >> b;
        if((a+b)%2 == 0 && (a+b) > max){
            max = a+b;
        }
    }
    in.close();
    out << max;
    out.close();
}