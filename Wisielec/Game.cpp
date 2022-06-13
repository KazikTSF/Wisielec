#include "Game.h"
using namespace std;
Game::Game(string pass)
{
    password = "";
    for(int i = 0; i < pass.size(); i++)
    {
        password += pass[i];
        password += " ";
    }
    string s = "";
    for each (char c in pass)
    {
        if (isalpha(c))
            s += "_";
        else
            s += c;
        s += " ";
    }
    showed = s;
}

std::string Game::getPass()
{
    return password;
}

std::string Game::getShowed()
{
    return showed;
}

int Game::gameState()
{
    if (showed == password)
        return 1;
    if (failCount == 10)
        return 2;
    return 0;
}

bool Game::check(char c)
{
    for(int i = 0; i < password.size(); i++)
    {
        if (c == password[i])
        {
            for (int j = i; j < password.size(); j++)
            {
                if (password[j] == c)
                    showed[j] = c;
            }
            return true;
        }
    }
    failCount++;
    return false;
}

int Game::getFailCount()
{
    return failCount;
}
