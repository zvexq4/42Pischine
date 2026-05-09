/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hciftci <hciftci@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 23:13:51 by hciftci           #+#    #+#             */
/*   Updated: 2026/05/04 23:26:11 by hciftci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int		i;
	
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i]= '\0';
	return (dest);
}

int main(void)
{
	char src[] = "Merhaba Dünya";
	char dest[50];
	ft_strcpy(dest,src);
	printf("%s\n",src);
	printf("%s\n",dest);
}
