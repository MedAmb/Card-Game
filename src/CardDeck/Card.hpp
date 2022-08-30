#ifndef CARD_HPP
#define CARD_HPP

#include <ostream>

namespace Game
{
    enum class CardType : int
    {
        Invalid = -1,
        Clubs,
        Diamonds,
        Spades,
        Hearts
    };

    enum class CardValue : int
    {
        Invalid = -1,
        One,
        Two,
        Three,
        Four,
        Five,
        Six,
        Seven,
        Eight,
        Nine,
        Ten,
        Jack,
        Queen,
        King,
        Ace,
        Joker
    };

    class Card
    {
    public:
        Card() : m_Type(CardType::Invalid), m_Value(CardValue::Invalid) {}
        Card(CardType type, CardValue value) : m_Type(type), m_Value(value) {}
        Card(const Card &other) = default;
        ~Card() = default;
        Card &operator=(const Card &other);
        CardType getType() const;
        CardValue getValue() const;
        bool operator==(const Card &other) const;
        bool operator!=(const Card &other) const;
        bool operator<(const Card &other) const;
        bool operator>(const Card &other) const;
        bool operator<=(const Card &other) const;
        bool operator>=(const Card &other) const;
        friend std::ostream &operator<<(std::ostream &os, const Card &card);
    private:
        CardType m_Type;
        CardValue m_Value;
    };

}

#endif // CARD_HPP