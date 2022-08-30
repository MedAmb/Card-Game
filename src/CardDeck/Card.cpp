#include "Card.hpp"

namespace Game
{
        std::ostream &operator<<(std::ostream &os, const CardType &cardType)
    {
        switch(cardType)
        {
            case CardType::Clubs:
                os << "Clubs";
                break;
            case CardType::Diamonds:
                os << "Diamonds";
                break;
            case CardType::Hearts:
                os << "Hearts";
                break;
            case CardType::Spades:
                os << "Spades";
                break;
        }
        return os;
    }

    std::ostream &operator<<(std::ostream &os, const CardValue &cardValue)
    {
        switch(cardValue)
        {
            case CardValue::One:
                os << "One";
                break;
            case CardValue::Two:
                os << "Two";
                break;
            case CardValue::Three:
                os << "Three";
                break;
            case CardValue::Four:
                os << "Four";
                break;
            case CardValue::Five:
                os << "Five";
                break;
            case CardValue::Six:
                os << "Six";
                break;
            case CardValue::Seven:
                os << "Seven";
                break;
            case CardValue::Eight:
                os << "Eight";
                break;
            case CardValue::Nine:
                os << "Nine";
                break;
            case CardValue::Ten:
                os << "Ten";
                break;
            case CardValue::Jack:
                os << "Jack";
                break;
            case CardValue::Queen:
                os << "Queen";
                break;
            case CardValue::King:
                os << "King";
                break;
            case CardValue::Ace:
                os << "Ace";
                break;
            case CardValue::Joker:
                os << "Joker";
                break;
        }
        return os;
    }

    std::ostream &operator<<(std::ostream &os, const Card &card)
    {
        os << card.getType() << ", " << card.getValue();
        return os;
    }

    Card &Card::operator=(const Card &other)
    {
        m_Type = other.m_Type;
        m_Value = other.m_Value;
        return *this;
    }
    CardType Card::getType() const
    {
        return m_Type;
    }
    CardValue Card::getValue() const
    {
        return m_Value;
    }
    bool Card::operator==(const Card &other) const
    {
        return m_Type == other.m_Type && m_Value == other.m_Value;
    }
    bool Card::operator!=(const Card &other) const
    {
        return !(*this == other);
    }
    bool Card::operator<(const Card &other) const
    {
        return m_Type < other.m_Type || (m_Type == other.m_Type && m_Value < other.m_Value);
    }
    bool Card::operator>(const Card &other) const
    {
        return m_Type > other.m_Type || (m_Type == other.m_Type && m_Value > other.m_Value);
    }
    bool Card::operator<=(const Card &other) const
    {
        return !(*this > other);
    }
    bool Card::operator>=(const Card &other) const
    {
        return !(*this < other);
    }
}