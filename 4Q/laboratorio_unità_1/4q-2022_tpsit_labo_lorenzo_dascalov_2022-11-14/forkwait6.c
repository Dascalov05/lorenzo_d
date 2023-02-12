#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
int main(){
int pid, status;
pid=fork();
if (pid==0){
printf("eseguito dal figlio \n");
exit(0);
}
else{
pid=wait(&status);
if(WIFEXITED(status))
printf("Term. volontaria di %d con stato %d\n", pid, WEXITSTATUS(status));
else 
if(WIFSIGNALED(status))
printf("terminzione involontaria per segnale %d\n", WTERMSIG(status));
}}
