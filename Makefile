##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile for LIB_MyLIB_2018
##

NAME			=		a.out
LIB_NAME		=		libmy.so
TEST_NAME		=		tests/unit_tests

AR				=		ar rcs
CC				=		gcc
RM				=		rm -rf

MAIN_SRC		=		main.c

PROJ_SRC		=		my_arrfree.c			\
						my_arrlen.c				\
						my_itoa.c				\
						my_ltoa.c				\
						my_putchar.c			\
						my_puts.c				\
						my_strchr.c				\
						my_strchrs.c			\
						my_strcln.c				\
						my_strcmp.c				\
						my_strdup.c				\
						my_strlen.c				\
						my_strrpl.c				\
						my_strsplit.c			\
						my_strtod.c				\
						my_strtoi.c				\
						my_strtok.c				\
						my_strtol.c				\

TEST_SRC		=		tests/array/test_my_arrfree.c		\
						tests/array/test_my_arrlen.c		\
						tests/number/test_my_itoa.c			\
						tests/number/test_my_ltoa.c			\
						tests/print/test_my_putchar.c		\
						tests/print/test_my_puts.c			\
						tests/string/test_my_strchr.c		\
						tests/string/test_my_strchrs.c		\
						tests/string/test_my_strcln.c		\
						tests/string/test_my_strcmp.c		\
						tests/string/test_my_strdup.c		\
						tests/string/test_my_strlen.c		\
						tests/string/test_my_strrpl.c		\
						tests/string/test_my_strsplit.c		\
						tests/string/test_my_strtod.c		\
						tests/string/test_my_strtoi.c		\
						tests/string/test_my_strtok.c		\
						tests/string/test_my_strtol.c		\

MAIN_OBJ		=		$(MAIN_SRC:.c=.o)

PROJ_OBJ		=		$(PROJ_SRC:.c=.o)

TEST_OBJ		=		$(TEST_SRC:.c=.o)

TEST_COV		=		$(PROJ_SRC:.c=.gcda)	\
						$(PROJ_SRC:.c=.gcno)	\
						$(TEST_SRC:.c=.gcda)	\
						$(TEST_SRC:.c=.gcno)	\

INCLUDE_DIR		=		"include/"
LIB_DIR			=		"lib/my/"

CFLAGS			+=		-I $(INCLUDE_DIR)
CFLAGS			+=		-W -Wall -Wextra

all:			$(NAME)

all_clean:		clean lib_clean tests_clean

all_fclean:		fclean lib_fclean tests_fclean

$(NAME):		$(MAIN_OBJ) $(PROJ_OBJ)
				$(CC) $(MAIN_OBJ) $(PROJ_OBJ) -o $(NAME) $(LDFLAGS) $(LDLIBS)

clean:
				$(RM) $(MAIN_OBJ) $(PROJ_OBJ)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

sweet:			all clean

lib:			CC += -shared -fPIC
lib:			$(PROJ_OBJ)
				$(AR) $(LIB_NAME) $(PROJ_OBJ)

lib_clean:
				$(RM) $(PROJ_OBJ)

lib_fclean:		lib_clean
				$(RM) $(LIB_NAME)

lib_re:			lib_fclean lib

lib_sweet:		lib lib_clean

tests_run:		CFLAGS += -fprofile-arcs -ftest-coverage
tests_run:		$(PROJ_OBJ) $(TEST_OBJ)
				$(CC) $(PROJ_OBJ) $(TEST_OBJ) -o $(TEST_NAME) $(LDFLAGS) $(LDLIBS) -lgcov -lcriterion
				$(TEST_NAME)

tests_clean:	clean
				$(RM) $(TEST_OBJ)
				$(RM) $(TEST_COV)

tests_fclean:	tests_clean
				$(RM) $(TEST_NAME)

tests_re:		tests_fclean tests_run

tests_sweet:	tests_run tests_clean

tests_sh:       sweet

.PHONY:         all all_clean all_fclean clean fclean re sweet lib lib_clean lib_fclean lib_re lib_sweet tests_run tests_clean tests_fclean tests_re tests_sweet tests_sh