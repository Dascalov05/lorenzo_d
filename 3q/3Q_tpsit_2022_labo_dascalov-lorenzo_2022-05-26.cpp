#include <iostream>
#include <math.h>
#include <cstdlib>
#include<ctime>
using namespace std;



int main(){

const int n=20;
int app;

int vet[n];

srand(time(NULL));
	for (int i = 0; i < n; i++) {
		app = rand() % 10;
		vet[i] = app;
	}
	cout<<"il tuo vettore e': ";
for (int i=0; i<n; i++){
	cout<< vet[i];
}
cout << endl;

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

cout<<"il tuo vettore ordinato e': ";
for (int i=0; i<n; i++){
	cout<<vet[i];
}
cout << endl;

}


