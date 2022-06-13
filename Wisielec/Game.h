#pragma once
#include <string>
class Game
{
public:
	Game(std::string pass);
	bool check(char);
	int getFailCount();
	std::string getPass();
	std::string getShowed();
	int gameState(); //0 - gramy dalej; 1 - wygrana; 2 - przegrana
private:
	std::string password;
	std::string showed;
	int failCount;
};

