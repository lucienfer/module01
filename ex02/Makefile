# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: luciefer <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/17 10:28:54 by luciefer          #+#    #+#              #
#    Updated: 2023/10/05 14:05:40 by luciefer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Cerveau

SRCS = main.cpp 

OBJS_DIR = obj

OBJS = $(addprefix $(OBJS_DIR)/, $(SRCS:.cpp=.o))
	INCLUDE = include
	AR = #ar rcs
	RM = rm -f
	CC = c++
	CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(OBJS_DIR):
	@mkdir -p $(OBJS_DIR)

$(OBJS_DIR)/%.o: %.cpp | $(OBJS_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@ -I $(INCLUDE)


$(NAME): $(OBJS)
	@clear
	@echo "\033[1;34m                                                                                                                     "
	@echo "    Loading quantum version..."
	@echo "Project name: $(NAME)"
	@echo "\n\033[1;32mCompilation... ⌛\033[0;m\n"
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo -n "\r 5%  [\033[0;31m█\033[m.........................]"
	@sleep 0.01
	@echo -n "\r 10%  [\033[0;31m███\033[m.......................]"
	@sleep 0.01
	@echo -n "\r 15%  [\033[0;31m████\033[m......................]"
	@sleep 0.01
	@echo -n "\r 20%  [\033[0;31m██████\033[m....................]"
	@sleep 0.01
	@echo -n "\r 27%  [\033[0;31m████████\033[m..................]"
	@sleep 0.01
	@echo -n "\r 32%  [\033[0;31m██████████\033[m................]"
	@sleep 0.01
	@echo -n "\r 35%  [\033[0;31m███████████\033[m...............]"
	@sleep 0.01
	@echo -n "\r 45%  [\033[0;31m█████████████\033[m.............]"
	@sleep 0.01
	@echo -n "\r 50%  [\033[0;31m███████████████\033[m...........]"
	@sleep 0.01
	@echo -n "\r 65%  [\033[0;31m██████████████████\033[m........]"
	@sleep 0.01
	@echo -n "\r 80%  [\033[0;31m█████████████████████\033[m.....]"
	@sleep 0.01
	@echo -n "\r 90%  [\033[0;31m████████████████████████\033[m..]"
	@sleep 0.01
	@echo -n "\r 95%  [\033[0;31m█████████████████████████\033[m.]"
	@sleep 0.05
	@echo -n "\r 99%  [\033[0;31m██████████████████████████\033[m]"
	@sleep 1
	@echo -n "\r 100% [\033[0;32m██████████████████████████\033[m]\033[0;32m compilation finished ✓\n\033[0;m"

clean:
	@$(RM) $(OBJS)
	@echo "\033[1;1;32m♻️  Objects have been \033[5;1;31mdeleted\033[m ♻️"
	@$(RM) -r $(OBJS_DIR)

fclean:
	@$(RM) $(OBJS)
	@$(RM) $(NAME)
	@echo -n "\033[0;31m⠀"
	@echo "[##############]"
	@echo "\033[1;1;32m♻️  Objects and $(NAME) have been \033[5;1;31mdeleted\033[m ♻️"
	@$(RM) -r $(OBJS_DIR)

re:	fclean all

.PHONY: all clean fclean re
