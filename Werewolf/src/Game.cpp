#include "Game.h"

Game::Game(unsigned int numPlayers) {
	this->numPlayers = numPlayers;
}

Game::Game(unsigned int numPlayers, std::vector<std::string> excludedRoles) {
	this->numPlayers = numPlayers;
	this->excludedRoles = excludedRoles;
}

void Game::randPlayers(unsigned int amount) {
	if (amount < 3) {
		std::cout << "Not enough players." << std::endl;
		return;
	}
	else {
		// TODO: set amount of each role type based on num of players.
		
	}
}

int Game::getRandInt(int num1, int num2) {
	srand(time(NULL)); // random seed

	return rand() % num2 + num1;
}
