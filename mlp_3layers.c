// 3 layers(input, hidden, output) MLP
// auther:yukinagata3184
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Number of layers and neuron
#define LAYER 3
#define N1 2
#define N2 2
#define N3 1

#define NUM_DATA 4
#define LEARN_RATE 0.1
#define MAX_LEARN 100

// Initializing in the range of 0.0~1.0 for now. Actually, the -1.0~1.0 range might be better.
#define RAND ((double)rand()/RAND_MAX)

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

double input[NUM_DATA][N1] = {{0.0, 0.0}, {0.0, 1.0}, {1.0, 0.0}, {1.0, 1.0}};
// XOR teacher signal
double teacher[NUM_DATA][N3] = {{0.0}, {1.0}, {1.0}, {0.0}};

void init(void);

int main(void){
    srand(1);
    init();
}

// Initializing in the range of 0.0~1.0 for now. Actually, the -1.0~1.0 range might be better.
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