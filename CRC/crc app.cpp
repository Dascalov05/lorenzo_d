
/*Punto 1 del libro
- dare la scelta di quanti bits trasmettere (da 8 a 32)
- generare una sequenza random di bits da trasmettere
- stampare i dati originali e il polinomio M(x)

Punto 2
- dare la scelta di quale polinomio divisore G(X) utilizzare (stampando i polinomi riportati dal libro)
Punto 3
- generare e stampare il polinomio D(x)
Punto 4
- calcolare e stampare il resto della divisione in modulo 2 fra G(X) e D(x)

- definire e stampare il codeword da trasmettere

- generare casualmente due posizioni di bits nei dati da trasmettere, per ognuna delle due posizioni decidere casualmente, con probabilita' fra 0.1 e 0.3 (valore esatto scelto da voi) se introdurre un errore invertendo il bit in quella posizione
- stampare se sono stati introdotti errori e in quale posizione

- scrivere funzione prende in input la codeword/k e stampa se rileva errori o meno, immediatamente al di sotto della stampa degli errori eventualmente introdotti del punto precedente*/


#include <iostream>
#include <math.h>
#include <cstdlib>
#include <ctime>
 using namespace std;
  
 
 
 
 
 void RanSeq(int Mx[], int n){ //funzione creata da Dascalov Lorenzo con aiuto di Cernia Luca, serve per creare uan stringa di bit randomica. Punto 1
 int app=0;
 	srand(time(NULL));
 	for(int i=0; i<n;i++){
 		app=rand()%2;
 		Mx[i]=app;
	 }
 }
 
 void PolGen( int n,int Dx[],int &Gx, int s ){ //funzione creata da cernia luca con aiuto di Dascalov serve per creare il polinomio generatore D(x). Punto 2 e 3
 	switch (s){
 		
 		case 1:
 		    Gx=3;
 			cout<<"polinommio generatore: G(x)= x^3+x+1"<<endl;
 			for(int i=8; i<n+3; i++){
 				Dx[i]=0;
			 }
 			break;
 			
 			
	 }

 }
 
 void CRC(int n, int Gx, int Dx[], int Rx[]){
 	for(int i=0; i<n+Gx; i++){
    
    for( int j=0; j<4; j++){
     Rx[i]
	
		
	}
	
	
	 }
	 
	 
 }


int main() {
	int n, s=1;
	int Gx;
	cout<<"inserisci il numero di bit che deve avere la sequanza, compresa tra 8 e 32: ";
	cin>>n;
	
while(n<8||n>32){
	cout<<"numero non compreso nel campo 8-32. Reinserisci: ";
	cin>>n;
}	
	

	
	int Mx[n];
	
	RanSeq(Mx, n);
		cout<<"la seqeunza di numeri e':";
    for(int i=0; i<n; i++){
    	cout<<Mx[i];
	}
	cout<<endl;
	
	//cout<<"scegliere polinomio generatore da usare: "<<endl;
	//cout<<"-1-- x^3+x+1 "<<endl<<"-2-- x^16 + x^12 + x5 + 1"<<endl;
	//cin>>s;
	
	
	
int Dx[n+Gx];
	
	for(int i=0; i<n; i++){
 				Dx[i]=Mx[i];
			 }
			 
			 
PolGen(n, Dx, Gx, s);
cout<<"il polinomio D(x) e': ";
for(int i=0; i<n+Gx; i++){

cout<<Dx[i];
}









	return 0;
	
	
	
	
	
	
}










