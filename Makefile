#***************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mamottet <mamottet@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/11 13:06:31 by mamottet          #+#    #+#              #
#    Updated: 2023/05/15 15:18:41 by mamottet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# -- Commande -- #

RM	= rm -f 
CC	= gcc
FL	= -Wall -Werror -Wextra
COMP	= $(CC) $(FL)
EX	= prog
BS	=-D BUFFER_SIZE=

# -- SRC -- #

SRC	= get_next_line.c get_next_line_utils.c

SRCO	= $(SRC:.c=.o)

NAME	= gnl.a

# -- Target -- #

all:			$(NAME)

$(NAME):		$(SRCO)
				@norminette $(SRC)
				@ar rcs $(NAME) $(SRCO)
				@echo " --- Main Test --- "
				@$(COMP) test/main.c -L. $(NAME) -o $(EX)
				./$(EX)	
				@echo " --- Test 1 | BUFFER_SIZE = 1 --- "
				@$(COMP) $(BS)1 test/main.c -L. $(NAME) -o $(EX)
				@./$(EX)
				@echo " --- Test 2 | BUFFER_SIZE = 42 --- "
				@$(COMP) $(BS)42 test/main.c -L. $(NAME) -o $(EX)
				@./$(EX)
				@echo " --- Test 3 | BUFFER_SIZE = 100000 --- "
				@$(COMP) $(BS)100000 test/main.c -L. $(NAME) -o $(EX)
				@./$(EX)

clean:
				$(RM) $(SRCO)

fclean:			clean
			$(RM) $(NAME) $(EX)

re:			fclean all
