# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adelille <adelille@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/30 19:21:49 by adelille          #+#    #+#              #
#    Updated: 2022/01/07 21:17:21 by adelille         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	tests
CC = 	clang
AR =	ar rcs
RM = 	rm -rf

CFLAGS =	-Wall -Werror -Wextra
# CFLAGS +=	-O2
CFLAGS +=	-g3
# CFLAGS +=	-fsanitize=address

# **************************************************************************** #
#	MAKEFILE	#

MAKEFLAGS += --silent

SHELL := bash

B =		$(shell tput bold)
BLA =	$(shell tput setaf 0)
RED =	$(shell tput setaf 1)
GRE =	$(shell tput setaf 2)
YEL =	$(shell tput setaf 3)
BLU =	$(shell tput setaf 4)
MAG =	$(shell tput setaf 5)
CYA =	$(shell tput setaf 6)
WHI =	$(shell tput setaf 7)
D =		$(shell tput sgr0)
BEL =	$(shell tput bel)
CLR =	$(shell tput el 1)

# **************************************************************************** #
#	 LIB	#

LBPATH =	../framework/
LBNAME =	$(LBPATH)libunit.a

# **************************************************************************** #
#	SRCS	#

SRCSPATH =	./
OBJSPATH =	./obj/
INC =		./inc/

SRCS =		$(wildcard $(SRCSPATH)*.c) $(wildcard $(SRCSPATH)**/*.c)
SRCSNAME =	$(subst $(SRCSPATH), , $(SRCS))

OBJSNAME =	$(SRCSNAME:.c=.o)
OBJS =		$(addprefix $(OBJSPATH), $(OBJSNAME))

# *************************************************************************** #

define	progress_bar
	@i=0
	@while [[ $$i -le $(words $(SRCS)) ]] ; do \
		printf " " ; \
		((i = i + 1)) ; \
	done
	@printf "$(B)]\r[$(GRE)"
endef

# *************************************************************************** #
#	RULES	#

all:		launch $(NAME)
	@printf "\n$(B)$(MAG)$(NAME) compiled$(D)\n"

test:		all
	@./$(NAME)

launch:
	$(call progress_bar)

$(NAME):	$(OBJS) lib
	$(CC) $(CFLAGS) $(OBJS) $(LBNAME) -o $(NAME)

$(OBJSPATH)%.o: $(SRCSPATH)%.c
	@mkdir -p $(dir $@) # 2> /dev/null || true
	$(CC) $(CFLAGS) -I$(INC) -c $< -o $@
	@printf "█"
	
lib:
	@printf "$(D)$(B)$(BLU)\n$(NAME) objects compiled\n\n$(D)"
	make -C $(LBPATH)
	#@echo "$(B)$(MAG)$(BEL)Libunit compiled.$(D)"

clean:
	@$(RM) $(OBJSPATH)
	@make clean -C $(LBPATH)

fclean:		clean
	@$(RM) $(NAME)
	@make fclean -C $(LBPATH)

re:			fclean all

.PHONY: all clean fclean re launch lib

# **************************************************************************** #
