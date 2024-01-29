CC = gcc
EXE = mlp_3layers.exe
OBJ = mlp_3layers.o
SRC = mlp_3layers.c

# gcc
all_gcc:
	$(CC) -c $(SRC)
	$(CC) -o $(EXE) $(OBJ) 

clean:
	rm -f $(OBJ) $(EXE)