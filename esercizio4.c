
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void) {
    pid_t pid = fork();

    if (pid == 0) {
        int numero;
        printf("Inserisci un numero \n");
        scanf("%d", &numero);

        for (int i = 2; i < numero; i++) {
            if (numero % i == 0) {
                printf("Il numero non è primo \n");
            }
        } if (numero >= 2) {
            printf("Il numero è primo \n");
        }
    }

    return 0;
}