##Program Overview:
Fillit is an exciting program that takes tetriminos pieces from the standard input and outputs a grid with tetrimino pieces in the most optimal way possible.

A tetrimino is defined as a piece that has 4 hashtages and must be in contact with at least one other block on any of its 4 sides. The tetrmino passed into the program will be contained in a 4x4 box. The dots '.' will represent empty spaces.

A few examples of valid descriptions of Tetriminos :
.... ...#                                                                                                                     
..## ..##                                                                                                                     
..#. ...#                                                                                                                     
..#. ....                                                                                                                     

And here are a few examples of invalid descriptions of Tetriminos
#### ...# ##...                                                                                                               
...# ..#. ##...                                                                                                               
.... .#.. ....                                                                                                                 
.... #... ....                                                                                                                 

The program will take in up to 26 tetrimos pieces, convert the pieces' hashtags to a letter in the alphabet based off the order of input, and output a square grid with the tetriminos placed in the most optimal position. 

##Program Implementation: 
1. The program first validates the tetrimino pieces by reading in *the file* and stores the information into a 3D char array in order to do a string comparision against predefinied shapes we manually initalized. If validation fails, the program returns an error message. 
2. After validation, a minimum grid size is calculated based of the number of tetrimino pieces passed in and filled with '.' to represent empty spaces. The first tetrmino in the 3D array will be converted to its corresponding letter in the alphabet, 'A', and placed in the upper left hand corner of the grid. The program will repeat this process recursively with each tetrimino. The grid size will increase once the recursive call stack is empty. The process will repeat until an optimal placement of pieces and grid size is found. 

##Example of input and output
![Alt text] (https://github.com/Bhavikpatel576/Ruby-Sample-App/blob/master/app/assets/images/SC2.png 'Screen Shot')
