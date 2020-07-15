/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 16:13:24 by sdunckel          #+#    #+#             */
/*   Updated: 2020/07/10 15:32:16 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>

class Victim {
	protected:
		std::string _name;
    Victim();

	public:
		Victim(std::string name);
		virtual ~Victim();

		Victim(const Victim &copy);
		Victim &operator=(const Victim &copy);

		virtual void		getPolymorphed() const;
		std::string			getName() const;
    void		setName(std::string name);
};

std::ostream	&operator<<(std::ostream &out, Victim const &victim);

#endif
