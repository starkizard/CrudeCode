#auth: starkizard
#question at: https://www.codingame.com/ide/puzzle/the-descent
import sys
import math

# The while loop represents the game.
# Each iteration represents a turn of the game
# where you are given inputs (the heights of the mountains)
# and where you have to print an output (the index of the mountain to fire on)
# The inputs you are given are automatically updated according to your last actions.


# game loop
while True:
    l=[]
    for i in range(8):
        l.append(int(input()))
    print(l.index(max(l)))
    
    # Write an action using print
    # To debug: print("Debug messages...", file=sys.stderr)

    # The index of the mountain to fire on.

