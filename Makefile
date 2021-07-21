NAME = libft.a
SOURCES = hello.c test.c

# Use same files from sources, but change .c to .o
OBJECTS = ${SOURCES:.c=.o}

RM = rm -f
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Compile files following above rules
${NAME}: ${OBJECTS}
	${CC} -o ${NAME} ${OBJECTS} ${CFLAGS}

# Default all command to compile
all: ${NAME}

# Clean generated .o files
clean:
	${RM} ${OBJECTS}

# Force clean all files generated on all
fclean: clean
	${RM} ${NAME}

# Regenarate compilation
re: fclean all

# phony will run, independent from the state of the file system
.PHONY: all clean fclean re