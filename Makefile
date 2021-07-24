NAME = libft.a
SOURCES = ft_isalpha.c ft_isdigit.c ft_isalnum.c

# Add more files to sources
SOURCES += ft_isascii.c ft_isprint.c ft_strlen.c
SOURCES += ft_tolower.c ft_toupper.c ft_strncmp.c
SOURCES += ft_memset.c

# Use same files from sources, but change .c to .o
OBJECTS = ${SOURCES:.c=.o}

# @ supress commands to show in terminal
RM = @rm -f

CC = @gcc

CFLAGS = -Wall -Wextra -Werror
MSG1 = @echo "Compiled ✔︎"
MSG2 = @echo "Cleaned ✔︎"

# This sample command adds the object files *.o static library libft.a, creating libft.a if it doesn't already exist.
ARCHIVE = @ar -rc

# Create an index for the library
RANLIB = @ranlib

# Compile files following above rules 	${CC} -o ${NAME} ${OBJECTS}
$(NAME): ${OBJECTS}
	${ARCHIVE} ${NAME} ${OBJECTS}
	${RANLIB} ${NAME}
	${MSG1}

# Default all command to compile
all: ${NAME}

# Clean generated .o files
clean:
	${RM} ${OBJECTS}
	${MSG2}

# Force clean all files generated on all
fclean: clean
	${RM} ${NAME}

# Regenarate compilation
re: fclean all

# phony will run, independent from the state of the file system, avoid make in files with same name
.PHONY: all clean fclean re
