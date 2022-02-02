#include <fstream>
#include <vector>

/*
Se siete interessati a vedere un'ottimizzazione per arrivare a 100/100,
la soluzione prevede l'uso di un ordinamento topologico su un DAG
(grafo diretto aciclico, che di fatto e' il grafo che ci danno in input:
un grafo orientato(diretto) senza cicli, perche' l'acqua non spinge in su' :) )
*/

using namespace std;

vector<vector<int>> grafo;
vector<float> piscine;
int N, P;

void visita_scivoli(int corrente, float punteggio)
{
    int vicini = grafo[corrente].size();
    if (vicini == 0)
    {
        //sono arrivato in piscina, yeah!
        int indice_piscina = corrente - (N - P);
        piscine[indice_piscina] += punteggio;
    }
    else
    {
        punteggio = punteggio / vicini;
        for (int vicino : grafo[corrente])
        {
            visita_scivoli(vicino, punteggio);
        }
    }
}

int main()
{
    ifstream in("input.txt");

    int M;
    in >> N >> M >> P;

    grafo.resize(N);

    for (int i = 0; i < M; i++)
    {
        int start, end;
        in >> start >> end;
        grafo[start].push_back(end);
    }
    in.close();

    piscine.resize(P);
    //gli indici vanno da 0 a P-1 e corrispondono a N-P ... N-1
    for (int i = 0; i < P; i++)
    {
        piscine[i] = 0.0;
    }

    visita_scivoli(0, 1.0);

    ofstream out("output.txt");

    float max = 0;
    int pmax = 0;
    for (int i = 0; i < P; i++)
    {
        if (piscine[i] > max)
        {
            max = piscine[i];
            pmax = i;
        }
    }
    out << pmax + (N - P);
    out.close();
}