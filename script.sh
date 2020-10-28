#!/bin/bash
#---Con $# obtengo la cantidad de argumentos que son pasados
Num_argumentos=$#
if [ $Num_argumentos -lt 1 ];
then 
  echo "Faltan argumentos: <script><nombre_proceso a monitorea>"
  exit 
fi
#--- En $1 debe estar el nombre del proceso a monitorear
echo "Este script va a monitorear el proceso llamado" $1
#---Obtenemos cuantos procesos hay 
Numproc=$(ps -a|grep $1|wc -l )
if [ $Numproc -eq 0 ];
then
 echo "Lo siento no hay procesos llamdados" $1
 exit 
fi

echo "Hay" $Numproc "procesos llamados" $1

#----mostrar la lista id's de los procesos 
echo "Los identficadores de los procesos llamados" $1 "son"
#---- Alumno: debe incluir la instruccion para mostrar los procesos

#guardo el id de cada proceso, con ps -a
id_procesos=$(ps -a|grep $1|awk '{print $1}')

#imprimo cada id, que se guardo en la lista 'id_procesos'
for subc in ${id_procesos}; do	
	echo $subc
done


#-----mostrar el id del primer porceso creado
#----Alumno: Aqui debe poner la instrucion para mostrar el id del primer proceso y debe guardarlo en una variable
#guardo el primer proceso en 'first_proces', buscandolo en la cabeca o primer columna
first_proces=$(ps -a |grep $1 |head -n 1|awk '{print $1}')
echo "El ID del primer proceso " $1 "es " $first_proces


#--- Alumno: Aqui debe poner la instruccion para mostrar el arbol de proceso que estamos monitoreando, para ello usara el id que anteriormente ya obtuvo


echo "El arbol del proceso" $1 "es"

#echo $arbol
echo $(pstree -p $first_proces)	





