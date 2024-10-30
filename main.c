#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {

    const int MIN = 0;
    const int MAX = 2;
    int n;
    int scelta;


    printf("    ***SASSO CARTA FORBICI***   ");

    do {
        srand(time(NULL));
        n = rand() % (MAX - MIN + 1) + MIN;

        printf("inserisci SASSO = 0\nCARTA = 5\nFORBICI = 2");
        scanf("scelta");

        switch (n) {
            case 0:
                n = 5;
                break;
            case 1:
                n = 2;
                break;
            case 2:
                n = 0;
                break;
        }


    } while ();

    return 0;
}
