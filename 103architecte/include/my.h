/*
** my.h for my.h in /home/orset_a/rendu
** 
** Made by aurelie orset
** Login   <orset_a@epitech.net>
** 
** Started on  Mon Oct 20 10:16:16 2014 aurelie orset
** Last update Sun Dec 14 17:10:20 2014 aurelie orset
*/

#ifndef		_MY_H_
# define	_MY_H_

double  *symetrie(double *matrice_symetrie, double Sx, double Sy);
double  *rotation(double *matrice_rotation, double Rx, double Ry);
double  *homothecie(double *matrice_homothetie, double Hx, double Hy);
double  *matrice_mul(double *m, double *m2);
void    affichage(double *matrice);
int		check_error(int ac, char **av);
double		*check_options(double *nbr, double *mat, int ac, char **av);
void		my_putnbr_abs(int);
void		my_putchar(char c);
int		my_isneg(int nb);
int		my_put_nbr(int nb);
int		my_swap(int *a, int *b);
int		my_putstr(char *str);
int		my_strlen(char *str);
int		my_getnbr(char *str);
void		my_sort_in_tab(int *tab, int size);
int		my_power_rec(int nb, int power);
int		my_square_root(int nb);
int		my_is_prime(int nombre);
int		my_find_prime_sup(int nb);
char		*my_strcpy(char *dest, char *src);
char		*my_strncpy(char *dest, char *src, int nb);
char		*my_revstr(char *str);
char		*my_strstr(char *str, char *to_find);
int		my_strcomp(char *s1, char *s2);
int		my_strncomp(char *s1, char *s2, int nb);
char		*my_strupcase(char *str);
char		*my_strlowcase(char *str);
char		*my_strcapitalize(char *str);
int		my_str_isalpha(char *str);
int		my_str_isnum(char *str);
int		my_str_islower(char *str);
int		my_str_isupper(char *str);
int		my_str_isprintable(char *str);
int		my_showstr(char *str);
int		my_showmem(char *str, int size);
char		*my_strcat(char *dest, char *src);
char		*my_strncat(char *dest, char *src, int nb);
int		my_strlcat(char *dest, char *src, int size);
void		my_putnbr_base(int nb, char *base);
#endif
