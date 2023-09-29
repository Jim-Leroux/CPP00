/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jileroux <jileroux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:29:42 by jileroux          #+#    #+#             */
/*   Updated: 2023/09/29 16:44:05 by jileroux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <vector>

class Phonebook
{
private:
	int	nbContact;
	Contact contacts[8];
public:
	Phonebook();
	~Phonebook();

	int	AddContact(std::string Fn, std::string Ln, std::string Nn,
	std::string Pn, std::string Ds);
	int	GetUserInfo();
	int	ShowContact(int	i);
	int	ShowAllContact();
	int	Get_nbContact();
	int	DisplayAllContact();
	
	static int	isValidNumber(std::string str);
};

#endif
