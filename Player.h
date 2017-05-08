#ifndef PLAYER_H
#define PLAYER_H

#include "Hand.h"
#include "deck.h"

class Player
{
public:
	Player();
	Player(Deck deck);
	void AnotherCard();
	void ViewCards();
	bool won;
	bool lost;
protected:
	Hand m_hand;
	bool canGetCards;
	int m_score;
};

#endif
