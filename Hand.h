#ifndef HAND_H
#define HAND_H

#include "card.h"

class Hand
{
public:
	void Display();
	void Init(Card startCard1, Card startCard2);
	void DisplayAsDealer();
	void GetNumCards();
	void GetTotalValue();
private:
	Card m_hand;
};

#endif
