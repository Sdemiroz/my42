/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemiroz <sdemiroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 13:59:10 by sdemiroz          #+#    #+#             */
/*   Updated: 2024/03/13 05:10:03 by sdemiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int a)
{
	if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
	{
		return (1);
	}
	return (0);
}

// int main(void)
// {
//     char a;
//     a = 'a';
//     printf("%d", ft_isalpha(a));
//     return(0);
// }