/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 03:42:07 by sdunckel          #+#    #+#             */
/*   Updated: 2019/12/07 04:08:27 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.class.hpp"

int		main()
{
	Account		solal(0);
	Account		teha(0);
	Account		lalo(0);
	Account		zephyr(0);

	solal.makeDeposit(124);
	teha.makeDeposit(1);
	solal.displayAccountsInfos();
	teha.makeWithdrawal(165);
	solal.displayAccountsInfos();
	teha.displayStatus();
	return (0);
}
