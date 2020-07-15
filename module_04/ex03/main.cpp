# include "AMateria.hpp"
# include "ICharacter.hpp"
# include "IMateriaSource.hpp"
# include "Character.hpp"
# include "Cure.hpp"
# include "Ice.hpp"
# include "MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
  AMateria* main;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
  main = tmp;

	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
  std::cout << "materia exp: " << main->getXP() << std::endl;
  me->use(1, *bob);
  std::cout << "materia exp: " << main->getXP() << std::endl;
  me->use(2, *bob);
  me->unequip(1);
  me->use(1, *bob);
  me->equip(main);
  me->use(1, *bob);
  std::cout << "materia exp: " << main->getXP() << std::endl;

  Character Jim("Jimmy");
	tmp = src->createMateria("ice");
	Jim.equip(tmp);
	tmp = src->createMateria("cure");
	Jim.equip(tmp);

  Character newJim(Jim);
  newJim = Jim;
  Jim.use(1, Jim);

	delete bob;
	delete me;
	delete src;
	return 0;
}
