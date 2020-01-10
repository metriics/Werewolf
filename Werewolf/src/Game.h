#pragma once
#include "Player.h"
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <iostream>

class Game {
public:
	Game();
	Game(unsigned int numPlayers);
	Game(unsigned int numPlayers, std::vector<std::string> excludedRoles);

	unsigned int numPlayers;
	std::vector<Player> players;
	std::vector<std::string> testNames = {"Burt", "Bob", "Marley", "Josh", "Jake", "Jared", "Frank", "Greg", "Leonard", "Carl"};
	std::vector<std::string> roleNameList = {"Villager","Werewolf","Seer","Witch","Cupid","Hunter"}; // See roles list below
	std::vector<std::string> excludedRoles;

	void assignRoles();
	void randPlayers(unsigned int amount); // test func
	int getRandInt(int num1, int num2);

private:

};

/*
########## ROLES ##########
Villager: Can't do anything special.
Werewolf: Called once per night and all vote on who to kill.
Seer: Called once per night and can select one player to find out what their role is.
Witch: Called once per night to chose to use their items. Health potion revives any player, poison kills any player. Inlcudes witch themselves.
Cupid: Called only the first night. Choses two players to 'marry'. If either of the players dies, so does their partner.
Hunter: Not called at night. Once dead, can chose a player to kill with their hunting rifle before they pass away. This happens when their death is announced.
*/