NAME	=	test
CFILES	=	test_printf.c compare.c
OBJ	=	$(CFILES:.c=.o)

all:	$(NAME)

$(NAME):
	cc test_printf.c ../ft_printf/libftprintf.a -Wformat=0 -o creating_texts
	./creating_texts
	cc compare.c -o compare_inputs
	./compare_inputs

clean:	
	rm -f ./creating_texts
	rm -f ./compare_inputs
	rm -f expected.txt
	rm -f ft_printf_inputs.txt

re:	clean all
