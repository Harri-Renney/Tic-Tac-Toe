#include <iostream>
#include <cstdio>

using namespace std;

int loop(1);
int score1, score2;

int pvp()
{
    int a(1);
    char node[9];
    node[0] = '1';
    node[1] = '2';
    node[2] = '3';
    node[3] = '4';
    node[4] = '5';
    node[5] = '6';
    node[6] = '7';
    node[7] = '8';
    node[8] = '9';

    cout << node[0] << "|" << node[1] << "|" << node[2] <<endl;
    cout << node[3] << "|" << node[4] << "|" << node[5] <<endl;
    cout << node[6] << "|" << node[7] << "|" << node[8] <<endl;
    do
    {
        char b;

        if(score2 >= score1)
        {
        cout << "Player 1, make a move." << endl;
        cin >> b;

        for (int i(0); i < 9; i++)
        {
            if (b == node[i])
            {
                node[i] = 'O';
            }
        }
    cout << endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    cout << node[0] << "|" << node[1] << "|" << node[2] <<endl;
    cout << node[3] << "|" << node[4] << "|" << node[5] <<endl;
    cout << node[6] << "|" << node[7] << "|" << node[8] <<endl;

        cout << "Player 2, make a move." << endl;
        cin >> b;

        for (int i(0); i < 9; i++)
        {
            if (b == node[i])
            {
                node[i] = 'X';
            }
        }
    cout << endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    cout << node[0] << "|" << node[1] << "|" << node[2] <<endl;
    cout << node[3] << "|" << node[4] << "|" << node[5] <<endl;
    cout << node[6] << "|" << node[7] << "|" << node[8] <<endl;
    }

    if(score1>score2)
    {
        cout << "Player 2, make a move." << endl;
        cin >> b;

        for (int i(0); i < 9; i++)
        {
            if (b == node[i])
            {
                node[i] = 'X';
            }
        }
    cout << endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    cout << node[0] << "|" << node[1] << "|" << node[2] <<endl;
    cout << node[3] << "|" << node[4] << "|" << node[5] <<endl;
    cout << node[6] << "|" << node[7] << "|" << node[8] <<endl;

        cout << "Player 1, make a move." << endl;
        cin >> b;

        for (int i(0); i < 9; i++)
        {
            if (b == node[i])
            {
                node[i] = 'O';
            }
        }
    cout << endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    cout << node[0] << "|" << node[1] << "|" << node[2] <<endl;
    cout << node[3] << "|" << node[4] << "|" << node[5] <<endl;
    cout << node[6] << "|" << node[7] << "|" << node[8] <<endl;
    }

    if (node[0] == node[1] && node[1] == node[2])
    {
        if (node[0] == 'X')
        {
            cout << endl << "Player 2 is the Champion!";
            score2++ ;
        }
        else
        {
            cout << endl << "Player 1 is the Champion!";
            score1++ ;
        }
        a = 2;
    }
    if (node[3] == node[4] && node[4] == node[5])
    {
        if (node[3] == 'X')
        {
            cout << endl << "Player 2 is the Champion!";
            score2++ ;
        }
        else
        {
            cout << endl << "Player 1 is the Champion!";
            score1++ ;
        }
        a = 2;
    }
    if (node[6] == node[7] && node[7] == node[8])
    {
        if (node[6] == 'X')
        {
            cout << endl << "Player 2 is the Champion!";
            score2++ ;
        }
        else
        {
            cout << endl << "Player 1 is the Champion!";
            score1++ ;
        }
        a = 2;
    }
    if (node[0] == node[3] && node[3] == node[6])
    {
        if (node[0] == 'X')
        {
            cout << endl << "Player 2 is the Champion!";
            score2++ ;
        }
        else
        {
            cout << endl << "Player 1 is the Champion!";
            score1++ ;
        }
        a = 2;
    }
    if (node[1] == node[4] && node[4] == node[7])
    {
        if (node[1] == 'X')
        {
            cout << endl << "Player 2 is the Champion!";
            score2++;
        }
        else
        {
            cout << endl << "Player 1 is the Champion!";
            score1++;
        }
        a = 2;
    }
    if (node[2] == node[5] && node[5] == node[8])
    {
        if (node[2] == 'X')
        {
            cout << endl << "Player 2 is the Champion!";
            score2++;
        }
        else
        {
            cout << endl << "Player 1 is the Champion!";
            score1++;
        }
        a = 2;
    }
    if (node[0] == node[4] && node[4] == node[8])
    {
        if (node[0] == 'X')
        {
            cout << endl << "Player 2 is the Champion!";
            score2++;
        }
        else
        {
            cout << endl << "Player 1 is the Champion!";
            score1++;
        }
        a = 2;
    }
    if (node[2] == node[4] && node[4] == node[6])
    {
        if (node[2] == 'X')
        {
            cout << endl << "Player 2 is the Champion!";
            score2++;
        }
        else
        {
            cout << endl << "Player 1 is the Champion!";
            score1++;
        }
        a = 2;
    }
    if (node[0] != '1' && node[1] != '2' && node[2] != '3' && node[3] != '4' && node[4] != '5' && node[5] != '6' && node[6] != '7' && node[7] != '8' && node[8] != '9')
    {
        cout << "It's a draw!" << endl;
        a = 2;
    }
    }while (a == 1);

    return (0);
}
int single()
{
    int pos;
    int a(1);
    char node[9];
    node[0] = '1';
    node[1] = '2';
    node[2] = '3';
    node[3] = '4';
    node[4] = '5';
    node[5] = '6';
    node[6] = '7';
    node[7] = '8';
    node[8] = '9';

    cout << "Choose what player you would like to be." << endl << "1. Player 1" << endl<< "2. Player 2"<< endl;
    cin >> pos;
    cout<<endl<<endl;

    cout << node[0] << "|" << node[1] << "|" << node[2] <<endl;
    cout << node[3] << "|" << node[4] << "|" << node[5] <<endl;
    cout << node[6] << "|" << node[7] << "|" << node[8] <<endl;
    do
    {
        char b;

        if (pos == 1)
        {
        cout << "Player 1, make a move." << endl;
        cin >> b;
        }
        else
        {

        }
        for (int i(0); i < 9; i++)
        {
            if (b == node[i])
            {
                node[i] = 'O';
            }
        }
    cout << endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    cout << node[0] << "|" << node[1] << "|" << node[2] <<endl;
    cout << node[3] << "|" << node[4] << "|" << node[5] <<endl;
    cout << node[6] << "|" << node[7] << "|" << node[8] <<endl;

        if (pos == 2)
        {
        cout << "Player 2, make a move." << endl;
        cin >> b;
        }
        else
        {

        }
        for (int i(0); i < 9; i++)
        {
            if (b == node[i])
            {
                node[i] = 'X';
            }
        }
    cout << endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    cout << node[0] << "|" << node[1] << "|" << node[2] <<endl;
    cout << node[3] << "|" << node[4] << "|" << node[5] <<endl;
    cout << node[6] << "|" << node[7] << "|" << node[8] <<endl;

    if (node[0] == node[1] && node[1] == node[2])
    {
        if (node[0] == 'X')
        {
            cout << endl << "Player 2 is the Champion!";
            score2++ ;
        }
        else
        {
            cout << endl << "Player 1 is the Champion!";
            score1++ ;
        }
        a = 2;
    }
    if (node[3] == node[4] && node[4] == node[5])
    {
        if (node[3] == 'X')
        {
            cout << endl << "Player 2 is the Champion!";
            score2++ ;
        }
        else
        {
            cout << endl << "Player 1 is the Champion!";
            score1++ ;
        }
        a = 2;
    }
    if (node[6] == node[7] && node[7] == node[8])
    {
        if (node[6] == 'X')
        {
            cout << endl << "Player 2 is the Champion!";
            score2++ ;
        }
        else
        {
            cout << endl << "Player 1 is the Champion!";
            score1++ ;
        }
        a = 2;
    }
    if (node[0] == node[3] && node[3] == node[6])
    {
        if (node[0] == 'X')
        {
            cout << endl << "Player 2 is the Champion!";
            score2++ ;
        }
        else
        {
            cout << endl << "Player 1 is the Champion!";
            score1++ ;
        }
        a = 2;
    }
    if (node[1] == node[4] && node[4] == node[7])
    {
        if (node[1] == 'X')
        {
            cout << endl << "Player 2 is the Champion!";
            score2++;
        }
        else
        {
            cout << endl << "Player 1 is the Champion!";
            score1++;
        }
        a = 2;
    }
    if (node[2] == node[5] && node[5] == node[8])
    {
        if (node[2] == 'X')
        {
            cout << endl << "Player 2 is the Champion!";
            score2++;
        }
        else
        {
            cout << endl << "Player 1 is the Champion!";
            score1++;
        }
        a = 2;
    }
    if (node[0] == node[4] && node[4] == node[8])
    {
        if (node[0] == 'X')
        {
            cout << endl << "Player 2 is the Champion!";
            score2 == score2 + 1;
        }
        else
        {
            cout << endl << "Player 1 is the Champion!";
            score1 == score1 + 1;
        }
        a = 2;
    }
    if (node[2] == node[4] && node[4] == node[6])
    {
        if (node[2] == 'X')
        {
            cout << endl << "Player 2 is the Champion!";
            score2++;
        }
        else
        {
            cout << endl << "Player 1 is the Champion!";
            score1++;
        }
        a = 2;
    }
    if (node[0] != '1' && node[1] != '2' && node[2] != '3' && node[3] != '4' && node[4] != '5' && node[5] != '6' && node[6] != '7' && node[7] != '8' && node[8] != '9')
    {
        cout << "It's a draw!" << endl;
        a = 2;
    }
    }while (a == 1);

    return (0);

}
int main()
{
    int choice;
    cout << "Welcome to the best game ever!" << endl << endl;
    while( loop == 1)
    {
    cout << "What would you like to play?" << endl << "1.single player" << endl << "2.PvP" << endl << "3.Quit" << endl;
    cin >> choice;
    cout << endl;
    if (choice == 1)
    {

    }
    else if (choice == 2)
    {
        pvp();
    }
    else if (choice == 3)
    {
        loop = 2;
    }
    else
    {
        cout << "An invalid choice was entered try again." << endl;
    }
    cout <<endl<<endl<< "Player 1 score: " << score1 <<endl;
    cout << "Player 2 score: " << score2 <<endl<<endl;

    }
    return 0;

}
