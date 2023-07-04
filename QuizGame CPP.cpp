#include <iostream>
#include<conio.h>
using namespace std;

class quizGame
{
    int rightAns=0,wrongAns=0;
    int score=0;

public:
    void playGame();
    int checkAnswer(int, char);
    void getScore();
};

void quizGame::playGame()
{
    char choose;
    int check;
    cout<<"Press any key to start game...";
    getch();
    cout << "\n\n1.Which is the Capital of india?\n";
    cout << "A.Mumbai\t\tB.Chennai\n";
    cout << "C.Delhi\t\tD.Banglore\n";
repeat:
    cout << "Choose correct answer :";
    cin >> choose;
    check = checkAnswer(1, choose);
    if (!check)
    {
        goto repeat;
    }
    cout << "\n2.Where is TAJ MAHAL?\n";
    cout << "A.Agra\t\tB.Chennai\n";
    cout << "C.Delhi\t\tD.Mumbai\n";
repeat2:
    cout << "Choose correct answer :";
    cin >> choose;
    check = checkAnswer(2, choose);
    if (!check)
    {
        goto repeat2;
    }
    cout << "\n3.Where is red fort?\n";
    cout << "A.Agra\t\tB.Chennai\n";
    cout << "C.Delhi\t\tD.Banglore\n";
repeat3:
    cout << "Choose correct answer :";
    cin >> choose;
    check = checkAnswer(3, choose);
    if (!check)
    {
        goto repeat3;
    }
    cout << "\n4.Where is charminar?\n";
    cout << "A.Hyderabad\t\tB.Chennai\n";
    cout << "C.Agra\t\tD.Banglore\n";
repeat4:
    cout << "Choose correct answer :";
    cin >> choose;
    check = checkAnswer(4, choose);
    if (!check)
    {
        goto repeat4;
    }
    cout << "\n5.India's first prime minister?\n";
    cout << "A.Sardar BB patel\t\tB.Mahatma gandhi\n";
    cout << "C.Subhash chandra bose\t\tD.Jawahar lal nehru\n";
repeat5:
    cout << "Choose correct answer :";
    cin >> choose;
    check = checkAnswer(5, choose);
    if (!check)
    {
        goto repeat5;
    }
    cout << "\n6.When india got freedom?\n";
    cout << "A.1857\t\tB.1920\n";
    cout << "C.1947\t\tD.1950\n";
repeat6:
    cout << "Choose correct answer :";
    cin >> choose;
    check = checkAnswer(6, choose);
    if (!check)
    {
        goto repeat6;
    }
    cout << "\n7.India's smallest state in terms of area?\n";
    cout << "A.Kerala\t\tB.Goa\n";
    cout << "C.Panjab\t\tD.Karnataka\n";
repeat7:
    cout << "Choose correct answer :";
    cin >> choose;
    check = checkAnswer(7, choose);
    if (!check)
    {
        goto repeat7;
    }
    cout << "\n8.Inida's biggest state in terms of area?\n";
    cout << "A.Rajasthan\t\tB.Uttar Pradesh\n";
    cout << "C.Madhya Pradhesh\t\tD.Karnataka\n";
repeat8:
    cout << "Choose correct answer :";
    cin >> choose;
    check = checkAnswer(8, choose);
    if (!check)
    {
        goto repeat8;
    }
    cout << "\n9.What is the place of india in the world in terms of area?\n";
    cout << "A.Fourth\t\tB.Fifth\n";
    cout << "C.Sixth\t\tD.Seventh\n";
repeat9:
    cout << "Choose correct answer :";
    cin >> choose;
    check = checkAnswer(9, choose);
    if (!check)
    {
        goto repeat9;
    }
    cout << "\n10.What is place of india in the world in terms of population?\n";
    cout << "A.First\t\tB.Second\n";
    cout << "C.Third\t\tD.Fourth\n";
repeat10:
    cout << "Choose correct answer :";
    cin >> choose;
    check = checkAnswer(10, choose);
    if (!check)
    {
        goto repeat10;
    }
    getScore();
}

