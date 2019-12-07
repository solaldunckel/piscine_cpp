/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 22:31:56 by sdunckel          #+#    #+#             */
/*   Updated: 2019/12/07 02:51:08 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(__CONTACT__)
# define __CONTACT__

	# include <string>

	class	Contact
	{
		public:
			Contact();
			~Contact();
			void create();
			void showSnippet();
			void showFull();
		private:
			std::string firstName;
			std::string lastName;
			std::string nickname;
			std::string login;
			std::string postal;
			std::string email;
			std::string phone;
			std::string birthday;
			std::string meal;
			std::string underwear;
			std::string secret;
			int			index;
			static int	counter;
	};

#endif
