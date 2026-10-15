#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void) {
    pid_t pid;
    int i;
    for (i = 0; i < 3; i++) {
        pid = fork();

        if (pid < 0) {
            perror("fork");
            exit(1);
        }

        if (pid == 0) {
            // Codice del figlio
            printf("Figlio %d: PID = %d\n", i + 1, getpid());
            fflush(stdout);
            sleep(2);
            exit(0);

        }
    }

    // Codice del padre
    for (i = 0; i < 3; i++) {
        fflush(stdout);
        wait(NULL);
    }

    printf("Padre: tutti i figli hanno terminato.\n");

    return 0;
}
