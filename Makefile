CC = gcc
CFLAGS = -Wall -Wextra -g
TARGET = main

SRC = main.c exercicios/lista02/ex01.c exercicios/lista02/ex02.c exercicios/lista02/ex03.c

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)

.PHONY: all clean

run:
	./$(TARGET)
.PHONY: RUNNING...
