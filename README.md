<h1 align="left">Question</h1>

###

<h3 align="left">Given two different positions on a chess board, find the least number of moves it would take a knight to get from one to the other. The positions will be passed as two arguments in algebraic notation. For example, knight("a3", "b5") should return 1.<br><br>note: The knight is not allowed to move off the board. The board is 8x8.</h3>

###

<h3 align="left">Sample Test (Java):<br><br>        assertEquals("Test for (a1, c1)", 2, Chess.knight("a1", "c1"));<br>        assertEquals("Test for (a1, f1)", 3, Chess.knight("a1", "f1"));<br>        assertEquals("Test for (a1, f3)", 3, Chess.knight("a1", "f3"));<br>        assertEquals("Test for (a1, f4)", 4, Chess.knight("a1", "f4"));<br>        assertEquals("Test for (a1, f7)", 5, Chess.knight("a1", "f7"));</h3>

###

<h1 align="left">Intuition (C):</h1>

###

<h3 align="left">The C code aims to calculate the minimum number of steps required for a knight to move from one position to another on a chessboard. It uses mathematical calculations and specific conditions to determine the result.</h3>

###

<h1 align="left">Approach (C):</h1>

###

<h3 align="left">1. The code first converts the given chess positions from the input strings to array indices, representing the rows and columns on the chessboard.<br>2. It calculates the absolute differences between the two positions in the x and y directions.<br>3. The code checks for specific conditions based on the differences to determine the minimum number of steps required:<br>	- If the absolute differences are (0, 1), it means the positions are one step away horizontally or vertically, so it returns 3 as the minimum number of steps.<br>	- If the absolute differences are (2, 2) or (1, 1), and the positions are on the corners or adjacent to the corners of the chessboard, it returns 4 as the minimum number of steps.<br>	- For other cases, it calculates a delta value based on the differences and returns delta minus twice the floor value of (delta minus the smaller difference) divided by 3 if the smaller difference is greater than the delta, otherwise divided by 4.</h3>

###

<h1 align="left">Complexity (C):</h1>

###

<h3 align="left">Time Complexity:<br> O(1)<br>Space Complexity:<br> O(1)<br><br>Note: The C code has a constant time and space complexity as it performs a fixed number of calculations and comparisons, regardless of the input size.</h3>

###

<h1 align="left">Intuition (java):</h1>

###

<h3 align="left">The Java code also solves the problem of finding the minimum number of steps for a knight to move from one position to another on a chessboard. It uses array manipulation and mathematical calculations to determine the result.</h3>

###

<h1 align="left">Approach (Java):</h1>

###

<h3 align="left">1. The code uses the Stream class to process the input positions.<br>2. It maps the positions to array indices in the range of 0-7 (for columns) and 0-7 (for rows) using the indexOf and charAt methods.<br>3. The code calculates the absolute differences between the two positions in both x and y directions and stores them in an array.<br>4. It checks for specific conditions based on the differences to determine the minimum number of steps required:<br>- If the absolute differences are (0, 1), it returns 3 as the minimum number of steps.<br>- If the absolute differences are (2, 2) or (1, 1) and the positions are either on the corners or adjacent to the corners of the chessboard, it returns 4 as the minimum number of steps.<br>- For other cases, it calculates a delta value based on the differences and returns delta minus twice the floor value of (delta minus the smaller difference) divided by 3 if the smaller difference is greater than the delta, otherwise divided by 4.</h3>

###

<h1 align="left">Complexity (java):</h1>

###

<h3 align="left">Time Complexity: <br>O(1)<br><br>Space Complexity: <br>O(1)<br><br>Note: The Java code also has constant time and space complexity as it performs a fixed number of calculations and comparisons, regardless of the input size.</h3>

###
