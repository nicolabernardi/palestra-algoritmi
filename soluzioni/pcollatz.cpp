#include <iostream>
#include <fstream>
using namespace std;

int main() {
   ifstream in ("input.txt");
   ofstream out("output.txt");
   
   int A, B;
   in >> A >> B;
   in.close();
   int N = 0;
   
   for(int i=A; i<=B; i++){
       bool ended_collatz = false, ended_pollatz = false;
       int collatz = i, pollatz = i;
       int iteration_collatz, iteration_pollatz;
 
        //mi calcolo l'i-esimo numero di collatz e di pollatz
        while(!ended_collatz && !ended_pollatz){ //appena ne calcolo uno dei due, esco dal while
            if(collatz == 1)
                ended_collatz = true;
            else{
                if(collatz %2 == 0)
                    collatz = collatz/2;
                else
                    collatz = 3*collatz + 1;
            }
            if(pollatz == 1)
                ended_pollatz = true;
            else{
                if(pollatz %2 == 0)
                    pollatz = pollatz/2;
                else
                    pollatz = 5*pollatz + 1;
            }
        }
       
        /*se sono riuscito a calcolare pollatz e non sono riuscito a calcolare collatz
          (ciò vuol dire che per collatz servono più passaggi oppure che la procedura non finisce mai)
          allora incremento N */
        if(ended_pollatz && !ended_collatz){
           N++;
        }
   }
   
   out << N;
   out.close();
   
   return 0;
}