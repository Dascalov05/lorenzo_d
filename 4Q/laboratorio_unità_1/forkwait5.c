#include <sys/wait.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#define NRFIGLI 4
int main (){
int status, pid, x; 
for(x=0;x <NRFIGLI; x++){
pid=fork();

if(pid==0){
printf("sono il figlio, il mio pid e':%d.", getpid());
printf("il mio papa' ho pid:%d\n", getpid());
exit(0);
}
else{
printf("sono il padre, il mio pid e': %d. ", getpid());
printf("il pid del figlio corrente e': %d. \n", getpid());
printf("l'exit di mio figlio(%d) e': &d\n\n", wait(&status), status);

}
}
return 0;
}
