#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream in("input.txt");
    ofstream out("output.txt");
    
    int n, max, curr;
    in >> n;
    in >> max; //metto max = primo numero
    for(int i=1; i<n; i++){
        in >> curr;
        if(curr > max)
            max = curr;
    }
    in.close();
    out << max;
    out.close();
}