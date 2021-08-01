#include<stdio.h>

#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define PURPLE "\033[0;35m"
#define DEFAULT "\033[0m"

int	main()
{
	int	x;
	int	y;
	char	all = 'y';
	char *s_null = NULL;
	char *s_empty ="";

if(all == 'y')
{
	printf(PURPLE "- TEST 1 : easy string-\n"DEFAULT);
	x = ft_printf("Bonjour\n - Bonjour \\ Au revoir\\\n");
	y = printf("Bonjour\n - Bonjour \\ Au revoir\\\n");
	( x == y) ? printf(GREEN"~ OK\n\n"DEFAULT):printf(RED"==> MANDATORY NOK <==\n\n"DEFAULT);

	printf(PURPLE"- TEST 2 : %%%% -\n"DEFAULT);
	x = ft_printf("Au revoir%% Au revoir%%vous%d%% a demain\n", 2);
	y = printf("Au revoir%% Au revoir%%vous%d%% a demain\n", 2);
	( x == y) ? printf(GREEN"~ OK\n\n"DEFAULT):printf(RED"==> MANDATORY NOK <==\n\n"DEFAULT);

	printf(PURPLE"- TEST MANDATORY ALL FLAG -\n"DEFAULT);
	x = ft_printf("flag_c : |%c| - flag_s - |%s| - flag_p - |%p| - flag_d - |%d| flag_i : |%i| - flag_u - |%u| - flag_x - |%x| - flag_X - |%X|\n", 'a', "bcd", &x, 2147483647, -456, 42, 42, 42);
	y = printf("flag_c : |%c| - flag_s - |%s| - flag_p - |%p| - flag_d - |%d| flag_i : |%i| - flag_u - |%u| - flag_x - |%x| - flag_X - |%X|\n", 'a', "bcd", &x, 2147483647, -456, 42, 42, 42);
	( x == y) ? printf(GREEN"~ OK\n\n"DEFAULT):printf(RED"==> MANDATORY NOK <==\n\n"DEFAULT);

	printf(PURPLE"- TEST MANDATORY ALL FLAG - NULL STRING-\n"DEFAULT);
	x = ft_printf("flag_c : |%c| - flag_s - |%s| - flag_p - |%p|   - flag_d - |%d| flag_i : |%i| - flag_u - |%u| - flag_x - |%x| - flag_X - |%X|\n", ' ', s_null, s_null, INT_MIN, 0, 0, 0, 0);
	y = printf("flag_c : |%c| - flag_s - |%s| - flag_p - |%p| - flag_d - |%d| flag_i : |%i| - flag_u - |%u| - flag_x - |%x| - flag_X - |%X|\n", ' ',s_null, s_null, INT_MIN, 0, 0, 0, 0);
	( x == y) ? printf(GREEN"~ OK\n\n"DEFAULT):printf(RED"==> MANDATORY NOK <==\n\n"DEFAULT);

	printf(PURPLE"- TEST 3.1 : flag_c (char) -\n"DEFAULT);
	x = ft_printf("flag_c : |%c| - flag_5c - |%5c| - flag_-5c - |%5c| - flag_105c - |%105c|\n", 'a', 'b', 'c', 'd');
	y = printf("flag_c : |%c| - flag_5c - |%5c| - flag_-5c - |%5c| - flag_105c - |%105c|\n", 'a', 'b', 'c', 'd');
	( x == y) ? printf(GREEN"~ OK\n\n"DEFAULT):printf(RED"==> NOK <==\n\n"DEFAULT);

	printf(PURPLE"- TEST 3.2 :-\n");
	printf("%d\n", ft_printf("|%c|", 'c'));
	printf("%d\n\n", printf("|%c|", 'c'));

	printf(PURPLE"- TEST 4.1 : flag_s (string) -\n"DEFAULT);
	x = ft_printf("flag_s: |%s| - flag_5s: |%7s| - flag_15s: |%15s| - flag_-15s: |%-15s| - flag_7s: |%7s| - flag_4s: |%4s|\n", "string", "un", "plus court", "plus court", "plus long", "egal");
	y = printf("flag_s: |%s| - flag_5s: |%7s| - flag_15s: |%15s| - flag_-15s: |%-15s| - flag_7s: |%7s| - flag_4s: |%4s|\n", "string", "un", "plus court", "plus court", "plus long", "egal");
	( x == y) ? printf(GREEN"~ OK\n\n"DEFAULT):printf(RED"==> NOK <==\n\n"DEFAULT);

	printf(PURPLE"- TEST 4.2: flag_s (string with .) -\n"DEFAULT);
	x = ft_printf("flag_.3s: |%.3s| - flag_5.3s: |%.3s| - flag_1.5s: |%1.5s| - flag_5.s: |%5.s| - flag_.s: |%.s| - flag_5s: |%5s| - flag_5s: |%5s| - flag_-5s: |%-5s| - flag_-10s: |%-10s|\n", "string", "string", "un", "5.s", "plus court", "42", "~txt", "moins5", "moins10");
	y = printf("flag_.3s: |%.3s| - flag_5.3s: |%.3s| - flag_1.5s: |%1.5s| - flag_5.s: |%5.s| - flag_.s: |%.s| - flag_5s: |%5s| - flag_5s: |%5s| - flag_-5s: |%-5s| - flag_-10s: |%-10s|\n", "string", "string", "un", "5.s", "plus court", "42", "~txt", "moins5", "moins10");
	( x == y) ? printf(GREEN"~ OK\n\n"DEFAULT):printf(RED"==> NOK <==\n\n"DEFAULT);

	printf(PURPLE"- TEST 4.3: flag_s (NULL string) -\n"DEFAULT);
	x = ft_printf("flag_.3s: |%.3s| - flag_5.3s: |%5.3s| - flag_1.3s: |%1.3s| - flag_5.s: |%5.s| - flag_.s: |%.s| - flag_5s: |%5s| - flag_15s: |%15s| - flag_-10s: |%-10s|\n", s_null, s_null, s_null, s_null, s_null, s_null, s_null, s_null);
	y = printf("flag_.3s: |%.3s| - flag_5.3s: |%5.3s| - flag_1.3s: |%1.3s| - flag_5.s: |%5.s| - flag_.s: |%.s| - flag_5s: |%5s| - flag_15s: |%15s| - flag_-10s: |%-10s|\n", s_null, s_null, s_null, s_null, s_null, s_null, s_null, s_null);
	( x == y) ? printf(GREEN"~ OK\n\n"DEFAULT):printf(RED"==> NOK <==\n\n"DEFAULT);

	printf(PURPLE"- TEST 4.4: flag_s (empty string) -\n"DEFAULT);
	x = ft_printf("flag_.3s: |%.3s| - flag_5.3s: |%5.3s| - flag_5.s: |%5.s| - flag_.s: |%.s|- flag_5s: |%5s| - flag_-5s: |%-5s| - flag_-10s: |%-10s|\n", s_empty, s_empty, s_empty, s_empty, s_empty, s_empty, s_empty);
	y = printf("flag_.3s: |%.3s| - flag_5.3s: |%5.3s| - flag_5.s: |%5.s| - flag_.s: |%.s|- flag_5s: |%5s| - flag_-5s: |%-5s| - flag_-10s: |%-10s|\n", s_empty, s_empty, s_empty, s_empty, s_empty, s_empty, s_empty);
	( x == y) ? printf(GREEN"~ OK\n\n"DEFAULT):printf(RED"==> NOK <==\n\n"DEFAULT);

	printf(PURPLE"- TEST 4.5 :-\n");
	printf("%d\n", ft_printf("|% s|", "Le compte est-il bon ?"));
	printf("%d\n\n", printf("|% s|", "Le compte est-il bon ?"));
}
	printf(PURPLE"- TEST 5.1 : flag_p (pointer) -\n"DEFAULT);
	x = ft_printf("flag_p: |%p| - flag_18p: |%18p| - flag_-20p: |%-20p| - flag_p(NULL): |%p|   - flag_7p(NULL): |%7p|\n", &x, &x, &x, NULL, NULL);
	y = printf("flag_p: |%p| - flag_18p: |%18p| - flag_-20p: |%-20p| - flag_p(NULL): |%p| - flag_7p(NULL): |%7p|\n", &x, &x, &x, NULL, NULL);
	( x == y) ? printf(GREEN"~ OK\n\n"DEFAULT):printf(RED"==> NOK <==\n\n"DEFAULT);

	printf(PURPLE"- TEST 5.2 : flag_p (pointer NULL) -\n"DEFAULT);
	x = ft_printf("flag_-5p: |%-5p| - flag_6p: |%6p|- flag_16p: |%16p|- flag_p: |%p|  \n", s_null, s_null, s_null, s_null);
	y = printf("flag_-5p: |%-5p| - flag_6p: |%6p|- flag_16p: |%16p|- flag_p: |%p|\n", s_null, s_null, s_null, s_null);
	( x == y) ? printf(GREEN"~ OK\n\n"DEFAULT):printf(RED"==> NOK <==\n\n"DEFAULT);

	printf(PURPLE"- TEST 5.3 : flag_p -\n"DEFAULT);
	x = ft_printf("flag_-15p: |%-15p| - flag_-16p: |%-16p|- flag_16p(void *): |%16p|- flag_1p: |%16p|\n", s_empty, s_empty, s_empty, s_empty);
	y = printf("flag_-15p: |%-15p| - flag_-16p: |%-16p|- flag_16p(void *): |%16p|- flag_1p: |%16p|\n", s_empty, s_empty, s_empty, s_empty);
	( x == y) ? printf(GREEN"~ OK\n\n"DEFAULT):printf(RED"==> NOK <==\n\n"DEFAULT);

	printf(PURPLE"- TEST 5.4 : flag_p -\n"DEFAULT);
	x = ft_printf("%p   %p  \n", NULL, NULL);
	y = printf("%p %p\n", NULL, NULL);
	( x == y) ? printf(GREEN"~ OK\n\n"DEFAULT):printf(RED"==> NOK <==\n\n"DEFAULT);

	printf(PURPLE"- TEST 5.5 : flag_p\n");
	printf("%d\n", ft_printf("|%p|", s_empty));
	printf("%d\n\n", printf("|%p|", s_empty));

	printf(PURPLE"- TEST 5.6 : flag_-15.p\n");
	printf("%d\n", ft_printf("|%-15p|", s_empty));
	printf("%d\n\n", printf("|%-15p|", s_empty));

	printf(PURPLE"- TEST 5.7 (flag_p NULL) :\n");
	printf("%d\n", ft_printf("|%p|", NULL));
	printf("%d\n\n", printf("|%p|", NULL));

	printf(PURPLE"- TEST 5.8 (flag_p 0) :\n");
	printf("%d\n", ft_printf("|%p|", 0));
	printf("%d\n\n", printf("|%p|", 0));
/*
	printf(PURPLE"- TEST 5.3 : flag_p (test_trip) -\n"DEFAULT);
	x = ft_printf("flag_-11p: |%-11p| - flag_-12p: |%-12p|- flag_-13p: |%-13p| - flag_-14p: |%-14p| - flag_-1p: |%-1p| - flag_-2p: |%-2p|\n", INT_MIN, INT_MAX, ULONG_MAX, -ULONG_MAX, 0, 0);
	y = printf("flag_-11p: |%-11p| - flag_-12p: |%-12p|- flag_-13p: |%-13p| - flag_-14p: |%-14p| - flag_-1p: |%-1p| - flag_-2p: |%-2p|\n", INT_MIN, INT_MAX, ULONG_MAX, -ULONG_MAX, 0, 0);
	( x == y) ? printf(GREEN"~ OK\n\n"DEFAULT):printf(RED"==> NOK <==\n\n"DEFAULT);
*/

	printf(PURPLE"- TEST 6.1 : flag_x (hexa) -\n"DEFAULT);
	x = ft_printf("flag_x: |%x| - flag_x(0): |%x| - flag_10x: |%10x| - flag_-5x: |%-5x| - flag_6x(0): |%6x| - flag_#6x(0): |%#6x| - flag_-#7x: |%-#7x| - flag_#12.0x: |%#12.0x|\n", 4242, 0, 42424242, 42, 0, 0, 7, -167283);
	y = printf("flag_x: |%x| - flag_x(0): |%x| - flag_10x: |%10x| - flag_-5x: |%-5x| - flag_6x(0): |%6x| - flag_#6x(0): |%#6x| - flag_-#7x: |%-#7x| - flag_#12.0x: |%#12.0x|\n", 4242, 0, 42424242, 42, 0, 0, 7, -167283);
	( x == y) ? printf(GREEN"~ OK\n\n"DEFAULT):printf(RED"==> NOK <==\n\n"DEFAULT);

	printf(PURPLE"- TEST 6.2 : flag_x (hexa with precision) -\n"DEFAULT);
	x = ft_printf("flag_.7x: |%.7x| - flag_.x: |%.x| - flag_.0x: |%.0x| - flag_3.0x(0): |%3.0x| - flag_3x(0): |%3x| - flag_4.x(0): |%4.x| - flag_#-2.0x(0): |%#-2.0x| - flag_#9.5x: |%#9.5x| - flag_#-8.5x: |%#-8.5x|\n", 4242, 42424242, 42, 0, 0, 0, 0, 77, 77);
	y = printf("flag_.7x: |%.7x| - flag_.x: |%.x| - flag_.0x: |%.0x| - flag_3.0x(0): |%3.0x| - flag_3x(0): |%3x| - flag_4.x(0): |%4.x| - flag_#-2.0x(0): |%#-2.0x| - flag_#9.5x: |%#9.5x| - flag_#-8.5x: |%#-8.5x|\n", 4242, 42424242, 42, 0, 0, 0, 0, 77, 77);
	( x == y) ? printf(GREEN"~ OK\n\n"DEFAULT):printf(RED"==> NOK <==\n\n"DEFAULT);

	printf(PURPLE"- TEST 6.3 (flag_x) :\n");
	printf("%d\n", ft_printf("|%x|", 42));
	printf("%d\n\n", printf("|%x|", 42));

	printf(PURPLE"- TEST 7.1 : flag_X (HEXA) -\n"DEFAULT);
	x = ft_printf("flag_X: |%X| - flag_10X: |%10X| - flag_-7X: |%-7X| - flag_#6X(0): |%#6X| - flag_7X: |%7X| - flag_-#7X: |%-#7X| - flag_#2X: |%#2X|\n", 4242, 42424242, 42, 0, -3, 7, -167283);
	y = printf("flag_X: |%X| - flag_10X: |%10X| - flag_-7X: |%-7X| - flag_#6X(0): |%#6X| - flag_7X: |%7X| - flag_-#7X: |%-#7X| - flag_#2X: |%#2X|\n", 4242, 42424242, 42, 0, -3, 7, -167283);
	( x == y) ? printf(GREEN"~ OK\n\n"DEFAULT):printf(RED"==> NOK <==\n\n"DEFAULT);

	printf(PURPLE"- TEST 7.2 (flag_X) :\n");
	printf("%d\n", ft_printf("|%#X|", 42));
	printf("%d\n\n", printf("|%#X|", 42));

	printf(PURPLE"- TEST 8.1 : flag_u (unsigned int) -\n"DEFAULT);
	x = ft_printf("flag_u(0x1092): |%u| - flag_10u: |%10u| - flag_05u: |%05u| - flag_3u(0): |%3u| - flag_u(-3): |%u| - flag_-7u(-7): |%-7u| - flag_02u(-167283): |%02u|\n", 0X1092, 4242242, 42, 0, -3, -7, -167283);
	y = printf("flag_u(0x1092): |%u| - flag_10u: |%10u| - flag_05u: |%05u| - flag_3u(0): |%3u| - flag_u(-3): |%u| - flag_-7u(-7): |%-7u| - flag_02u(-167283): |%02u|\n", 0X1092, 4242242, 42, 0, -3, -7, -167283);
	( x == y) ? printf(GREEN"~ OK\n\n"DEFAULT):printf(RED"==> NOK <==\n\n"DEFAULT);

	printf(PURPLE"- TEST 8.2 : flag_u (unsigned int with precision) -\n"DEFAULT);
	x = ft_printf("flag_.u(0x1092): |%.u| - flag_10.2u: |%10.2u| - flag_0.7u: |%07u| - flag_6.0u(0): |%6.0u| - flag_10.5u: |%10.5u| - flag_7.0u(-3): |%7.0u| - flag_.0u(0): |%.0u|\n", 0x1092, 42424242, 42, 0, 27, -7, 0);
	y = printf("flag_.u(0x1092): |%.u| - flag_10.2u: |%10.2u| - flag_0.7u: |%07u| - flag_6.0u(0): |%6.0u| - flag_10.5u: |%10.5u| - flag_7.0u(-3): |%7.0u| - flag_.0u(0): |%.0u|\n", 0x1092, 42424242, 42, 0, 27, -7, 0);
	( x == y) ? printf(GREEN"~ OK\n\n"DEFAULT):printf(RED"==> NOK <==\n\n"DEFAULT);

	printf(PURPLE"- TEST 8.3 : flag_u :\n");
	printf("%d\n", ft_printf("|%10.2u|", 4297295));
	printf("%d\n\n", printf("|%10.2u|", 4297295));

	printf(PURPLE"- TEST 9.1 : flag_d (signed int) -\n"DEFAULT);
	x = ft_printf("flag_6d(0x1092): |%6d| - flag_06d(0x1092): |%06d| - flag_3d: |%3d| - flag_- 3d: |%- 3d| - flag_6d(0): |%6d| - flag_-5d: |%-5d| - flag_+02d: |%+02d|\n", 0x1092,  0x1092, 42424242, 42, 0, -3, -167283);
	y = printf("flag_6d(0x1092): |%6d| - flag_06d(0x1092): |%06d| - flag_3d: |%3d| - flag_- 3d: |%- 3d| - flag_6d(0): |%6d| - flag_-5d: |%-5d| - flag_+02d: |%+02d|\n", 0x1092, 0x1092, 42424242, 42, 0, -3, -167283);
	( x == y) ? printf(GREEN"~ OK\n\n"DEFAULT):printf(RED"==> NOK <==\n\n"DEFAULT);

	printf(PURPLE"- TEST 9.2: flag_d (signed int - sign exception) -\n"DEFAULT);
	x = ft_printf("flag_+6d(0x1092): |%+6d| - flag_+06d: |%+06d| - flag_ 5d: |% 5d| - flag_+.3d: |%+.3d| - flag_07d: |%07d| - flag_07d: |%07d| - flag_+05d: |%+05d|\n", 0x1092,  0x1092, -42, 42420, -3, -32768, 1);
	y = printf("flag_+6d(0x1092): |%+6d| - flag_+06d: |%+06d| - flag_ 5d: |% 5d| - flag_+.3d: |%+.3d| - flag_07d: |%07d| - flag_07d: |%07d| - flag_+05d: |%+05d|\n", 0x1092, 0x1092, -42, 42420, -3, -32768, 1);
	( x == y) ? printf(GREEN"~ OK\n\n"DEFAULT):printf(RED"==> NOK <==\n\n"DEFAULT);

	printf(PURPLE"- TEST 9.3.1: flag_d (signed int - sign exception) -\n"DEFAULT);
	x = ft_printf("flag_.5d: |%.5d| - flag_ .5d: |% .5d| - flag_-+.5d: |%-+.5d| - flag_+.5d: |%+.5d| - flag_.05d: |%.05d| - flag_-5d: |%-5d| - flag_-05d: |-| - flag_05d: |%05d| - flag_01d: |%01d|\n", -42, -42, -42, -42, -42, -42, -42, -42);
	y = printf("flag_.5d: |%.5d| - flag_ .5d: |% .5d| - flag_-+.5d: |%-+.5d| - flag_+.5d: |%+.5d| - flag_.05d: |%.05d| - flag_-5d: |%-5d| - flag_-05d: |-| - flag_05d: |%05d| - flag_01d: |%01d|\n", -42, -42, -42, -42, -42, -42, -42, -42);
	( x == y) ? printf(GREEN"~ OK\n\n"DEFAULT):printf(RED"==> NOK <==\n\n"DEFAULT);

	printf(PURPLE"- TEST 9.3.2: flag_d (signed int - sign exception) -\n"DEFAULT);
	x = ft_printf("flag_.5d: |%.5d| - flag_ .5d: |% .5d| - flag_-+.5d: |%-+.5d| - flag_+.5d: |%+.5d| - flag_.05d: |%.05d| - flag_-5d: |%-5d| - flag_-05d: |-| - flag_05d: |%05d| - flag_01d: |%01d|\n", 42, 42, 42, 42, 42, 42, 42, 42);
	y = printf("flag_.5d: |%.5d| - flag_ .5d: |% .5d| - flag_-+.5d: |%-+.5d| - flag_+.5d: |%+.5d| - flag_.05d: |%.05d| - flag_-5d: |%-5d| - flag_-05d: |-| - flag_05d: |%05d| - flag_01d: |%01d|\n", 42, 42, 42, 42, 42, 42, 42, 42);
	( x == y) ? printf(GREEN"~ OK\n\n"DEFAULT):printf(RED"==> NOK <==\n\n"DEFAULT);

	printf(PURPLE"- TEST 9.3.3: flag_d (signed int - sign exception) -\n"DEFAULT);
	x = ft_printf("flag_ .5d: |% .5d| - flag_-+.5d: |%-+.5d| - flag_+.5d: |%+.5d| - flag_.05d: |%.05d| - flag_-5d: |%-5d| - flag_-05d: |-| - flag_05d: |%05d| - flag_01d: |%01d|\n", -10241024, -10241024, -10241024, -10241024, -10241024, -10241024, -10241024);
	y = printf("flag_ .5d: |% .5d| - flag_-+.5d: |%-+.5d| - flag_+.5d: |%+.5d| - flag_.05d: |%.05d| - flag_-5d: |%-5d| - flag_-05d: |-| - flag_05d: |%05d| - flag_01d: |%01d|\n", -10241024, -10241024, -10241024, -10241024, -10241024, -10241024, -10241024);
	( x == y) ? printf(GREEN"~ OK\n\n"DEFAULT):printf(RED"==> NOK <==\n\n"DEFAULT);

	printf(PURPLE"- TEST 9.4: flag_d (. cancel -) -\n"DEFAULT);
	x = ft_printf("flag_-.05d: |%-.05d| - flag_-.5d: |%-.5d| - flag_-5.d: |%-5.d| - flag_-.d: |%-.d| - flag_-.5d: |%-.5d| - flag_-5.d: |%-5.d| - flag_-+5.d: |%-+5.d| - flag_- 5.d: |%- 5.d|\n", -42, -42, -42, -42, -42, -42, -42, 42);
	y = printf("flag_-.05d: |%-.05d| - flag_-.5d: |%-.5d| - flag_-5.d: |%-5.d| - flag_-.d: |%-.d| - flag_-.5d: |%-.5d| - flag_-5.d: |%-5.d| - flag_-+5.d: |%-+5.d| - flag_- 5.d: |%- 5.d|\n", -42, -42, -42, -42, -42, -42, -42, 42);
	( x == y) ? printf(GREEN"~ OK\n\n"DEFAULT):printf(RED"==> NOK <==\n\n"DEFAULT);

	printf(PURPLE"- TEST 9.5: flag_d (variation de 42) -\n"DEFAULT);
	x = ft_printf("flag_0d: |%0d| - flag_-.03d: |%-.03d| - flag_-.3d: |%-.3d| - flag_-3.d: |%-3.d| - flag_-3.3d: |%-3.3d| - flag_-.d: |%-.d| - flag_.d: |%.d| - flag_1.d: |%1.d| - flag_1.d: |%3.d| - flag_+d: |%+d| - flag_ d: |% d|\n", 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42);
	y = printf("flag_0d: |%0d| - flag_-.03d: |%-.03d| - flag_-.3d: |%-.3d| - flag_-3.d: |%-3.d| - flag_-3.3d: |%-3.3d| - flag_-.d: |%-.d| - flag_.d: |%.d| - flag_1.d: |%1.d| - flag_1.d: |%3.d| - flag_+d: |%+d| - flag_ d: |% d|\n", 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42);
	( x == y) ? printf(GREEN"~ OK\n\n"DEFAULT):printf(RED"==> NOK <==\n\n"DEFAULT);

	printf(PURPLE"- TEST 9.6: flag_d (variation de -42) -\n"DEFAULT);
	x = ft_printf("flag_0d: |%0d| - flag_-.03d: |%-.03d| - flag_-.3d: |%-.3d| - flag_-3.d: |%-3.d| - flag_-3.3d: |%-3.3d| - flag_-.d: |%-.d| - flag_.d: |%.d| - flag_1.d: |%1.d| - flag_1.d: |%3.d| - flag_+d: |%+d| - flag_ d: |% d|\n", -42, -42, -42, -42, -42, -42, -42, -42, -42, -42, -42);
	y = printf("flag_0d: |%0d| - flag_-.03d: |%-.03d| - flag_-.3d: |%-.3d| - flag_-3.d: |%-3.d| - flag_-3.3d: |%-3.3d| - flag_-.d: |%-.d| - flag_.d: |%.d| - flag_1.d: |%1.d| - flag_1.d: |%3.d| - flag_+d: |%+d| - flag_ d: |% d|\n", -42, -42, -42, -42, -42, -42, -42, -42, -42, -42, -42);
	( x == y) ? printf(GREEN"~ OK\n\n"DEFAULT):printf(RED"==> NOK <==\n\n"DEFAULT);

	printf(PURPLE"- TEST 9.7 : flag_d (variation de 0) -\n"DEFAULT);
	x = ft_printf("flag_d: |%d| - flag_+d: |%+d| - flag_- .3d: |%- .3d| - flag_+.3d: |%+.3d| - flag_-3.d: |%-3.d| - flag_-.1d: |%-.1d| - flag_+.d: |%+.d| - flag_.d: |%.d| - flag_1.d: |%1.d| - flag_1.d: |%3.d| - flag_-+d: |%-+d| - flag_ d: |% d|\n", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	y = printf("flag_d: |%d| - flag_+d: |%+d| - flag_- .3d: |%- .3d| - flag_+.3d: |%+.3d| - flag_-3.d: |%-3.d| - flag_-.1d: |%-.1d| - flag_+.d: |%+.d| - flag_.d: |%.d| - flag_1.d: |%1.d| - flag_1.d: |%3.d| - flag_-+d: |%-+d| - flag_ d: |% d|\n", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	( x == y) ? printf(GREEN"~ OK\n\n"DEFAULT):printf(RED"==> NOK <==\n\n"DEFAULT);

	printf(PURPLE"- TEST 9.8: flag_d (variation de 0) -\n"DEFAULT);
	x = ft_printf("flg_-2d: |%-2d| - flg_-1d: |%-1d| - flg_-+03d: |%+03d| - flg_+3d: |%+3d| - flg_+3d: |%+3d| - flg_-3.3d: |%-3.3d| - flg_4.2d: |%4.2d| - flg_-4.2d: |%-4.2d| - flg_-+4.2d: |%-+4.2d| - flg_- 4.2d: |%- 4.2d| - flg_2.2d: |%2.2d|\n", 0, 0, 0, 0, 1, 0, 0, 3, 3, 3, 0);
	y = printf("flg_-2d: |%-2d| - flg_-1d: |%-1d| - flg_-+03d: |%+03d| - flg_+3d: |%+3d| - flg_+3d: |%+3d| - flg_-3.3d: |%-3.3d| - flg_4.2d: |%4.2d| - flg_-4.2d: |%-4.2d| - flg_-+4.2d: |%-+4.2d| - flg_- 4.2d: |%- 4.2d| - flg_2.2d: |%2.2d|\n", 0, 0, 0, 0, 1, 0, 0, 3, 3, 3, 0);
	( x == y) ? printf(GREEN"~ OK\n\n"DEFAULT):printf(RED"==> NOK <==\n\n"DEFAULT);

	printf(PURPLE"- TEST 9.9 : flag_d (doppelte flag negativ value) -\n"DEFAULT);
	x = ft_printf("flag_6.4d: |%6.4d| - flag_5.5d: |%5.5d| - flag_+6.4d: |%+6.4d| - flag_ 6.4d: |% 6.4d| - flag_3.05d: |%3.05d| - flag_+7.5d: |%+7.5d| - flag_3.5d: |%3.5d| - flag_ 7.5d: |% 7.5d| - flag_ 7.1d: |% 7.1d|\n", -42, -42, -42, -42, -42, -42, -42, -42, -42);
	y = printf("flag_6.4d: |%6.4d| - flag_5.5d: |%5.5d| - flag_+6.4d: |%+6.4d| - flag_ 6.4d: |% 6.4d| - flag_3.05d: |%3.05d| - flag_+7.5d: |%+7.5d| - flag_3.5d: |%3.5d| - flag_ 7.5d: |% 7.5d| - flag_ 7.1d: |% 7.1d|\n", -42, -42, -42, -42, -42, -42, -42, -42, -42);
	( x == y) ? printf(GREEN"~ OK\n\n"DEFAULT):printf(RED"==> NOK <==\n\n"DEFAULT);

	printf(PURPLE"- TEST 9.10 : flag_d (doppelte flag positiv value) -\n"DEFAULT);
	x = ft_printf("flag_7.5d: |%7.5d| - flag_5.7d: |%5.5d| - flag_+7.5d: |%+7.5d| - flag_ 7.5d: |% 7.5d| - flag_3.05d: |%3.05d| - flag_+7.5d: |%+7.5d| - flag_3.5d: |%3.5d| - flag_ 7.5d: |% 7.5d| - flag_ 7.1d: |% 7.1d|\n", 42, 42, 42, 42, 42, 42, 42, 42, 42);
	y = printf("flag_7.5d: |%7.5d| - flag_5.7d: |%5.5d| - flag_+7.5d: |%+7.5d| - flag_ 7.5d: |% 7.5d| - flag_3.05d: |%3.05d| - flag_+7.5d: |%+7.5d| - flag_3.5d: |%3.5d| - flag_ 7.5d: |% 7.5d| - flag_ 7.1d: |% 7.1d|\n", 42, 42, 42, 42, 42, 42, 42, 42, 42);
	( x == y) ? printf(GREEN"~ OK\n\n"DEFAULT):printf(RED"==> NOK <==\n\n"DEFAULT);

	printf(PURPLE"- TEST 10.1 : flag_i (unsigned int) -\n"DEFAULT);
	x = ft_printf("flag_i(0x1092): |%+i| - flag_+10di: |%+10i| - flag_- 7i: |%- 7i| - flag_6i(0): |%6i| - flag_7i(-3): |%7i| - flag_-7i: |%-7i| - flag_02i(-167283): |%02i|\n", 0x1092, 42424242, 42, 0, -3, 2147483647, -167283);
	y = printf("flag_i(0x1092): |%+i| - flag_+10di: |%+10i| - flag_- 7i: |%- 7i| - flag_6i(0): |%6i| - flag_7i(-3): |%7i| - flag_-7i: |%-7i| - flag_02i(-167283): |%02i|\n", 0x1092, 42424242, 42, 0, -3, 2147483647, -167283);
	( x == y) ? printf(GREEN"~ OK\n\n"DEFAULT):printf(RED"==> NOK <==\n\n"DEFAULT);

	printf(PURPLE"- TEST 10.2: flag_i (unsigned signed int - sign exception) -\n"DEFAULT);
	x = ft_printf("flag_+6i(0x1092): |%+6i| - flag_+06i: |%+06i| - flag_ 05i: |% 05i| - flag_+.3i: |%+.3i| - flag_013i: |%012i| - flag_07i: |%07i| - flag_+05i: |% 05i| - flag_ .8i: |% .8i|\n", 0x1092,  0x1092, 42, 42420, -2147483647, -32768, 1, 2147483647);
	y = printf("flag_+6i(0x1092): |%+6i| - flag_+06i: |%+06i| - flag_ 05i: |% 05i| - flag_+.3i: |%+.3i| - flag_013i: |%012i| - flag_07i: |%07i| - flag_+05i: |% 05i| - flag_ .8i: |% .8i|\n", 0x1092,  0x1092, 42, 42420, -2147483647, -32768, 1, 2147483647);
	( x == y) ? printf(GREEN"~ OK\n\n"DEFAULT):printf(RED"==> NOK <==\n\n"DEFAULT);

	printf(PURPLE"- TEST 11: divers -\n"DEFAULT);
	x = ft_printf("%%%dtexte-flag_s:%s%%**%s**-d%%0*d%-12s0*@\n", 4200, "Salut", "%%", "-12");
	y = printf("%%%dtexte-flag_s:%s%%**%s**-d%%0*d%-12s0*@\n", 4200, "Salut", "%%", "-12");
	( x == y) ? printf(GREEN"~ OK\n\n"DEFAULT):printf(RED"==> NOK <==\n\n"DEFAULT);

	return(0);
}
