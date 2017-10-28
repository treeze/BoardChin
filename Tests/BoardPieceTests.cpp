#include "stdafx.h"
#include "gtest/gtest.h"

#include "BoardPieceTests.h"
#include "BoardPiece.h"
#include "Coin.h"

TEST_F(BoardPieceTests, checkIfBoardPieceCanBeCreated)
{
	ASSERT_NO_THROW(Board::BoardPiece piece);
}

TEST_F(BoardPieceTests, checkIfWeCanPutCoinOnTheBoard)
{
	Board::BoardPiece piece;

	ASSERT_NO_THROW(piece.Cover(std::make_unique<Board::Coin>()));
	ASSERT_ANY_THROW(piece.Cover(std::make_unique<Board::Coin>()));
}



