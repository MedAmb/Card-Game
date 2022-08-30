#include "Game.hpp"

#include <iostream>

namespace Game
{
    void Game::startGame(int argc, char *argv[])
    {
        if (argc != 2)
        {
            std::cout << "Usage: ./Game <number of players>" << std::endl;
            return;
        }
        int numberOfPlayers = std::stoi(argv[1]);
        if (numberOfPlayers < 2 || numberOfPlayers > 6)
        {
            std::cout << "Number of players must be between 2 and 6" << std::endl;
            return;
        }
        Game game;
        game.m_Playing = true;
        while (game.m_Playing)
        {
            game.prepareGame(numberOfPlayers);
            game.playGame();
            game.showScore();
            game.m_Playing = false;
        }
    }
    Game::~Game()
    {
    }
    void Game::prepareGame(int numberOfPlayers)
    {
        m_CardDeck = CardDeck::getInstance();
        m_Players.clear();
        for (int i = 0; i < numberOfPlayers; i++)
        {
            Player player;
            player.setName("Player " + std::to_string(i + 1));
            player.setScore(0);
            m_Players.push_back(player);
        }
        m_CardDeck->shuffle();
    }
    void Game::playGame()
    {
        while (!m_CardDeck->empty())
        {
            for (auto &player : m_Players)
            {
                auto card = m_CardDeck->deal();
                if (card.has_value())
                {
                    player.setHand(card.value());
                }
            }
            auto roundWinner = std::max(m_Players.begin(), m_Players.end(), [](const Player &a, const Player &b)
                                                { return a.getHand() < b.getHand(); });

            roundWinner->setScore(roundWinner->getScore() + 1);
        }
    }

    void Game::showScore()
    {
        /*auto winner = std::max(m_Players.begin(), m_Players.end(), [](const Player &a, const Player &b)
                                       { return a.getScore() < b.getScore(); });

        std::cout << "The winner is " << winner->getName() << " with " << winner->getScore() << " points" << std::endl;*/
    }
}