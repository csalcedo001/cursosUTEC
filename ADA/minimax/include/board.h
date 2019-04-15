#ifndef BOARD_H
#define BOARD_H

#include <array>

class Board {
	public:
	typedef std::array<3, std::array<3, char>> board;

	private:
	board table;

	Board();
	Board(board);

	bool validMove();
	bool gameEnded();
	board getBoard();
	void makeMove();
}

