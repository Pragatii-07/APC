CC = gcc

# Name of the executable file
TARGET = a.out

# List of source files
SRC = main.c \
      addition.c \
      subtraction.c \
      multiplication.c \
      division.c \
      modulus.c \
      operation.c

# Convert all .c files into .o files
OBJ = $(SRC:.c=.o)

# Default target
# Executed when you type: make
all: $(TARGET)

# Link all object files to create the executable
$(TARGET): $(OBJ)
	$(CC) -o $(TARGET) $(OBJ)

# Compile each .c file into its corresponding .o file
# $< represents the source file (dependency)
%.o: %.c apc.h
	$(CC) -c $<

# Remove all object files and the executable
clean:
	rm -f *.o $(TARGET)
