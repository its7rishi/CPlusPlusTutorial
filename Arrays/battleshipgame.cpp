#include <iostream>
using namespace std;

int main() {
    bool ships[4][4] = {
        {0, 1, 1, 0},
        {0, 0, 0, 0},
        {0, 0, 1, 0},
        {0, 0, 1, 0}
    };

    //Keep track of hits and how many turns played
    int hits = 0;
    int numberOfTurns = 0;

    // Allow player to keep gong until they hit all the ships
    while(hits < 4) {
        int row, column;

        cout << "Selecting coordinates \n";

        //Ask the player for a row number

        cout << "Choose a row number between 0 and 3: ";
        cin >> row;

        // Ask the player for a column number
        
        cout << "Choose a column number between 0 and 3: ";
        cin >> column;

        // Check if ship exists in those coordinates
        if(ships[row][column]) {
            //If player hits  a ship remove it by setting the value as zero
            ships[row][column] = 0;

            //Increase the hit number
            hits++;

            // Tell player that they have hit a ship and how many ships are left;
            
            cout << "Hit! " << (4 - hits) << " left.\n\n";
        } else {
            // Tell the user they have missed
            cout << "Miss\n\n";
        }

        // Count how many turns the player has played
        numberOfTurns++;
    }

    cout << "Victory!\n";
    cout << "You won in " << numberOfTurns << " turns";
}