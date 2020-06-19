/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 16:13:24 by sdunckel          #+#    #+#             */
/*   Updated: 2020/06/17 16:51:21 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>

class Victim {
	private:
		std::string _name;
	public:
		Victim();
		Victim(std::string name);
		~Victim();

		Victim(const Victim &copy);
		Victim &operator=(const Victim &copy);

		virtual void		getPolymorphed() const;
		std::string			getName() const;
};

std::ostream	&operator<<(std::ostream &out, Victim const &victim);

#endif
