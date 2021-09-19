#ifndef CPP04_BRAIN_HPP
#define CPP04_BRAIN_HPP

#include <string>

class Brain {
private:
	std::string ideas_[100];

public:
	Brain();

	~Brain();

	Brain(Brain const &rhs);

	Brain &operator=(Brain const &rhs);
};


#endif //CPP04_BRAIN_HPP
