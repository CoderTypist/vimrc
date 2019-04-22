# vimrc
DESCRIPTION: Changes the .vimrc file to match one's preferences

INTENDED PURPOSE: Whenever we press the tab key, it is very likely that four spaces are inserted into our program instead of an actual tab. A makefile requires an actual tab. Four spaces will not work. To fix this issue on Linux, you need to open the .vimrc file and change the code inside. This program makes switching between using four spaces and an actual tab quick and easy.

HOW TO USE: 

1) Download tab.c and save it in the same directory as your .vimrc file

2) gcc -o tab tab.c

3) To set a tab to four spaces:
   
   ./tab spaces
   
   To set a tab to an actual tab:
   
   ./tab tab
