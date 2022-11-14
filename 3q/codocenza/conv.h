#include <iostream>
#include <string>
#include <math.h>
using namespace std;

/*
  Conversione decimale-binario
  Michele Improta
  Luca Cernia
  Matteo De Luce
  Giovanni Ammirati
  Lorenzo Dascalov
*/

int conversione(){
	
	int dec [10], num, ct; //Inizializzazione del vettore per numero decimale (dec[10]), del numero da convertire (num) e del contatore (ct)
	cout<<"Inserisci il numero da convertire: ";
	cin>>num; //inserimento numero decimale da parte dell'utente                 
	if (num == 0){
		cout<<"La conversione BINARIA del numero inserito e': 0";
		return 0;
	}
	for (ct = 0; num > 0; ct++){ //Intestazione del ciclo FOR per il vettore
		dec[ct] = num%2; //Divisione tramite "%" inserendo il resto della divisione nel vettore
		num = num/2; //Divisione del numero per 2
		}
	cout<<"La conversione BINARIA del numero inserito e': ";
	for (ct = ct-1; ct >= 0; ct--){ //Ciclo FOR con il compito di arrivare al cout finale con il coretto numero binario
		cout<<dec[ct];
	}

}
