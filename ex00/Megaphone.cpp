/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jileroux <jileroux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 15:00:31 by jileroux          #+#    #+#             */
/*   Updated: 2023/09/24 15:00:32 by jileroux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

int	main(int argc, char **argv)
{
	int		j(0);

	if (argc == 1)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int i = 1; argv[i]; i++)
	{
		j = 0;
		while (argv[i][j])
		{
			argv[i][j] = toupper(argv[i][j]);
			j++;
		}
		cout << argv[i];
	}
	cout << endl;
	return (0);
}
