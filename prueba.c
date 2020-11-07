#include<unistd.h>
#include<stdio.h>

int var = 22;

int main(void)
{
    int nivel = 4;		
    int hijos = 0;
    int proceso;
    int nivel_poda = 0;
	

	





	/*
		proceso = fork();	
		printf("PID = %d\n", proceso);		
		if(proceso > 0) //Se ejecuta un padre
		{
			printf("PID = %d\n",getpid());
		}
		else if(proceso > 0)
		{
			printf("PID = %d\n",getpid());
			break;
		}*/	 


 
    /*while (nivel > 0 && hijos < 2)
    {
        proceso = fork();    // El hijo recibe 0, el padre el PID del hijo

	
        // Desde aquí lo ejecutan tanto padre como hijo, si fue creado
        switch (proceso)
        {
            case -1:
                printf("Error en la creación del proceso \n");
                exit(-1);
            case 0:
		
		else{
			printf("Soy el proceso hijo: %d y mi padre es %d \n", getpid(), getppid());
		        nivel--;
		        hijos = 0;
		        break;
		    }
            default:
                printf("Soy el proceso padre: %d \n", getpid());
                hijos++;
        }
    }*/
	
	while(1){
	sleep(2);
	}


return 0;
}//Fina MAIN
