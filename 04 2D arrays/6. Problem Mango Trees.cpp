/*
Rahul's father has left a farm organized as an N X N grid.
Each square in the grid either has or does not have a mango tree.
He has to divide the farm with his tree sisters as follows:
He will draw one horizontal line and one vertical liine to divide the filed inot four
rectangles. his friends will choose three of the four smaller fields and he gets the last one.

Goal: what is the max no. of threes he can get?
(Max his min)

**********************************************************************************




Let M[x,y] be the number of mango trees in the rectangle between (0,0) and (x,y).
we can calculate M[x,y] as follows:

M[x,y] = 1+ M[x-1,y] + M[x,y-1] -M[x-1,y-1], if tree at (x,y)

= 0 + M[x-1,y] + M[x,y-1] - M[x-1,y-1], if no tree at (x,y)

-------------------------------------------------------------------------------------
Top right rectangle:

M[x,y] - M[X,Y]:  Number of mangos in recatble defined by (x,y) and (N,0)

Bottom right rectable:
M[x,N] - M[x,y] : number of mangoes in recangle defined by (0, N) and (x,y)



*/


