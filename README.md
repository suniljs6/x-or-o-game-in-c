Instructions:-
--
A player can play a perfect game of tic-tac-toe (to win or, at least, draw) if each time it is his turn to play he chooses the first available move from the following list, as used in Newell and Simon's 1972 tic-tac-toe program.[15]

    Win: If the player has two in a row, they can place a third to get three in a row.
    Block: If the opponent has two in a row, the player must play the third themselves to block the opponent.
    Fork: Create an opportunity where the player has two threats to win (two non-blocked lines of 2).
    Blocking an opponent's fork: If there is only one possible fork for the opponent, the player should block it. Otherwise, the player should block any forks in any way that simultaneously allows them to create two in a row. Otherwise, the player should create a two in a row to force the opponent into defending, as long as it doesn't result in them creating a fork. For example, if "X" has two opposite corners and "O" has the center, "O" must not play a corner in order to win. (Playing a corner in this scenario creates a fork for "X" to win.)
    Center: A player marks the center. (If it is the first move of the game, playing on a corner gives the second player more opportunities to make a mistake and may therefore be the better choice; however, it makes no difference between perfect players.)
    Opposite corner: If the opponent is in the corner, the player plays the opposite corner.
    Empty corner: The player plays in a corner square.
    Empty side: The player plays in a middle square on any of the 4 sides.

The first player, who shall be designated "X", has 3 possible positions to mark during the first turn. Superficially, it might seem that there are 9 possible positions, corresponding to the 9 squares in the grid. However, by rotating the board, we will find that in the first turn, every corner mark is strategically equivalent to every other corner mark. The same is true of every edge (side middle) mark. For strategy purposes, there are therefore only three possible first marks: corner, edge, or center. Player X can win or force a draw from any of these starting marks; however, playing the corner gives the opponent the smallest choice of squares which must be played to avoid losing.[16] This might suggest that the corner is the best opening move for X, however another study[17] shows that if the players are not perfect, an opening move in the center is best for X.

The second player, who shall be designated "O", must respond to X's opening mark in such a way as to avoid the forced win. Player O must always respond to a corner opening with a center mark, and to a center opening with a corner mark. An edge opening must be answered either with a center mark, a corner mark next to the X, or an edge mark opposite the X. Any other responses will allow X to force the win. Once the opening is completed, O's task is to follow the above list of priorities in order to force the draw, or else to gain a win if X makes a weak play.

More detailedly, to guarantee a draw, O should adopt the following strategies:

    If X plays corner opening move, O should take center, and then an edge, forcing X to block in the next move. This will stop any forks from happening. When both X and O are perfect players and X chooses to start by marking a corner, O takes the center, and X takes the corner opposite the original. In that case, O is free to choose any edge as its second move. However, if X is not a perfect player and has played a corner and then an edge, O should not play the opposite edge as its second move, because then X is not forced to block in the next move and can fork.
    If X plays edge opening move, O should take center or one of the corners adjacent to X, and then follow the above list of priorities, mainly paying attention to block forks.
    If X plays center opening move, O should take corner, and then follow the above list of priorities, mainly paying attention to block forks.

When X plays corner first, and O is not a perfect player, the following may happen:

    If O responds with a center mark (best move for them), a perfect X player will take the corner opposite the original. Then O should play an edge. However, if O plays a corner as its second move, a perfect X player will mark the remaining corner, blocking O's 3-in-a-row and making their own fork.
    If O responds with a corner mark, X is guaranteed to win, by simply taking any of the other two corners and then the last, a fork. (since when X takes the third corner, O can only take the position between the two X's. Then X can take the only remaining corner to win)
    If O responds with an edge mark, X is guaranteed to win, by taking center, then O can only take the corner opposite the corner which X plays first. Finally, X can take a corner to create a fork and then X will win on the next move.
