
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void) {
    // codice nonno
    pid_t ritorno = fork();
   if (ritorno == 0) {
       //  codice padre
       pid_t ritorno1 = fork();

       if (ritorno1 == 0) {
           // codice nipote
           printf("Nipote: termino \n");
           exit(0);
       }
       wait(NULL);
       sleep(1);
       printf("Padre: nipote terminato, termino \n");
       exit(0);

   }
    wait (NULL);
       sleep(1);

    printf("Nonno: padre terminato, termino  \n");

    return 0;
}