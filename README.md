# Palestra di Algoritmi 2021-22 | Base II

Qui potete trovare il materiale utilizzato per "Palestra di Algoritmi", corso base II, tenuto tra novembre 2021 e febbraio 2022 con gli studenti del Liceo Scientifico "Galileo Galilei" di Trento.
Dopo ogni incontro, vengono caricate le slide.

## Soluzioni
In base agli esercizi visti, vengono caricate anche le soluzioni, nella relativa cartella.
Vi invito caldamente a provare prima da soli a risolvere il problema, e dare un occhio alle soluzioni quando, dopo vari tentativi, non riuscite a venirne fuori.
In tal caso, potete anche mandarmi una mail (nicola.bernardi-2@studenti.unitn.it), e sicuramente nell'incontro successivo riprenderemo l'esercizio.

## 1° incontro - 25/11/2021 15-17
- [Slides](PalestraAlgo1.pdf)
- Esercizi base su vettori e matrici
- Iscrizione alla piattaforma per gli allenamenti (se non l'avete ancora fatto, fatelo subito: https://training.olinfo.it/#/signup)
- Input e Output su file in C++ (vedi questo [esempio](i-o-file.cpp))
- Esercizio [Easy1](https://training.olinfo.it/#/task/easy1/statement)
- Esercizio [Easy2](https://training.olinfo.it/#/task/easy2/statement)
- Esercizio [Easy3](https://training.olinfo.it/#/task/easy3/statement)

## 2° incontro - 02/12/2021 17-19
- [Slides](PalestraAlgo2.pdf)
- Esercizio [Collatz](https://training.olinfo.it/#/task/collatz/statement)
- Esercizio [Fluttuazioni finanziarie](https://training.olinfo.it/#/task/luiss_azioni/statement)
- Esercizio [Pollatz](https://training.olinfo.it/#/task/gator_pcollatz/statement)
- Esercizio [Totò](https://training.olinfo.it/#/task/spartizione/statement)
- Esercizio [Tesla](https://training.olinfo.it/#/task/gator_tesla/statement)


## 3° incontro - 09/12/2021 15-17
- [Slides](PalestraAlgo3.pdf) (da caricare dopo l'incontro)
- Funzioni e ricorsione
- Ordinare un vettore: 

   ```int cmpfunc (const void * a, const void * b) {
      return ( *(int*)a - *(int*)b );
   }

   int vettore[N];

   //ordina il vettore
   qsort(sequenza, n, sizeof(int), cmpfunc);```


- Esercizio [Easy3](https://training.olinfo.it/#/task/easy3/statement)
- Esercizio [Piastrelle](https://training.olinfo.it/#/task/piastrelle/statement)
