#include "../ex04/ft_strs_to_tab.c"
#include "../ex05/ft_show_tab.c"
#include <stdio.h>

int main()
{
	char *strs[6];
	strs[0] = "Hello";
	strs[1] = "World";
	strs[2] = "But";
	strs[3] = "Why";
	strs[4] = "";
	strs[5] = "uwu";
	
	ft_show_tab( ft_strs_to_tab(6, strs) );
	ft_show_tab(NULL);
	return EXIT_SUCCESS;
}
