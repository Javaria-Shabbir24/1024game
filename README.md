# 1024 Game

This is a simple implementation of the 1024 game, a variant of the popular 2048 game, written in C++. The game involves moving and merging numbers on a 4x4 grid to reach the number 1024.

## How to Play

- The game is played on a 4x4 grid with numbered tiles that slide smoothly when a player moves them using the arrow keys.
- Each turn, a new tile will randomly appear in an empty spot on the board with a value of either 1 or 2.
- Tiles slide as far as possible in the chosen direction until they are stopped by either another tile or the edge of the grid.
- If two tiles of the same number collide while moving, they will merge into a tile with the sum of their values.
- The goal is to create a tile with the number 1024.

## Instructions

1. Use the arrow keys to move the tiles:
   - **Left Arrow (←)**: Move tiles left.
   - **Right Arrow (→)**: Move tiles right.
   - **Up Arrow (↑)**: Move tiles up.
   - **Down Arrow (↓)**: Move tiles down.
2. Press the `q` key at any time to quit the game.
3. The game ends when you successfully create a tile with the number 1024.

### Prerequisites

- C++ compiler like visual studio

