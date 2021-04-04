#! /usr/bin/python3
# #########################################################
# Euler Project : Problem number 15
#
# @author : kajothecoder@gmail.com
# last Modified : 03 Apr. 2021
#
# website : www.github.com/rasoulkajouri
# #########################################################
from typing import Dict, List, Optional, Tuple


def search(length: int, moves: Optional[List[int]] = None,\
           solutions: Optional[Dict[Tuple[int, int], int]] = None) -> int:
    if moves is None:
        moves = [0 ,0]

    assert moves[0] <= length
    assert moves[1] <= length

    if solutions is None:
        solutions = {}

    if moves[0] == length:
        return 1
    elif moves[1] == length:
        return 1
    elif tuple(moves) in solutions:
        return solutions[tuple(moves)]
    else:
        ans0 = search(length, [moves[0]+1, moves[1]], solutions)
        solutions[(moves[0]+1, moves[1])] = ans0

        ans1 = search(length, [moves[0], moves[1]+1], solutions)
        solutions[(moves[0], moves[1]+1)] = ans1

        return ans1 + ans0
    pass # end of the SEARCH function

def main():
    gridSize = 20
    print("The number of whole possible paths are: ", search(gridSize))
    pass

if __name__ == "__main__":
    main()
