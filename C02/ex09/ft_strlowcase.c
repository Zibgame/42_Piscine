/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 18:08:26 by zcadinot          #+#    #+#             */
/*   Updated: 2025/07/12 18:25:10 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	bool;
	
	i = 0;
	bool = 1;
	while (str[i] != '\0')
	{
		if (bool)
			str[i] = str[i] - 32;
		if (str[i] == 32)
			bool = 1;
		else
			bool = 0;
		i++;
	}
	return str;
}



#include <unistd.h>
int main()
{
	int i;
	char str[] = "salut sa vas";

	ft_strcapitalize(str);
	i = 0;
	while(str[i] != '\0')
	{
		write(1,&str[i],1);
		i++;
	}
	return 0;
}
