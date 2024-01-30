// 3 layers(input, hidden, output) MLP
// auther:yukinagata3184
#include "param.h"

// Number of connection each layer
double x1[N1];
double x2[N2];
double x3[N3];
// connection weight
double w2[N2][N1];
double w3[N3][N2];
// bias
double b2[N2];
double b3[N3];
// learn and infer data
double input[NUM_DATA][N1] = {{0.0, 0.0}, {0.0, 1.0}, {1.0, 0.0}, {1.0, 1.0}};
// XOR teacher signal
double teacher[NUM_DATA][N3] = {{0.0}, {1.0}, {1.0}, {0.0}};

int main(void){
    srand(1);
    init_rand();
    return 0;
}

void init_rand(void){
    FILE *w2p, *w3p, *b2p, *b3p;
    w2p = fopen("hyperparam_init/w2_init.csv", "a");
    b2p = fopen("hyperparam_init/b2_init.csv", "a");
    w3p = fopen("hyperparam_init/w3_init.csv", "a");
    b3p = fopen("hyperparam_init/b3_init.csv", "a");
    for(int j=0; j<N2; j++){
        for(int i=0; i<N1; i++){
            w2[j][i] = RAND;
            fprintf(w2p, "%f,", w2[j][i]);
        }
        b2[j] = RAND;
        fprintf(b2p, "%f,", b2[j]);
        fprintf(w2p, "\n");
        fprintf(b2p, "\n");
    }
    fclose(w2p);
    fclose(b2p);
    for(int k=0; k<N3; k++){
        for(int j=0; j<N2; j++){
            w3[k][j] = RAND;
            fprintf(w3p, "%f,", w2[k][j]);
        }
        b3[k] = RAND;
        fprintf(b3p, "%f,", b2[k]);
        fprintf(w3p, "\n");
        fprintf(b3p, "\n");
    }
    fclose(w3p);
    fclose(b3p);
}