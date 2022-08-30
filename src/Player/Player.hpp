#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "../CardDeck/Card.hpp"

#include <string>

namespace Game
{
    class Player
    {
    public:
        Player();
        ~Player();
        void setName(const std::string &name);
        void setScore(const int &score);
        void setHand(const Card &hand);
        const std::string &getName() const;
        const int getScore() const;
        const Card &getHand() const;

    private:
        unsigned int m_Score;
        std::string m_Name;
        Card m_Card;
    };
}
#endif // PLAYER_HPP