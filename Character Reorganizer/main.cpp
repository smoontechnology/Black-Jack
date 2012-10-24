//
//  main.cpp
//  Character Reorganizer
//
//  Created by Stephen Moon on 10/17/12.
//  Copyright (c) 2012 Stephen Moon. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int counter;
    string playagain;
    int looper=1;
    int other [6] = {16,17,18,19,20,21};
    int looper1;
    string playagain2;
    string playagain3;
    string playagain4;
    int sum;
    //int num1 = (rand(1,2,3,4,5,6,7,8,9,10,10,10,10,11));
    //int num2 = (rand(1,2,3,4,5,6,7,8,9,10,10,10,10,11));
    //int num3 = (rand(1,2,3,4,5,6,7,8,9,10,10,10,10,11));
    //int num4 = (rand(1,2,3,4,5,6,7,8,9,10,10,10,10,11));
    //int num5 = (rand(1,2,3,4,5,6,7,8,9,10,10,10,10,11));
    //int num6 = (rand(1,2,3,4,5,6,7,8,9,10,10,10,10,11));
    int card1 = (rand()%14) + 1;
    int card2 = (rand()%14) + 1;
    int card3 = (rand()%14) + 1;
    int card4 = (rand()%14) + 1;
    int card5 = (rand()%14) + 1;
    while (looper==1) {
    
        cout << "Welcome to Virtual Black Jack. You can hit 3 times. Aces default to 1."<<endl;
        cout << "Note that a 1 or 11 is an ace."<<endl;
        srand ( time(NULL) );
        srand(time(0));
       if (card1==14)
           card1 = 1;
        if (card1 > 10)
           card1 = 10;
        if (card2==14)
            card2 = 1;
        if (card2 > 10)
            card2 = 10;
        if (card3==14)
            card3 = 1;
        if (card3 > 10)
            card3 = 10;
        if (card4==14)
            card4 = 1;
        if (card4 > 10)
            card4 = 10;
        if (card5==14)
            card5 = 1;
        if (card5 > 10)
            card5 = 10;
        cout << "Your first 2 cards are: "<<card1<<" and "<<card2<<endl;
        int sum = card1 + card2;
        if (sum > 21)
            cout << "You lose. You may continue playing to see how other players did."<<endl;
        cout << "Your current total is "<<sum<<endl;
        cout << "Would you like to get hit again?"<<endl;
        cin.ignore();
        cin >> playagain2;
        if (playagain2=="Yes" || playagain2=="yes")
                cout << "Your next card is: "<<card3<<endl;
                sum = card1 + card2 + card3;
                if (sum > 21)
                    cout << "You lose. You may continue playing to see how other players did."<<endl;
                cout << "Your current total is "<<sum<<endl;
                cout << "Would you like to get hit again?"<<endl;
        cin.ignore();
        cin >> playagain3;
                if (playagain3=="Yes" || playagain3=="yes")
                        cout << "Your next card is: "<<card4<<endl;
                        sum = card1 + card2 + card3 + card4;
                        if (sum > 21)
                            cout << "You lose. You may continue playing to see how other players did."<<endl;
                        cout << "Your current total is "<<sum<<endl;
                        cout << "Would you like to get hit again?"<<endl;
                cin.ignore();
                        cin >> playagain4;
                        if (playagain4=="Yes" || playagain4=="yes")
                                cout << "Your next card is: "<<card5<<endl;
                                sum = card1 + card2 + card3 + card4 + card5;
                                if (sum > 21)
                                    cout << "You lose. You may continue playing to see how other players did."<<endl;
                                cout << "Your current total is "<<sum<<endl;
        cout << "Here was the other player's score: "<<other [3]<<endl;
        cout << "Press 1 to play again. Press 2 to finish."<<endl;
        cin >> playagain;
        if (playagain=="1")
            continue;
        if (playagain=="2")
            looper++;
    }
}
            
    
