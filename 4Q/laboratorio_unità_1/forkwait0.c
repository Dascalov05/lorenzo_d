#include <sys/wait.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

int main (){
int status; 
int pid=fork();
if(pid==0){
printf("sono il figlio, il mio pid e':%d.", getpid());
printf("il mio papa' ho pid:%d\n", getpid());
exit(69);
}
else{
printf("sono il padre, il mio pid e': %d. ", getpid());
printf("l'exit di mio figlio(%d) e': &d\n", wait(&status), status);
return 0;
}
}
