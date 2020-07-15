# include "Sorcerer.hpp"
# include "Victim.hpp"
# include "Peon.hpp"

// Derived class for tests
class UltimatePeon : public Victim {
  public:
		UltimatePeon(std::string name) : Victim(name) {std::cout << "Ultimate Zeg zeg zeg." << std::endl;};
		virtual ~UltimatePeon() {std::cout << "Ultimate Bleuark..." << std::endl;};

		void	getPolymorphed() const {std::cout << this->getName() << " has been turned into an ULTIMATE pony!" << std::endl;};
};

class Noob : public Victim {
  public:
		Noob(std::string name) : Victim(name) {std::cout << "I..will..help.." << std::endl;};
		virtual ~Noob() {std::cout << "Uselesss..." << std::endl;};

		void	getPolymorphed() const {std::cout << this->getName() << " has been turned into .. dirt!" << std::endl;};
};

int		main(void)
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
  UltimatePeon zeubi("Zeubi");
  Noob noob("Noob");
  // Sorcerer test; // not working without parameters

	std::cout << robert << jim << joe;
  jim.getPolymorphed();
	robert.polymorph(jim);
	robert.polymorph(joe);

  std::cout << noob;
  robert.polymorph(noob);

  std::cout << zeubi;
  robert.polymorph(zeubi);

  Peon cloneJoe(joe);
  std::cout << cloneJoe;

  Victim cloneJim(jim);
  std::cout << cloneJim;
  cloneJim = joe;
  std::cout << cloneJim;

  Sorcerer cloneRobert(robert);
  std::cout << cloneRobert;

  std::cout << "\nHeap : \n" << std::endl;

  Peon *paysan = new Peon("paysan");
  paysan->getPolymorphed();
  delete paysan;
  std::cout << "\n";
  return 0;
}
