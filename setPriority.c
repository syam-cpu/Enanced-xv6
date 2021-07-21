#include "types.h"
#include "user.h"

int main(int argc, char *argv[]){

    if(argc!=3){
        printf(1,"provide sufficient arguments\n");
        exit();
    }
    int k = set_priority(atoi(argv[1]),atoi(argv[2]));
    if(k == 0){
        printf(1,"no process with that pid");
        exit();
    }
    exit();

    



}