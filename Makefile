CC = cc 
FLAGS = -Wall -Wextra -Werror
 # Name defines name for the final output file wich is static library libft.a
NAME = libft.a
HEADER = libft.h
SOURCE = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	   ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	   ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
	   ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
	   ft_calloc.c ft_strdup.c	
BONUSESOURCE = 
#this does subsitiution 
OFILES = $(SOURCE:.c=.o)
OBFILES = $(BONUSESOURCE:.c=.o)

#main rules and targets
#this says in order to create libft source files need to be present 

$(NAME): $(OFILES)
		ar rcs $(NAME) $(OFILES)
# all is default and prerequisites is NAME
all: $(NAME)
# $< means first prerequisite $@ target 
# archiving and static library 
#  ar rcs archives the compiled ofiles into the static library 
# r : replaces or adds files to the archive c : creates s : creates a symbol table to speed up linking 

%.o : %.c 
	$(CC) -c $(FLAGS) $< -o $@
	

#additional targets 
# a flag that creates a test program 
# @ is to hide command 
start: 
	  @$(CC) -C $(FLAGS) $(SOURCE) $(BONUSESOURCE) ./test/run.c -o run.o
	  @./run
	  @rm -f run


#clean a traget to remove all compiled object files 

clean: 
		@rm -rf $(OBFILES) $(OFILES)

#fclean it first runs clean then removes library 

fclean: clean
		@rm -f $(NAME)

#a target for rebuilding it first removes by fclean then rebuild by all

re: fclean all 

#a target to compile bonus files which triggers the pattern rule to compile
bonus: $(OBFILES)

.PHONY: all bonus fclean clean start


