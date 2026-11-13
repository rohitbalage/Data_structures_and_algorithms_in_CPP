/*
Defense Kingdom
Theodore implements a new strategy game “Defense of a Kingdom”. On each level a player defends the Kingdom that is represented by a rectangular grid of cells. The player builds crossbow towers in some cells of the grid. The tower defends all the cells in the same row and the same column. No two towers share a row or a column.

The penalty of the position is the number of cells in the largest undefended rectangle. For example, the position shown on the picture has penalty 12.



Your task is to find the penalty of the give position.

Input Format

In the function an width and height of the kingdom and a vector of pairs representing positions of towers is passed.

Output Format

Return an integer representing the number of cells in the largest rectangle that is not defended by the towers.



Sample Input

15 8
{(3, 8), (11, 2), (8, 6)}


Sample Output

12


*/