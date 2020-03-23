/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 22:21:34 by sdunckel          #+#    #+#             */
/*   Updated: 2020/03/22 22:44:57 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include <iostream>

class Human
{
	private:
		void	meleeAttack(std::string const &target);
		void	rangedAttack(std::string const &target);
		void	intimidatingShout(std::string const &target);
	public:
		void	action(std::string const &action_name, std::string const &target);
};

#endif
