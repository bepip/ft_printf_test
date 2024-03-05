NAME	=	test
CFILES	=	test_printf.c compare.c
OBJ	=	$(CFILES:.c=.o)

all:	$(NAME)

$(NAME):
	cc test_printf.c ../ft_printf/libftprintf.a -Wformat=0
	./a.out
	cc compare.c
	./a.out

clean:	
	rm -f ./a.out
	rm -f expected.txt
	rm -f ft_printf_inputs.txt

re:	clean all
