#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"


int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	Squad* vlc = new Squad;
	Squad* vlc2 = new Squad;


	vlc->push(bob);
	vlc->push(jim);
	vlc->push(NULL);

	*vlc2 = *vlc;

	std::cout << vlc->getCount() << " marines" << std::endl;

	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
  vlc->getUnit(3);
  vlc->getUnit(8);
	delete vlc;

	std::cout << vlc2->getCount() << " marines" << std::endl;

	for (int i = 0; i < vlc2->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc2->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc2;
	return 0;
}
