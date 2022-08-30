#include "Player.hpp"

namespace Game
{
    Player::Player()
    {
        m_Score = 0;
        m_Name = "";
        m_Card = Card();
    }
    Player::~Player()
    {
    }
    void Player::setName(const std::string &name)
    {
        m_Name = name;
    }
    void Player::setScore(const int &score)
    {
        m_Score = score;
    }
    void Player::setHand(const Card &hand)
    {
        m_Card = hand;
    }
    const std::string &Player::getName() const
    {
        return m_Name;
    }
    const int Player::getScore() const
    {
        return m_Score;
    }
    const Card &Player::getHand() const
    {
        return m_Card;
    }
}