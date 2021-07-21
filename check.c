#include "types.h"
#include "user.h"

int main(){
   
    int *wtime;
    int *rtime;
    int pid;
    wtime = (int *) malloc(sizeof(int));
    rtime = (int *) malloc(sizeof(int));
    pid = 0;
    pid += 1;
    int k = 0;
    sleep(5);
    for(long long int i = 0 ;i < 2000000000;i++){
        k+=k;

    }
    pid = waitx(wtime,rtime);
    printf(1,"%d: ",pid);
    printf(1,"waiting time is %d: ",*wtime);
    printf(1,"total running time is %d: \n",*rtime);
    printf(1,"sfsfsf");

    exit();

}