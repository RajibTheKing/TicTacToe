import numpy as np
import random
from enum import Enum

class Player(Enum):
    X = 1
    O = 2
    EMPTY = 0

class TicTacToe:
    def __init__(self, size = 30):
        self.size = size
        self.board = np.zeros((size, size), dtype=int)
        self.reset()

    def reset(self):
        self.board.fill(Player.EMPTY.value)
        self.current_player = Player.X
        self.winner = None
        self.game_over = False
        return self.board

    def get_valid_moves(self):
        return np.argwhere(self.board == Player.EMPTY.value)

    def make_move(self, row, col):
        if self.game_over or self.board[row, col] != Player.EMPTY.value:
            return False

        self.board[row, col] = self.current_player.value
        if self.check_win(row, col):
            self.winner = self.current_player
            self.game_over = True
        elif len(self.get_valid_moves()) == 0:
            self.game_over = True
        else:
            self.switch_player()

        return True

    def switch_player(self):
        self.current_player = Player.O if self.current_player == Player.X else Player.X

    def check_win(self, row, col):
        direction_vectors = [
            (0, 1),  # Horizontal -
            (1, 0),  # Vertical |
            (1, 1),  # Diagonal \
            (1, -1)  # Diagonal /
        ]

        player = self.current_player.value

        for dr, dc in direction_vectors:
            count = 1

            # Check in the positive direction
            r, c = row + dr, col + dc
            while 0 <= r < self.size and 0 <= c < self.size and self.board[r, c] == player:
                count += 1
                r += dr
                c += dc

            # Check in the negative direction
            r, c = row - dr, col - dc
            while 0 <= r < self.size and 0 <= c < self.size and self.board[r, c] == player:
                count += 1
                r -= dr
                c -= dc

            if count >= 5:
                return True
        return False

    def render(self):
        symbols = {Player.X.value: 'X', Player.O.value: 'O', Player.EMPTY.value: '.'}

        for row in self.board:
            print(" ".join(symbols[cell] for cell in row))
        print(f"Current player: {self.current_player.name}")
        print()


def main():
    game = TicTacToe(size=6)
    game.render()

    while not game.game_over:
        valid_moves = game.get_valid_moves()
        move = random.choice(valid_moves) if valid_moves.size > 0 else None

        if move is not None:
            row, col = move
            game.make_move(row, col)
            game.render()

    if game.winner:
        print(f"Player {game.winner.name} wins!")
    else:
        print("It's a draw!")
    game.reset()

if __name__ == "__main__":
    main()
