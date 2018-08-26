wchar < 0 -> gestion negatifs
wchar > 55295 -> 0xD7FF -> 11101101 10011111 10111111 |
													  |==> demi octet, néant
wchar < 57344 -> 0xE000 -> 11101110 10000000 10000000 | 
wchar > 1114111 -> 0x10FFF -> 11110100 10001111 10111111 10111111 (max)


# DOING

- ls segfault
- refaire norme

# DEBUG

- ft_printf.c -> remplacer tous les exit(0); par des ret = 0;
- C -> lc, 254 KO
- S -> pb return + affichage
- pb return p
- pb char random c
- pb minus hash sur o-O
- pb both if width > prec
- pb width, prec & both pour #o
- x-X -> l, j, z en negatifs
- ls segfault
- pb both o / #- o
- 0x44ff115500 pour d ko ?
- D KO ?
- int max & min -> KO
- flag zero & prec u-U -> negatif -> - en trop
- if width > prec && prec >= len -> mauvais return
- return sur minus p pour prec ?
- p -> pb width
- %08u, 171894 -> mauvais return
- %.u, 0 -> doit exit (0);
- flag - à appliquer partout
- mauvais return flag plus
- .2i, -10 -> mauvais return
- %0d, neg -> mauvais return
- width
- %.0x, 0 -> ne doit rien print
- gestion padding if = 0
- flag 0 -> string
- %.2i, 10 -> mine : 10, real : -10
- if plus & zero -> plus puis zero
- if width & precision -> les deux
- flag 0 decimal & char
- (null) -> KO precision (print rien), KO width
- precision pour .0
- precision OKAY sur toutes conv decimal
- check_width & check_precision OKAY
- return -1 pour unicode
- flag space okay
- #o quand value = 0
- pb + pour negatif
- rostring à modifier pour flag -
- mauvais return wchar
- %ld KO -> affichage ft_printf.c à modifier pour continuer les conversions si
	ft_isflag ou ft_isconv et ne pas afficher tout ce qui est en dehors de
	% + un seul paramètre
- pb #x & #X pour 0
- types à changer sur itoa_base (maj KO, min negatif KO)
- %c -> -21 KO -> typecast
- string après % non pris en compte (ex : \n)
- options -> bus error
- mauvais retour en décimal (1 pour chaque %d)
- %s -> si NULL, doit afficher (null)
- valeur de retour -> okay
- itoa_base -> gestion négatifs (%o %x %p) -> toutes les longueurs (%D & %u)
- problèmes affichage flags
- impressions de bases
- %d affiche en double

-------------------------------------------------------------------------------

lc -> wint_t
ls -> wchar_t *

			d, i					o, u, x, X
hh		signed char				unsigned char
h		short					unsigned short
l		long					unsigned long
ll		long long				unsigned long long
j		intmax_t				uintmax_t
z		size_t					size_t

-------------------------------------------------------------------------------

- ft_printf
	- initialise_flags
	- ft_percent
	- print_conversion
		- ft_cconv
		- ft_diconv
		- ft_hexaconv
		- ft_ouconv
		- ft_sconv
	- ft_final_print
		- check_flags
		- check_length
		- check_width
		- check_precision
		- print_options
		- ft_percent
	- ft_printf
		ft_final_print



- ft_check_flags
	- check_flags
	- check_length
	- check_width
	- check_precision
	- ft_islength

- ft_print_options
	- print_zero
	- print_minus
	- print_options

- ft_wchar_tools
	- ft_put_and_len_wchar
	- ft_putwstr
