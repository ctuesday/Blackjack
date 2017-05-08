/*************************************************************
* Author:			Christopher Bloom
* Filename:			deck.h
* Date Created:		03/09/17
**************************************************************/
#ifndef DECK_H
#define DECK_H
#include "card.h"

/************************************************************************
* Class: Deck
*
* Purpose: This class creates a single object that contains a Card object 
*     and a int type to track the current card.
*
* Manager functions:
*		Deck()
*			Default Constructor:
*				Instatiates an array of 52 card objects
*
* Methods:
*		void Shuffle()
*			Displays a cards Rank and Suit
*		Card Deal()
*			Deals a single card out of the 52-size Card array 
*************************************************************************/
class Deck
{
	public:
		Deck();
		void Shuffle();
		Card Deal();

	private:
		Card m_Deck[52];
		int m_current_card = 0;
};
#endif