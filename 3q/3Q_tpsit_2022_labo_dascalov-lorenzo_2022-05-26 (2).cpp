#include <iostream>
#include <math.h>
#include <cstdlib>
#include<ctime>
using namespace std;

int randvett(int n, int vet[]){
vet[n];
int app;

srand(time(NULL));
	for (int i = 0; i < n; i++) {
		app = rand() % 10;
		vet[i] = app;
	}
	
}


int bubblesort(int vet[], int n){
	int app;
	for (int j = 0; j < n; j++ )
{

for (int i=n-1; i>=j; i--)
  {
  if (vet[i]>vet[i+1]) 
    {
    app = vet[i];
    vet[i] = vet[i+1];
    vet[i+1] = app;
    }
  }

}
}

int main(){

int n=20;
int vet[n];
randvett(n, vet);
cout<<"il vettore randomico e' : ";
for (int i=0; i<n; i++){
	cout<< vet[i];
	
	
}
cout<<endl;


bubblesort(vet, n);
cout<<"il tuo vettore ordinato e': ";
for (int i=0; i<n; i++){
	cout<<vet[i];
}
cout << endl;

}
