#include <stdlib.h>

size_t	ft_strlen(const char *str);

char	*ft_strdup(const char *s1)
{
	size_t	n;
	char	*newone;
	int		i;

	n = ft_strlen(s1);
	newone = malloc((n + 1) * sizeof(char));
	if (newone == NULL)
	{
		return (newone);
	}
	i = 0;
	while (i < n)
	{
		newone[i] = s1[i];
		i++;
	}
	newone[n] = 0;
	return (newone);
}