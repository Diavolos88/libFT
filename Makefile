# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ealexa <ealexa@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/28 12:37:09 by ealexa            #+#    #+#              #
#    Updated: 2020/11/11 12:01:59 by ealexa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
PATH_SRC = ./
HEADER = ./
FLAG = -Wall -Wextra -Werror
OPTION = -c -I $(HEADER)
SRC_BONUS = $(PATH_SRC)ft_memset.c $(PATH_SRC)ft_bzero.c $(PATH_SRC)ft_memcpy.c $(PATH_SRC)ft_memccpy.c $(PATH_SRC)ft_memmove.c $(PATH_SRC)ft_memchr.c $(PATH_SRC)ft_strlen.c  $(PATH_SRC)ft_memcmp.c $(PATH_SRC)ft_strlcpy.c $(PATH_SRC)ft_strlcat.c $(PATH_SRC)ft_strchr.c $(PATH_SRC)ft_strrchr.c $(PATH_SRC)ft_toupper.c $(PATH_SRC)ft_tolower.c $(PATH_SRC)ft_isprint.c $(PATH_SRC)ft_isascii.c $(PATH_SRC)ft_isalnum.c $(PATH_SRC)ft_isalpha.c $(PATH_SRC)ft_isdigit.c $(PATH_SRC)ft_strncmp.c $(PATH_SRC)ft_strnstr.c $(PATH_SRC)ft_atoi.c $(PATH_SRC)ft_calloc.c $(PATH_SRC)ft_strdup.c $(PATH_SRC)ft_substr.c $(PATH_SRC)ft_strjoin.c $(PATH_SRC)ft_strtrim.c $(PATH_SRC)ft_split.c $(PATH_SRC)ft_itoa.c $(PATH_SRC)ft_strmapi.c $(PATH_SRC)ft_putchar_fd.c $(PATH_SRC)ft_putstr_fd.c $(PATH_SRC)ft_putendl_fd.c $(PATH_SRC)ft_putnbr_fd.c $(PATH_SRC)ft_lstnew.c $(PATH_SRC)ft_lstadd_front.c $(PATH_SRC)ft_lstsize.c $(PATH_SRC)ft_lstlast.c $(PATH_SRC)ft_lstadd_back.c $(PATH_SRC)ft_lstdelone.c $(PATH_SRC)ft_lstclear.c $(PATH_SRC)ft_lstiter.c $(PATH_SRC)ft_lstmap.c $(PATH_SRC)get_next_line.c
OBJ_BONUS = ft_bzero.o ft_memset.o ft_memcpy.o ft_memccpy.o ft_memmove.o ft_memchr.o ft_memcmp.o ft_strlen.o ft_strlcpy.o ft_strlcat.o ft_strchr.o ft_strrchr.o ft_toupper.o ft_tolower.o ft_isprint.o ft_isascii.o ft_isalnum.o ft_isalpha.o ft_isdigit.o ft_strncmp.o ft_strnstr.o ft_atoi.o ft_calloc.o ft_strdup.o ft_substr.o ft_strjoin.o ft_strtrim.o ft_split.o ft_itoa.o ft_strmapi.o ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o ft_lstnew.o ft_lstadd_front.o ft_lstsize.o ft_lstlast.o ft_lstadd_back.o ft_lstdelone.o ft_lstclear.o ft_lstiter.o ft_lstmap.o get_next_line.o
SRC = $(PATH_SRC)ft_memset.c $(PATH_SRC)ft_bzero.c $(PATH_SRC)ft_memcpy.c $(PATH_SRC)ft_memccpy.c $(PATH_SRC)ft_memmove.c $(PATH_SRC)ft_memchr.c $(PATH_SRC)ft_strlen.c  $(PATH_SRC)ft_memcmp.c $(PATH_SRC)ft_strlcpy.c $(PATH_SRC)ft_strlcat.c $(PATH_SRC)ft_strchr.c $(PATH_SRC)ft_strrchr.c $(PATH_SRC)ft_toupper.c $(PATH_SRC)ft_tolower.c $(PATH_SRC)ft_isprint.c $(PATH_SRC)ft_isascii.c $(PATH_SRC)ft_isalnum.c $(PATH_SRC)ft_isalpha.c $(PATH_SRC)ft_isdigit.c $(PATH_SRC)ft_strncmp.c $(PATH_SRC)ft_strnstr.c $(PATH_SRC)ft_atoi.c $(PATH_SRC)ft_calloc.c $(PATH_SRC)ft_strdup.c $(PATH_SRC)ft_substr.c $(PATH_SRC)ft_strjoin.c $(PATH_SRC)ft_strtrim.c $(PATH_SRC)ft_split.c $(PATH_SRC)ft_itoa.c $(PATH_SRC)ft_strmapi.c $(PATH_SRC)ft_putchar_fd.c $(PATH_SRC)ft_putstr_fd.c $(PATH_SRC)ft_putendl_fd.c $(PATH_SRC)ft_putnbr_fd.c $(PATH_SRC)ft_lstnew.c $(PATH_SRC)ft_lstadd_front.c $(PATH_SRC)ft_lstsize.c $(PATH_SRC)ft_lstlast.c $(PATH_SRC)ft_lstadd_back.c $(PATH_SRC)ft_lstdelone.c $(PATH_SRC)ft_lstclear.c $(PATH_SRC)ft_lstiter.c $(PATH_SRC)ft_lstmap.c $(PATH_SRC)get_next_line.c $(PATH_SRC)ft_strcpy.c
OBJ = ft_bzero.o ft_memset.o ft_memcpy.o ft_memccpy.o ft_memmove.o ft_memchr.o ft_memcmp.o ft_strlen.o ft_strlcpy.o ft_strlcat.o ft_strchr.o ft_strrchr.o ft_toupper.o ft_tolower.o ft_isprint.o ft_isascii.o ft_isalnum.o ft_isalpha.o ft_isdigit.o ft_strncmp.o ft_strnstr.o ft_atoi.o ft_calloc.o ft_strdup.o ft_substr.o ft_strjoin.o ft_strtrim.o ft_split.o ft_itoa.o ft_strmapi.o ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o ft_lstnew.o ft_lstadd_front.o ft_lstsize.o ft_lstlast.o ft_lstadd_back.o ft_lstdelone.o ft_lstclear.o ft_lstiter.o ft_lstmap.o get_next_line.o ft_strcpy.o

all: $(NAME)

$(NAME):
		@ gcc $(FLAG) $(OPTION) $(SRC)
		@ ar rc $(NAME) $(OBJ)

bonus: 
		@ gcc $(FLAG) $(OPTION) $(SRC_BONUS)
		@ ar rc $(NAME) $(OBJ_BONUS)

clean:
	@ /bin/rm -f $(OBJ_BONUS)
fclean: clean
	@ /bin/rm -f $(NAME)
	@ /bin/rm -f bonus

re: fclean all
