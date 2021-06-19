char	*ft_strcat(char *dest, char *src)
{
	int	c;
	int	dest_c;
	int	src_c;

	c = 0;
	dest_c = 0;
	src_c = 0;
	while (dest[dest_c] != '\0')
	{
		dest_c++;
	}
	c += dest_c;
	while (src[src_c] != '\0')
	{
		dest[c] = src[src_c];
		c++;
		src_c++;
	}
	dest[c] = '\0';
	return (dest);
}
