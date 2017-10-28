#include "stdafx.h"
#include "BoardPiece.h"

#include "Coin.h"

namespace Board
{
	void BoardPiece::Cover(std::unique_ptr<Coin> coin)
	{
		if (m_Coin != nullptr)
		{
			throw(std::exception("BoardPiece::putCoin - coin exist!"));
		}

		m_Coin = move(coin);
	}

	std::unique_ptr<Coin> BoardPiece::getCoin()
	{
		if (m_Coin == nullptr)
		{
			throw(std::exception("BoardPiece::getCoin - coin doesn't exist!"));
		}

		return move(m_Coin);
	}
}