#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(){
    int status;
    int pid = fork();

    // Write C code here
    if (pid == 0){ // child
        int pid1 = fork();
        if (pid1 == 0){
            int pid2 = getpid();
            printf("I am the grandchild %d\n", pid2);
        }
        else{
            int pid2 = getpid();
            printf("I am the child %d\n", pid2);
        }
    }
    else{
        int pid1 = getpid();
        printf("I am the parent %d\n", pid1);
    }
    return 0;
}
