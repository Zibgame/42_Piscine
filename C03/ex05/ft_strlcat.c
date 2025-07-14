unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	 i;
	unsigned int	j;
	unsigned int	src_len;
	unsigned int	dest_len;

	i = 0;
	j = 0;
	dest_len = 0;
	src_len = 0;
    	while (dest[dest_len] != '\0')
        	dest_len++;
    	while (src[src_len] != '\0')
   	    	src_len++;
	if (size <= dest_len)
		return size + src_len;
	i = dest_len;
	while (i < size -1 && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return dest_len + src_len;
}

//'salut0'
//size = 6
//'toi0'
//'sa vs rien faire '
