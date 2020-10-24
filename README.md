# blocco-esercizi-1
sup:

1)  SUP che si fa dare due numeri interi x e y e calcola x^y. Fare due versioni, una che per il loop interno usa {for}, l'altra che usa {while}. Non usare {pow()}, questo perché se andate a leggere la documentazione, vedrete che prende in ingresso due {double}, significa quindi che al suo interno non compie un elevamento a potenza tra interi, ma tra numeri reali. Pur permettendoci di ottenere lo stesso risultato, questo implica che l'esecuzione sarà ben più lenta e inoltre potremmo imbatterci in errori numerici.

2) sup che dato un intero e un numero indice, individua la cifra alla posizione indice del primo numer inserito. esempio 39842, indice 2 (decine) = 4 
 (per scomporre il numero in cifre usare l'operatore divisione e resto con le potenze di 10.)
 
 3) Una parola, frase o numero palindromo ha la proprietà che può essere letto in entrambi i sensi. Per esempio i seguenti numeri da 5 cifre sono palindromi: 12321, 55555, 85658, 11611. SUP che legge un numero a 5 cifre e determina se questo è palindromo o meno.
 (extra: il numero in ingresso non ha lunghezza 5 ma variabile)
 
 4) SUP che stampa senza sosta i multipli di due. Quindi 2, 4, 8, 16, eccetera. Il loop è infinito. Cosa succede e perché?
 
 5) Il fattoriale di un numero non-negativo n si scrive n!. Ed è definito come segue:
 n! = n *(n - 1) * (n - 2) * (n - 3) .....*1
 Se n==0 allora 0! = 1.
 SUP che legge un numero non-negativo e calcolarne il fattoriale. Fino a che numero si ottengono risultati corretti? Controllare che l'utente inserisca un numero adeguato e in caso contrario scrivere un messaggio e terminare l'esecuzione. 

 ({È dimostrato} che algoritmi scritti usando la ricorsione possono essere riscritti usando cicli iterativi classici (while / for ) e viceversa. Provare a scrivere entrambe le soluzioni.)
 
 6) SUP che prende in ingresso un intero e calcola il valore della costante di eulero "e" con la seguente formula:
 e = 1 + 1\1! +1 \2! + 1\3! + .....
 Usare il valore in ingresso per quanto a fondo esplorare la progressione. Confrontare il valore con la funzione {exp()} presente in {math.h} con argomento 1. . Quante iterazioni sono necessarie per far scendere l'errore sotto ai millesimi?
 (Se avete dubbi sulle funzioni di libreria, Google é tuo amico.)

