#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	int		len = ft_strlen(src);
	char	*dup = (char *)malloc(sizeof(char) * (len + 1));
	if (!dup)
		return (NULL);
	return (ft_strcpy(dup, src));
}

int	ft_atoi(char *str)
{
	int	i = 0;
	int	result = 0;

	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
		return (-1); // Refuser les signes
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (-1); // Retourne -1 si non numérique
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

