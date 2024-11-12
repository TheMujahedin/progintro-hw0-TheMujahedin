#include <stdio.h>
#include <stdlib.h>

int main() {
    double costL, costR;

    while (1) {  // epanalhpsh mexri na dwthei kostos aristera = eof 
        printf("Eisagete to kostos aristera: "); // prwta kostos aristera gia elegxo
        if (scanf("%lf", &costL) == EOF) {
            exit(0);  //an kostos aristera einai eof tote termatizei me timh eksodou 0
        }
        printf("Eisagete to kostos deksia: "); // kostos deksia 
        if (scanf("%lf", &costR) != 1) {
            exit(1);  // an to kostos deksia den einai egkyro tote termatizei me timh eisodou 1
        }
 
        
        if (costL == 0 && costR == 0) {
            printf("Sfalma: Den edwsate egkyres times.\n");
            exit(1);  // an kai ta 2 kosth einai 0 tote eisodos mh egkurh 
        }

        // elegxos kostwn
        if (costL > costR) {
            printf("Go Right\n"); //an to aristero einai megalytero tote deixnei deksia 
        } else {
            printf("Go Left\n"); //an to aristero einai mikrotero h iso tote deixnei aristera 
        }
    }

    return 0;
}