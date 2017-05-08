/*************************************************************
* Author:			Christopher Bloom
* Filename:			card.cpp
* Date Created:		03/09/17
**************************************************************/
#include <iostream>	//cout, endl
#include <iomanip>	//setw, right
using std::cout;
using std::endl;
using std::setw;
using std::right;
#include "card.h"

//size of a normal deck
const int DECK_SIZE = 52;

//constant array to translate numbers to rank text
const char * RANK_NAME[13] = { "A", "2", "3", "4", "5", 
							  "6", "7", "8", "9", "10", 
							  "J", "Q", "K" };

/**********************************************************************
* Purpose:	Default Constructor
*
* Precondition:
*			m_rank: uninitialized 
*			m_suit: uninitialized
*
************************************************************************/
Card::Card()
{ }

/**********************************************************************
* Purpose:	Constructor
*				
* Precondition:
*			m_rank: uninitialized
*			m_suit: uninitialized
*
* Postcondition:
*			initializes rank to ACE or given value
*			initializes suit to SPADES or given value
*
************************************************************************/
Card::Card(Rank rank = ACE, Suit suit = SPADES)
	: m_rank(rank), m_suit(suit)
{ }

/**********************************************************************
* Purpose:	Displays a cards Rank and Suit in the order
*
* Precondition:
*			m_rank: rank initialized
*			m_suit: suit initialized
*
************************************************************************/
void Card::Display()
{
	cout << setw(2) << right << RANK_NAME[m_rank - 1] << " " 
		<< static_cast<char>(m_suit) << endl;
}

/**********************************************************************
* Purpose:	Stores passed Rank into m_rank
*
* Precondition:
*			m_rank: valid data
*
* Postcondition:
*			m_rank: new data stored from rank
*
************************************************************************/
void Card::SetRank(Rank rank)
{
	m_rank = rank;
}

/**********************************************************************
* Purpose:	Stores passed Suit into m_suit
*
* Precondition:
*			m_suit: valid data
*
* Postcondition:
*			m_suit: new data stored from suit
*
************************************************************************/
void Card::SetSuit(Suit suit)
{
	m_suit = suit;
}

/**********************************************************************
* Purpose:	Retrieves value from m_rank
*
* Precondition:
*			m_rank: valid data
*
************************************************************************/
Rank Card::GetRank()
{
	return m_rank;
}

/**********************************************************************
* Purpose:	Retrieves value from m_suit
*
* Precondition:
*			m_suit: valid data
*
************************************************************************/
Suit Card::GetSuit()
{
	return m_suit;
}
