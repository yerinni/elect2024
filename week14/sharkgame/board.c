//  board.c
//  sharkGame
//

#include "board.h"

// ----- EX. 3 : board ------------
#define N_COINPOS       12
#define MAX_COIN        4

// ----- EX. 3 : board ------------

#define BOARDSTATUS_NOK  1
#define BOARDSTATUS_OK   0

// ----- EX. 5 : shark ------------
#define MAX_SHARKSTEP   6
#define SHARK_INITPOS   -4

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

    for (i = 0; i < N_BOARD; i++)
    {
        board_status[i] = BOARDSTATUS_OK; 
        board_coin[i] = 0;             
    }



    for (i = 0; i < N_COINPOS; i++)
    {
        while (1) 
        {
            int pos = rand() % N_BOARD; 

         
            if (board_coin[pos] == 0)
            {
                board_coin[pos] = (rand() % MAX_COIN) + 1; 
                break; 
            }
        }
    }

    return N_COINPOS; 
}


// ----- EX. 3 : board ------------


// ----- EX. 5 : shark ------------
int board_stepShark(void)
{
	
	int steps = (rand() % MAX_SHARKSTEP) + 1;
	
	board_status[shark_position] = 0; 

	shark_position += steps;
	
	if (shark_position >= N_BOARD)
	{	
		shark_position = N_BOARD - 1; 
	}


	board_status[shark_position] = BOARDSTATUS_NOK; 


	return shark_position;
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
