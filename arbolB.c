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

    // for(i = 0; i < nivel; i++)
    // {
    //     printf("%d\n",getppid());
    //     if(fork() != 0 && fork() != 0)
    //     {
    //         printf("idPadre : %d\n", getppid());
    //         break;
    //     }    
    // }   


    int p0,p1;
    for(i = 0; i < nivel; i++)
    {
        printf("nivel %d, pid: %d\n", i, getppid());
        p0 = fork();
        if(p0 != 0)//se hace lineal 
        {
            break;
        }
        
            if(i <= nivel - nivel + 1)
            {
                //p1 = fork();
                // if(i < nivel - 2 && p1 == 0)
                // {
                //         //int p3 = fork();
                //         //  printf("Segundo for devuelve : %d\n", p2);
                //         // if(p1 != 0)//padre 2
                //         // {
                //         //     break;
                //         // }
                    
                // }
            }
            // else
            // {
            //     if(i < nivel - 2 && p0 == 0)
            //     {
            //             int p3 = fork();
            //             //  printf("Segundo for devuelve : %d\n", p2);
            //             if(p3 != 0)//padre 2
            //             {
            //                 break;
            //             }
                    
            //     }
            
            // }
        
        
        // if(i < nivel - 1)//Estamos un nivel antes de podar
        // {
        //     printf("NIVEL %d\n", i);
        //     int p1 = fork();
        // // printf("Primer for devuelve : %d\n", p1);
        //     if(p1 != 0)//Padre
        //     {
        //         int p2 = fork();
        //         //  printf("Segundo for devuelve : %d\n", p2);
        //         if(p2 != 0)//padre 2
        //         {
        //             break;
        //         }
        //     }
        // }
       
       
    }//fin for

    while(1);
return 0;
}



