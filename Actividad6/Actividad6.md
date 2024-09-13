# HT - Actividad 6
* María Julissa García Morán - 201602805

## Problema 1:
* 1. ¿Incluyendo el proceso inicial, cuantos procesos son creados por el siguiente programa?
Razone su respuesta.
**R//** Son creados 8 procesos en total, ya que el primer *fork()* crea dos procesos: el proceso padre y un proceso hijo, en el segundo *fork()* tanto el proceso padre como el hijo ejecutan la segunda llamada de fork creando 2 procesos por lo que ahora tenemos 4 procesos y en el tercer *fork()* los 4 procesos se ejecutan creando así 8 procesos.

## Problema 2:
```
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(){
    pid_t pid = fork(); //Creamos un proceso hijo

    if(pid > 0){
        sleep(60); //El proceso padre duerme al hijo por 60 segundos por lo que se convierte en zombie

    }else if (pid == 0)
    {
        exit(0);
    }else{
        perror("fork");
        return 1;
    }

    return 0;
    
}
```
## Problema 3:
* 1. ¿Cuántos procesos únicos son creados?
* 2. ¿Cuántos hilos únicos son creados?
