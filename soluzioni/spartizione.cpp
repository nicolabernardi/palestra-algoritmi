#include <iostream>
#include <fstream>
using namespace std;

int main()
{
   ifstream in("input.txt");
   ofstream out("output.txt");

   int G, P;
   in >> G >> P;
   in.close();
   int N = 0;

   int iterazione = 1;
   int gemme_toto = 0, gemme_altri = 0;
   while (G > 0)
   {
      if (G >= P - 1 + iterazione)
      { //1 gemma a testa + iterazione gemme per totò
         gemme_altri += P - 1;
         G = G - (P - 1);
         gemme_toto += iterazione;
         G = G - iterazione;
      }
      else
      {
         gemme_toto += G; //se non ce ne sono abbastanza, totò se le prende tutte
         G = 0;
      }
      iterazione++;
   }

   out << gemme_toto;
   out.close();

   return 0;
}