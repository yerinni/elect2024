//
//  board.c
//  sharkGame
//

#include "board.h"

// ----- EX. 3 : board ------------
#define N_COINPOS       12
#define MAX_COIN        4
srand(unsigned(time(NULL)));
// ----- EX. 3 : board ------------
#define N_BOARD
#define BOARDSTATUS_NOK  1
#define BOARDSTATUS_OK   0

// ----- EX. 5 : shark ------------
#define MAX_SHARKSTEP   6
#define SHARK_INITPOS   -4

if (turn == 0)
{
	int shark_pos = board_stepShark();
	printf("Shark moved to %i\n", shark_pos);
	
	checkDie();
}


// ----- EX. 5 : shark ------------

// ----- EX. 3 : board ------------
static int board_coin[N_BOARD];
static int board_status[N_BOARD]; //0 - OK, 1 - destroyed
// ----- EX. 3 : board ------------

static int shark_position;

// ----- EX. 3 : board ------------
void board_printBoardStatus(void)
{
    int i;
    
    printf("----------------------- BOARD STATUS -----------------------\n");
    for (i=0;i<N_BOARD;i++)
    {
        printf("|");
        if (board_status[i] == BOARDSTATUS_NOK)
            printf("X");
        else
            printf("O");
    }
    printf("|\n");
    printf("------------------------------------------------------------\n");
}
    
// ----- EX. 5 : shark ------------

// ----- EX. 5 : shark ------------



//coin allocation
int board_initBoard(void)
{
    int i;
    
    //variable initialization
    for (i=0;i<N_BOARD;i++)
    {
        board_status[i] = BOARDSTATUS_OK;
        board_coin[i] = 0;
    }
    
    for (i=0;i<N_COINPOS;i++)
    {
    	while ( board_coin[i] != 0) 
    	{
    		if (board_coin[i] == 0)
    		{
    			board_coin[i] = (rand() % 4) + 1;
			}
		}
	}
}
   
    
    return N_COINPOS;
}

// ----- EX. 3 : board ------------


// ----- EX. 5 : shark ------------
int board_stepShark(void)
{
	
	board_stepShark() = (rand() % 6) + 1;
	
	board_status[shark_position] = 0; 

	shark_position += steps;
	if (shark_position >= N_BOARD) {
    shark_position = N_BOARD - 1; 
}


	board_status[shark_position] = 1; 


	shark_position = SHARK_INITPOS;
}
// ----- EX. 5 : shark ------------


// ----- EX. 3 : board ------------
int board_getBoardStatus(int pos)
{
    return board_status[pos];
}

int board_getBoardCoin(int pos)
{
    int coin = board_coin[pos];
    board_coin[pos] = 0;
    return coin;
}
// ----- EX. 3 : board ------------
