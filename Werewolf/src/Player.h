#pragma once
#include <string>
#include "Role.h"

class Player {
public:
	Player();
	Player(std::string name, Role role);

	std::string name;
	Role role;

	void setRole(Role newRole);
	Role getRole();


private:

};