#include "Player.h"

Player::Player() {
}

Player::Player(std::string name, Role role) {
	this->name = name;
	this->role = role;
}

void Player::setRole(Role newRole) {
	this->role = newRole;
}

Role Player::getRole() {
	return this->role;
}
