/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jileroux <jileroux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:23:06 by jileroux          #+#    #+#             */
/*   Updated: 2023/09/27 15:56:37 by jileroux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Contact
{
private:
	std::string	m_Firstname;
	std::string	m_Lastname;
	std::string	m_Nickname;
	std::string	m_PhoneNumber;
	std::string	m_DarkestSecret;

public:
	Contact();
	~Contact();

	std::string	Get_Firstname() const {
		return m_Firstname;
	}
	std::string	Get_Lastname() const {
		return m_Lastname;
	}
	std::string	Get_Nickname() const {
		return m_Nickname;
	}
	std::string	Get_PhoneNumber() const {
		return m_PhoneNumber;
	}
	std::string	Get_DarkestSecret() const {
		return m_DarkestSecret;
	}

	void	Set_Firstname(std::string value) {
		this->m_Firstname = value;
	}
	void	Set_Lastname(std::string value) {
		this->m_Lastname = value;
	}
	void	Set_Nickname(std::string value) {
		this->m_Nickname = value;
	}
	void	Set_PhoneNumber(std::string value) {
		this->m_PhoneNumber = value;
	}
	void	Set_DarkestSecret(std::string value) {
		this->m_DarkestSecret = value;
	}
};

