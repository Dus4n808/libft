#include "libft.h"


void	*ft_calloc(size_t count, size_t size)
{
	void	*bloc;
	size_t	len;

	len = size * count;
	bloc = malloc(len);
	if (!bloc)
		return (NULL);
	ft_bzero(bloc, len);
	return (bloc);
}
