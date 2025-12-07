# Variáveis
CC = gcc
CFLAGS = -Wall -Werror -pedantic -Iinclude
TARGET = determinante_triangulacao
OBJS = main.o matriz.o triangulacao.o cJSON.o
HEADERS = include/matriz.h include/triangulacao.h include/cJSON.h
SRC_DIR = src
INC_DIR = include

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS) -lm

main.o: $(SRC_DIR)/main.c $(HEADERS)
	$(CC) -c $(SRC_DIR)/main.c -o main.o $(CFLAGS)

matriz.o: $(SRC_DIR)/matriz.c $(HEADERS)
	$(CC) -c $(SRC_DIR)/matriz.c -o matriz.o $(CFLAGS)

triangulacao.o: $(SRC_DIR)/triangulacao.c $(HEADERS)
	$(CC) -c $(SRC_DIR)/triangulacao.c -o triangulacao.o $(CFLAGS)

cJSON.o: $(SRC_DIR)/cJSON.c include/cJSON.h
	$(CC) -c $(SRC_DIR)/cJSON.c -o cJSON.o $(CFLAGS)

clean:
	rm -f *.o $(TARGET)