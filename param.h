// 3 layers(input, hidden, output) MLP's param etc.
// auther:yukinagata3184
#ifndef param
#define param

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

// Number of layers and neuron
#define LAYER 3
#define N1 2
#define N2 2
#define N3 1
// Number of learn and infer data
#define NUM_DATA 4
#define LEARN_RATE 0.1
#define NUM_LEARN 100

// Initializing in the range of 0.0~1.0 for now. Actually, the -1.0~1.0 range might be better.
#define RAND ((double)rand()/RAND_MAX)

// function prototypes
void init_rand(void);

#endif