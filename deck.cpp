/*************************************************************
* Author:			Christopher Bloom
* Filename:			deck.cpp
* Date Created:		03/09/17
**************************************************************/
#include <ctime>
#include <stdlib.h>
#include "deck.h"

const int SHUFFLE_AMOUNT = 100000;	//times to shuffle deck
const int DECK_SIZE = 52;			//size of deck
const int RANK_MAX = 14;			
const int SUIT_MAX = 7;

/**********************************************************************
* Purpose:	Default Constructor
*			Initializes the 52-card Deck to 1 of each rank & suit
*
* Precondition:
*			m_Deck array is empty
*
* Postcondition:
*			m_Deck array now filled with one of each "card"
*
************************************************************************/
Deck::Deck()
{
	int count = 0;	// 0 - 51

	// Initialize cards in array to numerical and suit-sorted order
	for (int i = 3; i < SUIT_MAX; ++i)
	{
		for (int j = 1; j < RANK_MAX; ++j)
		{
			m_Deck[count].SetRank(static_cast<Rank>(j));
			m_Deck[count].SetSuit(static_cast<Suit>(i));
			count++;
		}
	}
}

/**********************************************************************
* Purpose:	Scrambles the cards order from numerical to random order
*
* Precondition:
*			m_Deck filled with cards sorted by number and suit
*
* Postcondition:
*			m_Deck now randomly scrambled, no longer sorted
*
************************************************************************/
void Deck::Shuffle()
{
	m_current_card = 0;

	// new seed for random generator
	srand(time(NULL));

	int randomCard1, 
		randomCard2, 
		shuffleCount = 0;

	Rank tempRank;
	Suit tempSuit;
	
	//shuffle deck 100,000 times for randomness
	while (shuffleCount < SHUFFLE_AMOUNT)
	{
		randomCard1 = rand() % DECK_SIZE;
		randomCard2 = rand() % DECK_SIZE;

		tempRank = m_Deck[randomCard1].GetRank();
		tempSuit = m_Deck[randomCard1].GetSuit();

		m_Deck[randomCard1].SetRank( m_Deck[randomCard2].GetRank() );
		m_Deck[randomCard1].SetSuit( m_Deck[randomCard2].GetSuit() );

		m_Deck[randomCard2].SetRank(tempRank);
		m_Deck[randomCard2].SetSuit(tempSuit);

		shuffleCount++;
	}
}

/**********************************************************************
* Purpose:	"Deals" one card out of the 52-card deck
*			Picks one card and returns the card
* Precondition:
*			m_Deck is filled with sorted data before Shuffle
*			m_Deck is filled with randomly ordered data after Shuffle
************************************************************************/
Card Deck::Deal()
{
	int deal = m_current_card;

	m_current_card++;

	return m_Deck[deal];
}