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
    int hijos = 0;
    int num_hijos = 2; 
    
	int i;
	int dev_fork;
    
    for(i = 0; i < nivel; i++){
        printf("%d\n",getppid());
        if(fork() != 0 && fork() != 0){
            printf("idPadre : %d", getppid());
            break;
        }

    }
        
                

	
    /*while (nivel > 0 && hijos < 2)
    {
        proceso = fork();    // El hijo recibe 0, el padre el PID del hijo

        // Desde aquí lo ejecutan tanto padre como hijo, si fue creado
        switch (proceso)
        {
            case -1://Si hay problemas corto el proceso
                printf("Error en la creación del proceso \n");
                exit(-1);
            case 0://si es hijo, fork() == 0
			printf("Soy el proceso hijo: %d y mi padre es %d \n", getpid(), getppid());
		        nivel--;
		        hijos = 0;
		        break;
		
            default://Si es padre, es decir fork() > 0
                printf("Soy el proceso padre: %d \n", getpid());
                hijos++;
        }
    }*/
	while(1);

return 0;
}



