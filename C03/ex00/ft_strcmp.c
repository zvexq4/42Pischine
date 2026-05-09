/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hciftci <hciftci@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 22:26:40 by hciftci           #+#    #+#             */
/*   Updated: 2026/05/08 22:34:02 by hciftci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//strcmp karşılaştırma fonksiyonu 
//eğer s1 büyükse pozitif 
//küçük ise negatif değer döndürür.
int ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while(s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	return(s1[i] - s2[i]);
}

int main(void)
{
	printf("%d\n",ft_strcmp("meraba","meraba"));
	printf("%d\n",ft_strcmp("hamza","zameraba"));
	printf("%d\n",ft_strcmp("deneme",""));
}