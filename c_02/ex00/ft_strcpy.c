int	size_of(char *src)
{
	int	size;

	size = 0;
	while (src[size])
	{
		size++;
	}
	return (size);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	size;
	int	index;

	size = size_of(src);
	index = 0;
	while (index <= size)
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}
