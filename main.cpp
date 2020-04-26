/*Dr. Tyson 1437 Programming Fundamentals II - TCCD
  Chet Lockwood
  25 APRIL 2020
  IDE: Repl.it 
  Program:  Towers of Hanoi by Recursion
  Learning Point: To learn recursion by solving the Towers of Hanoi
  https://repl.it/@ChetLockwood/TowersofHanoiLockwood
*/

#include <iostream>

using namespace std;

void moveDiscs (int, int, int, int);

int main() 
{
  const int NUM_DISCS = 3;
  const int FROM_PEG = 1;
  const int TO_PEG = 3;
  const int TEMP_PEG = 2;

  moveDiscs (NUM_DISCS, FROM_PEG, TO_PEG, TEMP_PEG);
  cout << "All the discs are moved";

 return 0;
}

void moveDiscs (int num, int fromPeg, int toPeg, int tempPeg)
{
  if (num > 0)
  {
    moveDiscs(num-1, fromPeg, tempPeg, toPeg);
    cout << "Move a disc from peg " << fromPeg << " to peg " << toPeg << endl;
    moveDiscs(num-1, tempPeg, toPeg, fromPeg);
  } 
}

/*Recursion is a process where a function calls itself (directly or indirectly), usually 
to simplify the solution for more complext problems.  The function being called by its
 own functio is called the recursive function.

 In the case of the Towers of Hanoi problem, the program still has to step down in linear
 order, so after passing the function first in int main(), the function recursively calls itself first (reducing num from 3 to 2), then calls itself again (2 to 1) and now since it can't go down any further (go to 0), it couts the parameters (1,3). It then goes back one function, couts those parameters (1,2), and goes to the next recursive function.  Inside of that function, it can't go into the other functions (goes to 0) so it couts those parameters (3,2). Now it goes back two full functions to the original function call, goes down a line from the first recursive function, couts those parameters (1,3) and goes to the final recursive funciton call.  That function recursively calls the first recursive function again and since it can't go lower (goes to 0), will cout those parameters (2,1). Then it goes back a function, couts those parameters (2,3), and goes to the final recursive function call.  Since that will also go to 0 if it recursively calls a function again, it couts its parameters (1,3), and then goes back two full functions and is at the end of the original function and end of the program, then cout'ing "All the discs are moved".
 */