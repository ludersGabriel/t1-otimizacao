#  Gabriel Lüders (GRR20190172)

# ----------------------------------------------------------------- #
# Declaration of targets and compiling options
CFLAGS = -Wall
CC = g++
LIBS = 
OBJ = main.o
INPUT = input.txt
EXEC = ./despacho

# ----------------------------------------------------------------- #
# Compilation directives
all: ${EXEC}

${EXEC}: $(OBJ)
	$(CC) -o ${EXEC} $(OBJ) $(LIBS)

run: all
	${EXEC} < ${INPUT}

main.o: main.cpp
	$(CC) -c main.cpp $(CFLAGS)

# ----------------------------------------------------------------- #
# Cleaning directives
clean:
	$(RM) *.o

purge: clean
	$(RM) ${EXEC}