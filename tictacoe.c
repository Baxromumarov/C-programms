#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
//#include <windows.h>
#include <unistd.h>
char player1 = 'X';
char player2 = 'O';
int bestVal;
// char computer = 'O';
int min(int a, int b);
int max(int a, int b);
bool isMovesHave(char board[10]);
void firstMoment(char board[10]);
void print(char board[10]);
int CheckWinner(char board[10]);
void computerEasyMove(char board[10]);
void computerMove(char board[10]);
void player1Move(char board[10]);
void player2Move(char board[10]);
int MiniMax(char board[10], int index, bool isMax);
int main()
{
    srand(time(0));
    system("clear||cls");
    int NumberOfPlayer, level, off = 0, WhoFirst = 0;
    char board[10];
    firstMoment(board);
    printf("Choose:\n1. 1 Player\n2. 2 Players\n-->");
    scanf("%d", &NumberOfPlayer);
    if (NumberOfPlayer == 1)
    {
        system("clear||cls");
        printf("Choose level:\n1.Easy\n2.Hard\n-->");
        scanf("%d", &level);
    }
    if (NumberOfPlayer == 1)
    {
        system("clear||cls");
        printf("Who First:\n1.You\n2.Computer\n-->");
        scanf("%d", &WhoFirst);
    }
    for (int i = 0; i < 9; i++)
    {
        switch (NumberOfPlayer)
        {
        case 1:
        {
            print(board);
            if (WhoFirst == 1)
            {
                player1Move(board);
            }
            else
            {
                
                if (level == 2)
                    computerMove(board);
                else
                    computerEasyMove(board);
            }
            if (CheckWinner(board) != 0 || isMovesHave(board) == false)
            {
                off = 1;
                break;
            }
            print(board);
            if (WhoFirst == 1)
            {
                
                if (level == 2)
                    computerMove(board);
                else
                    computerEasyMove(board);
            }
            else
            {
                player1Move(board);
            }
            if (CheckWinner(board) != 0 || isMovesHave(board) == false)
            {
                off = 2;
                break;
            }
        }
        break;
        case 2:
            system("color 2||NULL");
            print(board);
            printf("1st ");
            player1Move(board);
            if (CheckWinner(board) != 0 || isMovesHave(board) == false)
            {
                off = 1;
                break;
            }
            system("color 3||NULL");
            print(board);
            printf("2nd ");
            player2Move(board);
            if (CheckWinner(board) != 0 || isMovesHave(board) == false)
            {
                off = 2;
                break;
            }
            break;
        }
        if (off != 0)
        {
            break;
        }
    }
    print(board);
    if (isMovesHave(board) == false && CheckWinner(board) == 0)
    {
        printf("\nDraw\n");
    }
    else if (NumberOfPlayer == 2)
    {
        if (CheckWinner(board) == -10)
            printf("1st Player WIN\n");
        else if (CheckWinner(board) == 10)
            printf("2nd Player WIN\n");
    }
    else if (NumberOfPlayer == 1)
    {
        if (CheckWinner(board) == -10)
            printf("You WIN\n");
        else if (CheckWinner(board) == 10)
            printf("Computer WIN\n");
    }
    return 0;
}
void firstMoment(char board[10])
{
    for (int i = 1; i < 10; i++)
        board[i] = ' ';
    board[0] = '=';
}
void print(char board[10])
{
    system("cls||clear");
    printf("        |     |     \n");
    printf("     %c  |  %c  |  %c  \n", board[1], board[2], board[3]);
    printf("   _____|_____|_____\n");
    printf("        |     |     \n");
    printf("     %c  |  %c  |  %c  \n", board[4], board[5], board[6]);
    printf("   _____|_____|_____\n");
    printf("        |     |     \n");
    printf("     %c  |  %c  |  %c  \n", board[7], board[8], board[9]);
    printf("        |     |     \n");
}
bool isMovesHave(char board[10])
{
    for (int i = 1; i < 10; i++)
        if (board[i] == ' ')
            return true;
    return false;
}
int CheckWinner(char board[10])
{
    for (int i = 1; i < 8; i += 3)
    {
        if (board[i] == board[i + 1] && board[i] == board[i + 2])
        {
            if (board[i] == player1)
            {
                return -10;
            }
            else if (board[i] == player2)
            {
                return +10;
            }
        }
    }
    for (int i = 1; i < 4; i++)
    {
        if (board[i] == board[i + 3] && board[i] == board[i + 6])
        {
            if (board[i] == player1)
            {
                return -10;
            }
            else if (board[i] == player2)
            {
                return +10;
            }
        }
    }

    if (board[1] == board[5] && board[1] == board[9])
    {
        if (board[1] == player1)
        {
            return -10;
        }
        else if (board[1] == player2)
        {
            return +10;
        }
    }
    if (board[3] == board[5] && board[3] == board[7])
    {
        if (board[3] == player1)
        {
            return -10;
        }
        else if (board[3] == player2)
        {
            return +10;
        }
    }
    return 0;
}
void player1Move(char board[10])
{
    int index;
    do
    {
        printf("Player, enter number of place: ");
        scanf("%d", &index);
    } while (board[index] != ' ');
    board[index] = player1;
}
void player2Move(char board[10])
{
    int index;
    do
    {
        printf("Player, enter number of place:");
        scanf("%d", &index);
    } while (board[index] != ' ');
    board[index] = player2;
}
int min(int a, int b)
{
    return a < b ? a : b;
}
int max(int a, int b)
{
    return a > b ? a : b;
}
int MiniMax(char board[10], int depth, bool isMax)
{

    int score = CheckWinner(board);
    if (score == 10)
        return score;
    if (score == -10)
        return score;
    if (isMovesHave(board) == false)
        return 0;
    if (isMax)
    {
        int best = -1000;
        for (int i = 1; i < 10; i++)
        {
            if (board[i] == ' ')
            {
                board[i] = player2;
                best = max(best, MiniMax(board, depth + 1, !isMax));
                board[i] = ' ';
            }
        }
        return best;
    }
    else
    {
        int best = 1000;
        for (int i = 1; i < 10; i++)
        {
            if (board[i] == ' ')
            {
                board[i] = player1;
                best = min(best, MiniMax(board, depth + 1, !isMax));
                board[i] = ' ';
            }
        }
        return best;
    }
}
int findBestMove(char board[10])
{
    int bestVal = -1000;
    int bestMove;
    bestMove = -1;

    for (int i = 1; i < 10; i++)
    {

        if (board[i] == ' ')
        {

            board[i] = player2;
            int moveVal = MiniMax(board, 0, false);

            board[i] = ' ';

            if (moveVal > bestVal)
            {
                bestMove = i;
                bestVal = moveVal;
            }
        }
    }
    return bestMove;
}
void computerMove(char board[10])
{
    board[findBestMove(board)] = player2;
}
void computerEasyMove(char board[10])
{
    int index;
    do
    {
        index = rand() % 9 + 1;
    } while (board[index] != ' ');
    board[index] = player2;
}