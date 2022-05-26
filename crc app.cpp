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
#include<ctime>
using namespace std;


void RanSeq(int Mx[], int n) {    //Funzione creata da Dascalov, con aiuto di Cernia, serve per creare una stringa di bit randomica M(x). Punto 1
	int app = 0;
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		app = rand() % 2;
		Mx[i] = app;
	}
}

void PolGen(int n, int Dx[], int& Gx, int s) { //Funzione creata da Cernia, con aiuto di Dascalov, serve a creare il polinomio D(x). Punto 2 e 3

	switch (s) {
	case 1:
		Gx = 3;
		cout << "Polinomio generatore: G(x)= x^3 + x + 1" << endl;

		for (int i = n; i < n + 3; i++) {
			Dx[i] = 0;
		}
		break;
	}

}

string xor1(string a, string b)
{

	
	string result = "";

	int n = b.length();


	for (int i = 1; i < n; i++)
	{
		if (a[i] == b[i])
			result += "0";
		else
			result += "1";
	}
	return result;
}


string mod2div(string dividendo, string divisore)
{

	
	int pick = divisore.length();

	
	string tmp = dividendo.substr(0, pick);

	int n = dividendo.length();

	while (pick < n)
	{
		if (tmp[0] == '1')

		
			tmp = xor1(divisore, tmp) + dividendo[pick];
		else

		
			tmp = xor1(std::string(pick, '0'), tmp) +
			dividendo[pick];

		
		pick += 1;
	}

	if (tmp[0] == '1')
		tmp = xor1(divisore, tmp);
	else
		tmp = xor1(std::string(pick, '0'), tmp);

	return tmp;
}




int main(int argc, char** argv) {
	int a[20];
	int n, n2 ;
	int s = 1;
	int Gx;
	string risposta;
	//int div[] = { 1, 0, 1, 1 };
	string div = "1011";
	string corrotta;
	string resto2;
	
	cout<<"inserisci lunghezza della tua sequenza di bit da 8 a 32: ";
	cin>>n;
	n2=n;
	while(n<8 || n>32){
		cout<<"Numero non compreso nel campo 8-32! Reinserisci: ";
		cin>>n;
		n2=n;
	}

	int Mx[n];

	RanSeq(Mx, n);
	cout << "La sequenza di numeri e': ";
	for (int i = 0; i < n; i++) {
		cout << Mx[i];
	}
	cout << endl;

	//cout<<"scegliere polinomio generatore da usare: "<<endl;
	//cout<<"-1-- x^3 + x + 1 "<<endl<<"-2-- x^16 + x^12 + x^5 + 1"<<endl<<"";
	//cin>>s;



	int Dx[n + Gx];



	for (int i = 0; i < n; i++) {    //Inserimento valori di Mx dentro Dx, per poi aggiungere le cifre per renderlo effettivamente Dx
		Dx[i] = Mx[i];
	}

	int corr[n2];    //Creazione della stringa corrotta
	for (int i=0; i<n2; i++){
		corr[i]=Dx[i];
	}
	

	PolGen(n, Dx, Gx, s);
	cout << "Il polinomio D(x) e': ";
	for (int i = 0; i < n + Gx; i++) {
		cout << Dx[i];
	}
	
	cout << endl;

	cout << "Il polinomio divisore e': "<<div;


	
	cout << endl;


	string StringDX;
	for (int i = 0; i < n+Gx; i++) {
		(Dx[i] == 0) ? StringDX += '0' : StringDX += '1';
	}
	
	
	
	std::string resto = mod2div(StringDX, div);

	std::cout <<"Il resto della divisione in modulo 2 e': "<< resto << "\n";
	
	cout<<"Vuoi corrompere un bit della tua stringa?\nRispondere con 'Si' o 'No'. "<<endl;
	cin>>risposta;
	
	if (risposta=="Si"){
		if (corr[2]==0){
			corr[2]=1;
		}
		else{
			corr[2]=1;
		}
		for (int i = 0; i < n+Gx; i++) {
		(corr[i] == 0) ? corrotta += '0' : corrotta += '1';
	}
		resto2 = mod2div(corrotta, div);
		cout<<"Il resto della divisione in modulo 2 e': "<<resto2<<endl;
		cout<<"ERRORE!\nResti incongruenti";
	}
	
	else if (risposta=="No"){
		for (int i = 0; i < n+Gx; i++) {
		(Dx[i]== 0) ? corrotta += '0' : corrotta += '1';
	}
		resto2 = mod2div(corrotta, div);
		cout<<"Il resto della divisione in modulo 2 e': "<<resto2<<endl;
		cout<<"Resti delle diviosioni congruenti, nessun errore rilevato! "<<endl;
	}
	
	

	
	return 0;
}

