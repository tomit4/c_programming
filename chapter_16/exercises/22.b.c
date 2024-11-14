enum chess_pieces { KING, QUEEN, ROOK, BISHOP, KNIGHT, PAWN };

int main(void)
{
	const int piece_value[6] = {[KING] = 200, [QUEEN] = 9,	[ROOK] = 5,
				    [BISHOP] = 3, [KNIGHT] = 3, [PAWN] = 1};
	return 0;
}
