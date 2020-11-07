#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <math.h>

int  main(int argc, char * argv []){
	
 if (argc != 2)
    {
        printf("El número de argumentos es incorrecto\n");
        return -1;
    }

    int nivel = atoi(argv[1]) - 1;
 	int i;

    for(i = 0; i < nivel; i++)
    {
        printf("%d\n",getppid());
        if(fork() != 0 && fork() != 0)
        {
            printf("idPadre : %d", getppid());
            break;
        }
    }   
	//while(1);

return 0;
}



