# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: albbermu <albbermu@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/19 15:08:58 by albbermu          #+#    #+#              #
#    Updated: 2025/08/19 15:08:58 by albbermu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = HI_THIS_IS_BRAIN
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
SRCs = main.cpp

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