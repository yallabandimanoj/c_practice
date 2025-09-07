# Compiler and flags
CC = gcc
CFLAGS = -Wall -g

# Target executable
TARGET = program

# Object files
OBJS = main.o add.o

# Default target
all: $(TARGET)

# Link object files into executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Compile .c to .o
main.o: main.c add.h
	$(CC) $(CFLAGS) -c main.c

add.o: add.c add.h
	$(CC) $(CFLAGS) -c add.c

# Clean build artifacts
clean:
	rm -f $(OBJS) $(TARGET)

