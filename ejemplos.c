#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, int *argv[]){


    int pid  = fork();
    int pid2 = fork();
    int pid3 = fork();
    if(pid != 0 && pid2 != 0 && pid3 != 0){//Es padre
        printf("PID PADRE: %d\n", getpid());
    }
    else//Es hijo
    {
        printf("ID DE MI PADRE: %d   ",getppid());
        printf("PID HIJO: %d\n", getpid());
    }
    // fork();
    // fork();
    


    // int variable = 9;
    // for(int i = 0;i < 2; i++ )
    // {
    //     int pid = fork();
    //     //  Instrucciones que tanto el padre
    //     printf("ID CREADOR: %d\n", getppid());
    //     if( pid != 0)
    //     {
    //         //Instrucciones que solo el proceso  Padre hara
    //         printf("ID PADRE: %d\n", getpid());
    //         variable = 100;
    //         printf("Valor de Variable dentro de Padre: %d\n", variable);
    //     } 
    //     else
    //     {
    //         //Instrucciones que solo el proceso Hijo hara
    //         printf("ID HIJO: %d\n", getpid());
    //         variable = 99;
    //         printf("Valor de Variable dentro de Hijo: %d\n", variable);
         
    //     }
        
    // }
    

    while(1);
    return 0;
}