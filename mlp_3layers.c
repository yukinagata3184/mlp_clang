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
    init();
}

void init(void){
    for(int j=0; j<N2; j++){
        for(int i=0; i<N1; i++){
            w2[j][i] = RAND;
        }
        b2[j] = RAND;
    }
    for(int k=0; k<N3; k++){
        for(int j=0; j<N2; j++){
            w3[k][j] = RAND;
        }
        b3[k] = RAND;
    }
}