#ifndef CARDDECK_HPP
#define CARDDECK_HPP

#include "Card.hpp"

#include <memory>
#include <array>
#include <queue>
#include <optional>

namespace Game
{
    class CardDeck
    {
    public:
        static std::shared_ptr<CardDeck> getInstance();
        void shuffle();
        std::optional<Card> deal();
        bool empty() { return m_CardsQueue.empty(); }
    private:
        CardDeck();
        CardDeck(const CardDeck &other) = delete;
        CardDeck &operator=(const CardDeck &other) = delete;
        static std::shared_ptr<CardDeck> m_Instance;
        std::array<Card, 60> m_Cards;
        std::queue<Card> m_CardsQueue;
    };
}


#endif // CARDDECK_HPP