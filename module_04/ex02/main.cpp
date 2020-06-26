#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"


int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;

	ISquad	*vlc2 = new Squad;

	vlc->push(bob);
	vlc->push(jim);
	vlc2->push(jim);
	// vlc2 = vlc;
	std::cout << "vlc 2 " << std::endl;
	for (int i = 0; i < vlc2->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc2->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	vlc2 = vlc;
	std::cout << "vlc" << std::endl;
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
	while (1);
	return 0;
}
