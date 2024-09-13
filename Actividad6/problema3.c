#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <sys/types.h>

void* thread_func(void* arg) {
    printf("Thread created.\n");
    return NULL;
}

int main() {
    pid_t pid;
    pthread_t tid;

    // Crear un proceso hijo
    pid = fork();

    if (pid == 0) {
        // Código del proceso hijo
        printf("Proceso hijo creado\n");
    } else if (pid > 0) {
        // Código del proceso padre

        // Crear un hilo en el proceso padre
        pthread_create(&tid, NULL, thread_func, NULL);
        pthread_join(tid, NULL);  // Espera a que el hilo termine

        printf("Proceso padre e hilo completado.\n");
    } else {
        // Si fork() falla
        perror("fork");
        return 1;
    }

    return 0;
}
