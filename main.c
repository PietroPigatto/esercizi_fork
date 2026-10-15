
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void) {

    pid_t ritorno = fork();
    if (ritorno == 0) {
        // processo figlio

        for (int i = 1; i <= 5; i++) {
            printf("numero: %d \n",i);
            fflush(stdout);
            sleep(1);
        }
        exit(0);

    }

    wait(NULL);
    for (int i = 6; i <=10; i++) {
        printf("numero: %d\n",i);
            fflush(stdout);
        sleep(1);
    }

    return 0;
}