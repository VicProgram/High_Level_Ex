
char	to_low(char c)
{
	if (c >= 'A' && c <= 'Z')
		return c += 32;
	return (c);
}

void	get_digit(char c, int dbase)
{
	int	maxd;
	if ((str_base >= 10))
		maxd = dbase + '0';
	else
		maxd = dbase - 10 + 'a';
	if (c >= '0' && c <= '9' && c <= maxd)
		return (c - '0');
	else if (c >= 'a' && c <= 'f' && c <= maxd)
		return (c - 10 + 'a');
	else
		return (-1);
}

int ft_atoi_base(const char *str, int str_base)
{
	int	res = 0, sign = 1, digit;

	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while ((digit = get_digit(to_low(*str), str_base)) >= 0)
	{
		res = res * 10 + (digit * sign);
		str++;
	}
	return (res)
}