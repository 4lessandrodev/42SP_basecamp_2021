char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				c;
	int				dest_c;
	unsigned int	src_c;

	c = 0;
	dest_c = 0;
	src_c = 0;
	while (dest[dest_c] != '\0')
	{
		dest_c++;
	}
	c += dest_c;
	while (src_c < nb && src[src_c] != '\0')
	{
		dest[c] = src[src_c];
		c++;
		src_c++;
	}
	dest[c] = '\0';
	return (dest);
}
