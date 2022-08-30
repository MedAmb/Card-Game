#ifndef GAME_HPP
#define GAME_HPP

#include "../CardDeck/CardDeck.hpp"
#include "../Player/Player.hpp"

#include <vector>

namespace Game
{
    class Game
    {
    public:
        ~Game();
        static void startGame(int argc, char *argv[]);
        void prepareGame(int numberOfPlayers);
        void playGame();
        void showScore();

    private:
        Game();
        std::vector<Player> m_Players;
        std::shared_ptr<CardDeck> m_CardDeck;
        bool m_Playing;
    };
}
#endif // GAME_HPP