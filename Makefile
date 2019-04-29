##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile for LIB_MyLIB_2018
##

NAME			=		a.out
LIB_NAME		=		libmy.so
TEST_NAME		=		tests/unit_tests

NO_COLOR		=		\033[0m
GREEN_COLOR		=		\033[0;32m
RED_COLOR		=		\033[0;31m

CC				=		gcc
RM				=		rm -rf

MAIN_SRC		=		main.c

PROJ_SRC		=		src/my_arrfree.c			\
						src/my_arrlen.c				\
						src/my_itoa.c				\
						src/my_ltoa.c				\
						src/my_putchar.c			\
						src/my_putlist.c			\
						src/my_puts.c				\
						src/my_strcat.c				\
						src/my_strchr.c				\
						src/my_strchrs.c			\
						src/my_strcln.c				\
						src/my_strcmp.c				\
						src/my_strcpy.c				\
						src/my_strdup.c				\
						src/my_strisd.c				\
						src/my_strisi.c				\
						src/my_strisl.c				\
						src/my_strlen.c				\
						src/my_strmcat.c			\
						src/my_strrchr.c			\
						src/my_strrpl.c				\
						src/my_strrstr.c			\
						src/my_strsplit.c			\
						src/my_strstr.c				\
						src/my_strtod.c				\
						src/my_strtoi.c				\
						src/my_strtok.c				\
						src/my_strtol.c				\

TEST_SRC		=		tests/array/test_my_arrfree.c		\
						tests/array/test_my_arrlen.c		\
						tests/number/test_my_itoa.c			\
						tests/number/test_my_ltoa.c			\
						tests/print/test_my_putchar.c		\
						tests/print/test_my_putlist.c		\
						tests/print/test_my_puts.c			\
						tests/string/test_my_strcat.c		\
						tests/string/test_my_strchr.c		\
						tests/string/test_my_strchrs.c		\
						tests/string/test_my_strcln.c		\
						tests/string/test_my_strcmp.c		\
						tests/string/test_my_strcpy.c		\
						tests/string/test_my_strdup.c		\
						tests/string/test_my_strisd.c		\
						tests/string/test_my_strisi.c		\
						tests/string/test_my_strisl.c		\
						tests/string/test_my_strlen.c		\
						tests/string/test_my_strmcat.c		\
						tests/string/test_my_strrchr.c		\
						tests/string/test_my_strrpl.c		\
						tests/string/test_my_strrstr.c		\
						tests/string/test_my_strsplit.c		\
						tests/string/test_my_strstr.c		\
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

MAKEFLAGS		+=		--silent

%.o:			%.c
				$(CC) $(CFLAGS) $(CPPFLAGS) -c -o $@ $< \
				&& echo "$< $(GREEN_COLOR)successfully compiled$(NO_COLOR)" \
				|| echo "$< $(RED_COLOR)couldn't be compiled$(NO_COLOR)"


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

debug:			CFLAGS += -g3
debug:			sweet

lib:			CFLAGS += -fPIC
lib:			LDFLAGS += -shared
lib:			$(PROJ_OBJ)
				$(CC) $(PROJ_OBJ) -o $(LIB_NAME) $(LDFLAGS) $(LDLIBS)

lib_clean:
				$(RM) $(PROJ_OBJ)

lib_fclean:		lib_clean
				$(RM) $(LIB_NAME)

lib_re:			lib_fclean lib

lib_sweet:		lib lib_clean

tests_run:		CFLAGS += -fprofile-arcs -ftest-coverage
tests_run:		LDLIBS += -lgcov -lcriterion
tests_run:		$(PROJ_OBJ) $(TEST_OBJ)
				$(CC) $(PROJ_OBJ) $(TEST_OBJ) -o $(TEST_NAME) $(LDFLAGS) $(LDLIBS)
				$(TEST_NAME)

tests_clean:	clean
				$(RM) $(TEST_OBJ)
				$(RM) $(TEST_COV)

tests_fclean:	tests_clean
				$(RM) $(TEST_NAME)

tests_re:		tests_fclean tests_run

tests_sweet:	tests_run tests_clean

tests_sh:       sweet
				sh tests/tests.sh $(NAME)

.PHONY:         all all_clean all_fclean clean fclean re sweet lib lib_clean lib_fclean lib_re lib_sweet tests_run tests_clean tests_fclean tests_re tests_sweet tests_sh