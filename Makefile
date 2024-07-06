# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -std=c11

# Linker flags (if needed)
LDFLAGS = 

# Source file
SRC = test.c list_lib.c

# Object file
OBJ = $(SRC:.c=.o)

# Name of the executable
TARGET = main

# Default target
all: $(TARGET)

# Link object file to create the executable
$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET) $(LDFLAGS)

# Rule to compile .c file to .o file
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up build files
clean:
	rm -f $(OBJ) $(TARGET)

# Phony targets (not actual files)
.PHONY: all clean
