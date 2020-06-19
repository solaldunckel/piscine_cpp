/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 16:13:24 by sdunckel          #+#    #+#             */
/*   Updated: 2020/06/17 16:38:44 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include "Victim.hpp"

class Sorcerer {
	private:
		std::string	_name;
		std::string	_title;
	public:
		Sorcerer();
		Sorcerer(std::string name, std::string title);
		~Sorcerer();

		Sorcerer(const Sorcerer &copy);
		Sorcerer &operator=(const Sorcerer &copy);

		std::string	getName() const;
		std::string	getTitle() const;
		void		polymorph(Victim const &victim) const;
};

std::ostream	&operator<<(std::ostream &out, Sorcerer const &sorcerer);

#endif
