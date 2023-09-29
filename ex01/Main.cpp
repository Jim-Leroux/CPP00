/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jileroux <jileroux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:47:17 by jileroux          #+#    #+#             */
/*   Updated: 2023/09/29 16:29:49 by jileroux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <limits>

void    fill(Phonebook& PB) {

    std::cout << "Filling your phonebook with some ramdom guys. . ." << std::endl;
    PB.AddContact("Dylan", "Barthet", "Didou des calanques", "09873829", "Danse la panceta");
    PB.AddContact("Ines", "Houdin", "Soso maness", "456789876", "Aime les huitres");
    PB.AddContact("Ramzi", "Remini", "OUI", "0987", "Score de 9870 sur Guitar Hero");
    PB.AddContact("Mathieu", "Rigal", "Petite sasa", "1234", "Fan du PSG (la hchouma)");
    PB.AddContact("Marianne", "Arsenault", "PTDR T KI ?", "8786688", "A porter un pull Wankil a son mariage");
    PB.AddContact("Irene", "Stuart", "Didou des calanques", "111111111", "A voté le Z (la hchouma * 1000)");
    PB.AddContact("Regis", "Leclere", "Le Regis prefere de ton Regis prefere", "0466759897", "Box Box...");
    PB.AddContact("Coline", "Trouve", "Coco Caline", "0630745787", "a jouer dans Aladin 2");
}

std::string	CheckInput(std::string str)
{
	int	size;

	size = str.size();
	if (size >= 10)
	{
		str[size] = '.';
		str[size + 1] = '\0';
	}

	return (str);
}

int	main()
{
	std::string	cmd;
	Phonebook	PB;
	fill(PB);
	std::cout << "Welcome to Phonebook" << std::endl;

	while (true)
	{
		std::cout << "Chose a command : SEARCH | ADD | EXIT" << std::endl;
		std::getline(std::cin, cmd);
		if (std::cin.eof())
			return(std::cout << "END OF FILE", 0);
		if (cmd == "")
			std::cout << "No entry" << std::endl;
		if (cmd == "ADD")
			if (PB.GetUserInfo())
				return (1);
		if (cmd == "SEARCH" && PB.Get_nbContact() < 0) {
			std::cout << "Phonebook is empty" << std::endl;
		} else if (cmd == "SEARCH" && PB.Get_nbContact() >= 0) {
    		if (PB.DisplayAllContact() == 1) {
        		return 1;
    		} else {
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}

		if (cmd == "EXIT")
			return (std::cout << "EXIT", 0);
	}
	return (0);
}
