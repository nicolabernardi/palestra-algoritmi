# Palestra di Algoritmi 2021-22 | Base II

Materiale utilizzato per "Palestra di Algoritmi", corso base II, tenuto tra novembre 2021 e febbraio 2022 con gli studenti del Liceo Scientifico "Galileo Galilei" di Trento, che comprende:
- slide di ogni incontro
- soluzioni di ogni esercizio (nella cartella [soluzioni](soluzioni))
- file di esempio per [I/O su file in C++](i-o-file.cpp)

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
- [Slides](PalestraAlgo3.pdf)
- Funzioni e ricorsione
- Ordinare un vettore: 

   ```c
   int cmpfunc (const void * a, const void * b) {
      return ( *(int*)a - *(int*)b );
   }

   int vettore[N];

   //ordina il vettore
   qsort(sequenza, n, sizeof(int), cmpfunc);
   ```


- Esercizio [Easy3](https://training.olinfo.it/#/task/easy3/statement)
- Esercizio [Piastrelle](https://training.olinfo.it/#/task/piastrelle/statement)

## 4° incontro - 16/12/2021 15-17
- [Slides](PalestraAlgo4.pdf)
- Esercizio [Piastrelle](https://training.olinfo.it/#/task/piastrelle/statement)
- Esercizio [Interrogazioni](https://training.olinfo.it/#/task/interrogazioni/statement)
- Esercizio [Grand Prix](https://training.olinfo.it/#/task/grandprix/statement)
- Esercizio [Domino](https://training.olinfo.it/#/task/domino/statement)


## 5° incontro - 13/01/2022 15-17
- [Slides](PalestraAlgo5.pdf)
- Esercizio [Domino](https://training.olinfo.it/#/task/domino/statement)
- Esercizio [Cubetti](https://training.olinfo.it/#/task/cubetti/statement)

## 6° incontro - 20/01/2022 15:30-17:30
- [Slides](PalestraAlgo6.pdf)
- Esercizio [Sommelier](https://training.olinfo.it/#/task/sommelier/statement)
- Esercizio [Discesa](https://training.olinfo.it/#/task/discesa/statement)
- Memoization

## 7° incontro - 27/01/2022 15:30-17:30
- [Slides](PalestraAlgo7.pdf)
- Grafi
- Esercizio [Piano di studi](https://training.olinfo.it/#/task/luiss_piano/statement)

## 8° incontro - 03/02/2022 15:30-17:30
- [Slides](PalestraAlgo8.pdf)
- Esercizio [Piano di studi](https://training.olinfo.it/#/task/luiss_piano/statement)
- Esercizio [Waterslide](https://training.olinfo.it/#/task/ois_waterslide/statement)

## Gara Olimpiadi Informatica - 08/02/2022 11-12:30
- Iscriviti qui: https://scolastica.olinfo.it/
