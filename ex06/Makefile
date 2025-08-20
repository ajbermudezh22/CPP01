# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: albbermu <albbermu@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/20 13:24:07 by albbermu          #+#    #+#              #
#    Updated: 2025/08/20 13:24:07 by albbermu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Harl_Filter
CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
SRCs = main.cpp Harl.cpp

OBJFILES = $(SRCs:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJFILES)
	$(CC) $(CFLAGS) $(OBJFILES) -o $(NAME)

clean:
	rm -f $(OBJFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re