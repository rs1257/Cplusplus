#include "Skills.h"

#include <string>

//an evaluator uses the ID to do an effect.
//need the inverse of all effects so i can remove
int Skills::ID_count = 0;

Skills::Skills(std::string name, std::string description, int effect) {
	Skills::ID = ID_count;
	Skills::name = name;
	Skills::description = description;
	Skills::effect = effect;
	Skills::ID_count++;
}
