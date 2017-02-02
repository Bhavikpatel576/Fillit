# Fillit
Fillit is an exciting program that takes tetriminos pieces from the standard input and outputs a grid with tetrimino piecies in the most optimal way possible.

A tetrimino is defined as a piece that has 4 hashtages and must be in contact with at least one other block on any of its 4 sides.


A few examples of valid descriptions of Tetriminos :
.... .... #### .... .##. .... .#.. .... ....
..## .... .... .... ..## .##. ###. ##.. .##.
..#. ..## .... ##.. .... ##.. .... #... ..#.
..#. ..## .... ##.. .... .... .... #... ..#.

And here are a few examples of invalid descriptions of Tetriminos
#### ...# ##... #. .... ..## #### ,,,, .HH.
...# ..#. ##... ## .... .... #### #### HH..
.... .#.. .... #.  .... .... #### ,,,, ....
.... #... ....     .... ##.. #### ,,,, ...




Program that solves the n queens problem with tetris pieces 




Here is an example of the input of the program and a correct solution that will be dispalyed on the standard output. 

$> cat sample.fillit | cat -e
...#$
...#$
...#$
...#$
$
....$
....$
....$
####$
$
.###$
...#$
....$
....$
$
....$
..##$
.##.$
....$
$
....$
.##.$
.##.$
....$
$
....$
....$
##..$
.##.$
$
##..$
.#..$
.#..$
....$
$
....$
###.$
.#..$
....$
$> ./fillit sample.fillit | cat -e
ABBBB.$
ACCCEE$
AFFCEE$
A.FFGG$
HHHDDG$
.HDD.G$
$>
