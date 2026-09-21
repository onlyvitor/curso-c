CC = gcc
CFLAGS = -Wall -Wextra -g
TARGET = main

SRC_LIST_02 = main.c exercicios/lista02/ex01.c exercicios/lista02/ex02.c exercicios/lista02/ex03.c exercicios/lista02/ex04.c exercicios/lista02/ex05.c
SRC_LIST_03 = exercicios/lista03/ex01.c exercicios/lista03/ex02.c

SRC = $(SRC_LIST_02) $(SRC_LIST_03)

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)

.PHONY: all clean

run: $(TARGET)
	@echo "RUNNING..."
	./$(TARGET)
.PHONY: all clean run
