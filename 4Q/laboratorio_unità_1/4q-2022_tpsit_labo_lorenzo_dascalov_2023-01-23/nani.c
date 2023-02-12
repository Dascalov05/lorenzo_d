#include <pthread.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#define NUM_THREADS 7
char *nome[NUM_THREADS];

void *cod_thread(void *tid){
int tid_int;
tid_int= *(int*)tid;
srand(time(NULL));
sleep(rand() % 2);
printf("Ciao da %d: %s \n", tid_int, nome[tid_int]);
pthread_exit(NULL);
}

int main(int argc, char *argv[]){
pthread_t threads[NUM_THREADS];
int tid, rc;
nome[0]= "cucciolo";
nome[1]= "pisolo";
nome[2]="eolo";
nome[3]="dotto";
nome[4]="mammolo";
nome[5]="gongolo";
nome[6]="brontolo";
for (tid=0; tid<NUM_THREADS; tid++){
printf("Creazione thread %d\n", tid);
rc= pthread_create(&threads[tid], NULL, cod_thread, (void*) &tid);
if(rc){
printf("ERRORE: il codice di errore di ritorno da pthread_create() e': %d\n", rc);
exit(EXIT_FAILURE);
}
}
pthread_exit(NULL);
}
