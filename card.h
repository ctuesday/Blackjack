/*************************************************************
* Author:			Christopher Bloom
* Filename:			card.h
* Date Created:		03/09/17
**************************************************************/
#ifndef CARD_H
#define CARD_H

// UDT to handle rank of the card
enum Rank
{
	ACE = 1, DEUCE, TREY, FOUR, FIVE, 
	SIX, SEVEN, EIGHT, NINE, TEN, 
	JACK, QUEEN, KING
};

// UDT to handle suit of card
enum Suit
{
	HEARTS = 3, DIAMONDS, CLUBS, SPADES
};

/************************************************************************
* Class: Card
*
* Purpose: This class creates a single object that contains a Suit and a 
*     Rank type. 
*
* Manager functions:
*		Card()
*			Default Constructor
*	    Card(Rank rank, Suit suit)
*			Constructor
*				Takes a Rank and a Suit and initializes the base members 
*				to the passed values.
*
* Methods:
*		void Display()
*			Displays a cards Rank and Suit
*		void SetRank(Rank rank)
*			Sets a card's Rank to the passed Rank
*		void SetSuit(Suit suit)
*			Sets a card's suit to the passed Suit
*		Rank GetRank()
*			Retrieves a card's Rank
*		Suit GetSuit()
*			Retrieves a card's Suit
*************************************************************************/

class Card
{
	public:
		Card();
		Card(Rank rank, Suit suit);
		void Display();
		void SetRank(Rank rank);
		void SetSuit(Suit suit);
		Rank GetRank();
		Suit GetSuit();

	private:
		Suit m_suit;
		Rank m_rank;
};
#endif