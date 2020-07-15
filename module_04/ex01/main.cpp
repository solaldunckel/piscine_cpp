#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Enemy.hpp"
#include "Character.hpp"

class SniperRifle : public AWeapon
{
	public:
		SniperRifle() : AWeapon("Sniper Rifle", 10, 35) {};
		virtual ~SniperRifle() {};

		void	attack() const {std::cout << "* BIM BAM BOOM *" << std::endl;};
};

class CoronaMutant : public Enemy
{
	public:
		CoronaMutant() : Enemy(140, "Corona Mutant") {std::cout << "I will contaminate the universe!" << std::endl;};
		virtual ~CoronaMutant() {};
};

int main()
{
	Character* me = new Character("me");
	std::cout << *me;
	Enemy* b = new RadScorpion();
  Enemy* c = new SuperMutant();

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

  AWeapon* sr = new SniperRifle();

  Enemy* coco = new CoronaMutant();

	me->equip(pr);
	std::cout << *me;

  me->equip(sr);
  std::cout << "HP before : " << c->getHP() << std::endl;
  me->attack(c);
  std::cout << "HP after : " << c->getHP() << std::endl;
  me->attack(coco);
	std::cout << *me;

	me->equip(pf);
	me->attack(b);
	std::cout << *me;

	me->equip(pr);
	std::cout << *me;

	me->attack(b);
	std::cout << *me;

	me->attack(NULL);
  std::cout << "HP before : " << b->getHP() << std::endl;
  me->attack(b);
  std::cout << "HP after : " << b->getHP() << std::endl;
  me->recoverAP();
  me->attack(coco);
	std::cout << *me;
	return 0;
}
