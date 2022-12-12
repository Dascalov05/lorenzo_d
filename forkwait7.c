#include <sys/wait.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
 #define NRFIGLI 4
#define VOLTE 10
int main(){
int status, pid, x, y, z;
char c;
for(x=0; x<NRFIGLI; x++){
pid=fork();
if(pid==0){
c='a' + x;
for(y=0; y<VOLTE; y++){
printf("%c", c); fflush(0);
sleep(1);
}
printf("\n");
exit(0);}
else
pid= wait(&status);
if(WIFEXITED(status))
printf("TERM. volontaria di %d con stato %d\n", pid, WEXITSTATUS(status));
else
if(WIFSIGNALED(status))
printf("terminazione involontaria per segnal %d\n", WTERMSIG(status));
}}
