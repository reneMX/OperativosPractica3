#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <math.h>


int  main(int argc, char * argv []){

	int profundo; 
	int i;
	int soyPadre;
	int linea;
	int procLinea=0;
	int aux;

	if(argc<2){
		printf("Faltan argumentos: <ejecutable><anchura del árbol>");
		return(0);
	}
	
	profundo = atoi(argv[1]);

	
		for(i=0; i<2 ; i++)
		{
			soyPadre = fork();
			if(soyPadre == -1)
			{
				exit(-1);
			
			}
			if(soyPadre == 0)
			{
				printf("HIJOS: PID %d PPID %d  i= %d soyPadre=%d\n", (int)getpid(), (int)getppid(), i,soyPadre);
				profundo--;
				i = 0;			
				break;
			}
		}



	
	
	/*
	linea=ceil((float)anchura/2);
	printf("Linea: %d\n\n",linea);
	if(soyPadre==0 && i%2==0)
	{
	 	if(i==0)
		{
	 	  procLinea=linea-i;
	 	}else{
           		aux= i/2;
	   		procLinea=linea-aux;
		     }

		printf( "HIJOS ANCHURA QUE TENDRAN LINEALES PID %d PPID %d  i= %d soyPadre=%d, linea=%d, aux= %d,  creo %d 			procesos en linea\n", (int)getpid(), (int)getppid(), i,soyPadre, linea,aux,  procLinea);
        	for(i=0; i<procLinea; i++)
		{
			if(fork()!=0)
			{
				break;
			}
			printf("HIJOS LINEALES: PID %d PPID %d  i= %d soyPadre=%d\n", (int)getpid(), (int)getppid(), 				i,soyPadre);	
		}

	}*/


	while(1);



return 0;
}
