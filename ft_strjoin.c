#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	size_t	i;
	size_t	j;
	char	*new_str;

	i = 0;
	j = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	new_str = malloc(len + 1);
	if (!new_str)
		return (NULL);
	while (s1[i] != '\0')
	{
		new_str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		new_str[j + i] = s2[j];
		j++;
	}
	new_str[i + j] = '\0';
	return (new_str);
}
