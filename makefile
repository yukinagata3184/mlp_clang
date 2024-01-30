CC = gcc
SRC = mlp_3layers.c
OBJ = mlp_3layers.o
EXE = mlp_3layers.exe

# gcc
all_gcc:
	rm -f $(OBJ) $(EXE)
	rm -rf hyperparam_init
	mkdir hyperparam_init
	$(CC) -c $(SRC)
	$(CC) -o $(EXE) $(OBJ) 
	./$(EXE)

clean:
	rm -f $(OBJ) $(EXE)
	rm -rf hyperparam_init