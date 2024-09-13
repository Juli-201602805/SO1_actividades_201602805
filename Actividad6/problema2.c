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