int quizGame::checkAnswer(int quesNumber, char answer)
{
    switch (quesNumber)
    {
    case 1:
        if (answer == 'C'||answer == 'c')
        {
            cout << "\nCorrect Answer\n";
            rightAns++;
            score +=10;
            return 1;
        }
        else if (answer == 'A'||answer=='B'||answer=='D'||answer == 'a'||answer=='b'||answer=='d')
        {
            cout << "\nIncorrect Answer\n";
            cout << "Correct Answer is Delhi\n";
            wrongAns++;
            return 1;
        }else{
            cout << "\nInvalid answer try again\n";
            return 0;
        }
        break;
    case 2:
        if (answer == 'A'||answer == 'a')
        {
            cout << "\nCorrect Answer\n";
            rightAns++;
            score +=10;
            return 1;
        }
        else if (answer == 'C'||answer=='B'||answer=='D'||answer == 'c'||answer=='b'||answer=='d')
        {
            cout << "\nIncorrect Answer\n";
            cout << "Correct Answer is Agra\n";
            wrongAns++;
            return 1;
        }else{
            cout << "\nInvalid answer try again\n";
            return 0;
        }
        break;
    case 3:
        if (answer == 'C'||answer == 'c')
        {
            cout << "\nCorrect Answer\n";
            rightAns++;
            score +=10;
            return 1;
        }
        else if (answer == 'A'||answer=='B'||answer=='D'||answer == 'a'||answer=='b'||answer=='d')
        {
            cout << "\nIncorrect Answer\n";
            cout << "Correct Answer is Delhi\n";
            wrongAns++;
            return 1;
        }else{
            cout << "\nInvalid answer try again\n";
            return 0;
        }
        break;
    case 4:
        if (answer == 'A'||answer == 'a')
        {
            cout << "\nCorrect Answer\n";
            rightAns++;
            score +=10;            
            return 1;
        }
        else if (answer == 'C'||answer=='B'||answer=='D'||answer == 'c'||answer=='b'||answer=='d')
        {
            cout << "\nIncorrect Answer\n";
            cout << "Correct Answer is Hyderabad\n";
            wrongAns++;
            return 1;
        }else{
            cout << "\nInvalid answer try again\n";
            return 0;
        }
        break;
    case 5:
        if (answer == 'D'||answer == 'd')
        {
            cout << "\nCorrect Answer\n";
            rightAns++;
            score +=10;
            return 1;
        }
        else if (answer == 'A'||answer=='B'||answer=='C'||answer == 'a'||answer=='b'||answer=='c')
        {
            cout << "\nIncorrect Answer\n";
            cout << "Correct Answer is Jawahar lal nehru\n";
            wrongAns++;
            return 1;
        }else{
            cout << "\nInvalid answer try again\n";
            return 0;
        }
        break;
    case 6:
        if (answer == 'C'||answer == 'c')
        {
            cout << "\nCorrect Answer\n";
            rightAns++;
            score +=10;
            return 1;
        }
        else if (answer == 'A'||answer=='B'||answer=='D'||answer == 'a'||answer=='b'||answer=='d')
        {
            cout << "\nIncorrect Answer\n";
            cout << "Correct Answer is 1947\n";
            wrongAns++;
            return 1;
        }else{
            cout << "\nInvalid answer try again\n";
            return 0;
        }
        break;
    case 7:
        if (answer == 'B'||answer == 'b')
        {
            cout << "\nCorrect Answer\n";
            rightAns++;
            score +=10;
            return 1;
        }
        else if (answer == 'A'||answer=='C'||answer=='D'||answer == 'a'||answer=='c'||answer=='d')
        {
            cout << "\nIncorrect Answer\n";
            cout << "Correct Answer is Goa\n";
            wrongAns++;
            return 1;
        }else{
            cout << "\nInvalid answer try again\n";
            return 0;
        }
        break;
    case 8:
        if (answer == 'B'||answer == 'b')
        {
            cout << "\nCorrect Answer\n";
            rightAns++;
            score +=10;
            return 1;
        }
        else if (answer == 'A'||answer=='C'||answer=='D'||answer == 'a'||answer=='c'||answer=='d')
        {
            cout << "\nIncorrect Answer\n";
            cout << "Correct Answer is Uttar Pradesh\n";
            wrongAns++;
            return 1;
        }else{
            cout << "\nInvalid answer try again\n";
            return 0;
        }
        break;
    case 9:
        if (answer == 'D'||answer == 'd')
        {
            cout << "\nCorrect Answer\n";
            rightAns++;
            score +=10;
            return 1;
        }
        else if (answer == 'A'||answer=='C'||answer=='B'||answer == 'a'||answer=='c'||answer=='b')
        {
            cout << "\nIncorrect Answer\n";
            cout << "Correct Answer is Seventh\n";
            wrongAns++;
            return 1;
        }else{
            cout << "\nInvalid answer try again\n";
            return 0;
        }
        break;
    case 10:
        if (answer == 'A'||answer == 'a')
        {
            cout << "\nCorrect Answer\n";
            rightAns++;
            score +=10;
            return 1;
        }
        else if (answer == 'B'||answer=='C'||answer=='D'||answer == 'b'||answer=='c'||answer=='d')
        {
            cout << "\nIncorrect Answer\n";
            cout << "Correct Answer is Second\n";
            wrongAns++;
            return 1;
        }else{
            cout << "\nInvalid answer try again\n";
            return 0;
        }
        break;
    }
    return 1;
}

void quizGame::getScore()
{
    cout<<"\nPress any key to show game result...";
    getch();
    if (rightAns>=8)
    {
        cout<<"\n\n*********************************************\n";
        cout<<"|       Congrat's You win the Game          |\n";
        cout<<"*********************************************\n";
        cout<<"| Score | Correct Answer | Incorrect Answer |\n";
        cout<<"*********************************************\n";
        cout<<"| "<<score<<"    |       "<<rightAns<<"        |        "<<wrongAns<<"         |\n";
        cout<<"*********************************************\n\n";
    }else
    {
        cout<<"\n\n*********************************************\n";
        cout<<"|         Sorry! You lose the Game          |\n";
        cout<<"*********************************************\n";
        cout<<"| Score | Correct Answer | Incorrect Answer |\n";
        cout<<"*********************************************\n";
        cout<<"| "<<score<<"    |       "<<rightAns<<"        |        "<<wrongAns<<"         |\n";
        cout<<"*********************************************\n\n";
    }    
}

int main()
{
    quizGame player;
    cout << "\n\n****WELCOME TO QUIZ GAME PROJECT****\n";
    cout<<"Here are few game rules\n";
    cout<<"1.You will win the game if you answer 8 question correctly out of 10\n";
    cout<<"2.You will get 10 score for every correct answer\n";
    player.playGame();
    return 0;
}



