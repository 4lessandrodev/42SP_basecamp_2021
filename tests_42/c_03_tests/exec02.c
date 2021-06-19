#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "ex02/ft_strcat.c"

int	main(void)
{
	char *s1;
	char *s2;

	s1 = calloc(50, sizeof(char));
	s2 = calloc(50, sizeof(char));
	
	printf("================================EX02===================================\n");
	printf("=======================================================================\n\n");
	strcpy(s1, "This is Dest: ");
	strcpy(s2, "This is Src.");
	
    strcat(s1, s2);
    printf("		strcat:		%s\n",s1);
	
	strcpy(s1, "This is Dest: ");
	strcpy(s2, "This is Src.");
	
	ft_strcat(s1, s2);
	printf("		ft_strcat:	%s\n\n",s1);
	printf("================================FIM====================================\n");
	printf("=======================================================================\n");
	free(s1);
	free(s2);
	return (0);
}
