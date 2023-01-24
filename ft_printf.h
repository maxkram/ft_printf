#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int	print_number(int nb);
int	print_char(char c);
int	ft_checker(char c, va_list *ptr);
int	ft_printf(const char *format, ...);
int	print_adr(unsigned long int nb);
int	print_unb(unsigned int nb);
int	print_hex(unsigned int nb, int s);
int	print_string(char	*str);
#endif