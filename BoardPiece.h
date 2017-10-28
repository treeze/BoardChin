#pragma once

#include <memory>

namespace Board
{
	class Coin;

	class BoardPiece
	{
	public:
		virtual ~BoardPiece() = default;

		void Cover(std::unique_ptr<Coin> coin);
		std::unique_ptr<Coin> getCoin();

	private:
		std::unique_ptr<Coin> m_Coin;
	};
}

