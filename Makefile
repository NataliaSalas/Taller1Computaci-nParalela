#/*******************************************
#* Fecha: 09 - Agosto - 2022
#* Autor: Natalia Salas
#* Materia: Parallel and Distributed Computing
#* Primer Taller C
#*******************************************/

GCC = gcc
FLAGS = -ansi -pedantic -Wall -std=c99 
MATHFLAG = -lm 

PROGRS = app_taller

all: $(PROGRS) 

taller1_main: 
	$(GCC) $(FLAGS) -c $@.c
	$(GCC) $(FLAGS) -c taller1_lib.c
	$(GCC) $(FLAGS) -o $(PROGRS) $@.o taller1_lib.o $(MATHFLAG)
	
clean: 
	$(RM) *.o $(PROGRS)

