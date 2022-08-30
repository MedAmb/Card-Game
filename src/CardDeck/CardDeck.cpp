#include "CardDeck.hpp"

#include <algorithm>
#include <random>

namespace Game
{
    std::shared_ptr<CardDeck> CardDeck::m_Instance = nullptr;

    CardDeck::CardDeck()
    {
        for (unsigned int i = 0; i < m_Cards.size(); i++)
        {
            m_Cards[i] = Card(static_cast<CardType>(i % 4), static_cast<CardValue>(i / 4));
        }
    }

    std::shared_ptr<CardDeck> CardDeck::getInstance()
    {
        if (m_Instance == nullptr)
        {
            m_Instance.reset(new CardDeck());
        }
        return m_Instance;
    }

    void CardDeck::shuffle()
    {
        std::random_device rd;
        std::mt19937 g(rd());
        std::shuffle(m_Cards.begin(), m_Cards.end(), g);

        while (!m_CardsQueue.empty())
        {
            m_CardsQueue.pop();
        }
        for (auto &card : m_Cards)
        {
            m_CardsQueue.push(card);
        }
    }

    std::optional<Card> CardDeck::deal()
    {
        if (!m_CardsQueue.empty())
        {
            Card card = m_CardsQueue.front();
            m_CardsQueue.pop();
            return card;
        }
        return std::nullopt;
    }
}