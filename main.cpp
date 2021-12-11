#include <iostream>
#include <ctime>
#include <cstdlib>
#include <windows.h>
#include <stdio.h>

using namespace std;

int main(){

    // VARIABLES    

    char raspuns;
    int i = 0;
    char try_again = 'y';

    // END VARIABLES

    // CODE

    // ABOUT GAME

    cout<<"Welcome to my quiz game."<<endl;
    Sleep(1000);
    cout<<"In this game you will have to answer the questions, as written above"<<endl;
    Sleep(3300);
    cout<<"The rules are simple if you guess you get 1 point, If you lose, you will lose 1 point. At the end there will be an automatic calculation of the points."<<endl;
    Sleep(4000);

    cout<<"Press the Enter key to play"<<endl;
    getchar();
    
    while (try_again == 'y' || try_again == 'Y'){

    Sleep(750);

    // END ABOUT GAME

    // QUESTION 1
    cout<<"-----------------------------------------------"<<endl;

    cout<<"\n\n1. Who was Charles Coulomb"<<endl;
    cout<<"     a. A Faimos pictor"<<endl;
    cout<<"     b. A physicist who discovered Coulomb's strength"<<endl;
    cout<<"     c. An opera musician"<<endl;
    cout<<"     d. A simple man"<<endl;
    Sleep(500);
    cout<<"Type the letter corresponding to the correct answer"<<endl;
    cin>>raspuns;
    if (raspuns == 'b' || raspuns == 'B'){
        cout<<"Congratulations, you answered correctly! +1 POINT"<<endl;
        i++;
    } else if (raspuns == 'a' || raspuns == 'c' || raspuns == 'd' || raspuns == 'A' || raspuns == 'C' || raspuns == 'D'){
        cout<<"Incorrect answer -1 POINT"<<endl;
        i--;
    }  else {
        cout<<"Invalid Answer -1 POINT"<<endl;
        i--;
    }

    Sleep(700);

    // QUESTION 2
    cout<<"-----------------------------------------------"<<endl;

    cout<<"\n\n2. How long did World War I last?"<<endl;
    cout<<"     a. 20 Years"<<endl;
    cout<<"     b. 13 Years"<<endl;
    cout<<"     c. 1 Years"<<endl;
    cout<<"     d. 4 Years"<<endl;
    Sleep(500);
    cout<<"Type the letter corresponding to the correct answer"<<endl;
    cin>>raspuns;
    if (raspuns == 'd' || raspuns == 'D'){
        cout<<"Congratulations, you answered correctly! +1 POINT"<<endl;
        i++;
    } else if (raspuns == 'a' || raspuns == 'c' || raspuns == 'b' || raspuns == 'A' || raspuns == 'C' || raspuns == 'B'){
        cout<<"Incorrect answer -1 POINT"<<endl;
        i--;
    }  else {
        cout<<"Invalid Answer -1 POINT"<<endl;
        i--;
    }

    Sleep(700);

    // QUESTION 3
    cout<<"-----------------------------------------------"<<endl;

    cout<<"\n\n3. What happened on 11 September 2001?"<<endl;
    cout<<"     a. The terrorist attack in Berlin"<<endl;
    cout<<"     b. The great communist robbery"<<endl;
    cout<<"     c. New York terrorist attack"<<endl;
    cout<<"     d. The first man on the moon"<<endl;
    Sleep(500);
    cout<<"Type the letter corresponding to the correct answer"<<endl;
    cin>>raspuns;
    if (raspuns == 'c' || raspuns == 'C'){
        cout<<"Congratulations, you answered correctly! +1 POINT"<<endl;
        i++;
    } else if (raspuns == 'a' || raspuns == 'd' || raspuns == 'b' || raspuns == 'A' || raspuns == 'D' || raspuns == 'B'){
        cout<<"Incorrect answer -1 POINT"<<endl;
        i--;
    }  else {
        cout<<"Invalid Answer -1 POINT"<<endl;
        i--;
    }

    Sleep(700);

    // QUESTION 4
    cout<<"-----------------------------------------------"<<endl;

    cout<<"\n\n4. When Michael Jackson died"<<endl;
    cout<<"     a. 25 June 2009"<<endl;
    cout<<"     b. 4 May 2009"<<endl;
    cout<<"     c. 25 December 2009"<<endl;
    cout<<"     d. 2 March 2010"<<endl;
    Sleep(500);
    cout<<"Type the letter corresponding to the correct answer"<<endl;
    cin>>raspuns;
    if (raspuns == 'a' || raspuns == 'A'){
        cout<<"Congratulations, you answered correctly! +1 POINT"<<endl;
        i++;
    } else if (raspuns == 'c' || raspuns == 'd' || raspuns == 'b' || raspuns == 'C' || raspuns == 'D' || raspuns == 'B'){
        cout<<"Incorrect answer -1 POINT"<<endl;
        i--;
    }  else {
        cout<<"Invalid Answer -1 POINT"<<endl;
        i--;
    }

    Sleep(700);

    // QUESTION 5

    cout<<"-----------------------------------------------"<<endl;

    cout<<"\n\n5. First flight on the moon"<<endl;
    cout<<"     a. 2 February 1972"<<endl;
    cout<<"     b. 16 July 1969"<<endl;
    cout<<"     c. 16 Octomber 1999"<<endl;
    cout<<"     d. 4 June 1953"<<endl;
    Sleep(500);
    cout<<"Type the letter corresponding to the correct answer"<<endl;
    cin>>raspuns;
    if (raspuns == 'b' || raspuns == 'B'){
        cout<<"Congratulations, you answered correctly! +1 POINT"<<endl;
        i++;
    } else if (raspuns == 'c' || raspuns == 'd' || raspuns == 'a' || raspuns == 'C' || raspuns == 'D' || raspuns == 'A'){
        cout<<"Incorrect answer -1 POINT"<<endl;
        i--;
    }  else {
        cout<<"Invalid Answer -1 POINT"<<endl;
        i--;
    }
    Sleep(300);
    cout<<"Wait for final score!"<<endl;
    Sleep(1000);
    cout<<"Total score: "<<i<<" POINTS"<<endl;
    Sleep(500);

    cout<<"Do you want to try again (y/n): ";
    cin>>try_again;

    }


    // RETURN
    
    return 0;

    // END RETURN

    // END CODE

    // Thanks for looking over my code
    // and if you have a suggestion where I can learn c ++ for free, from a to z contact me
    // I would greatly appreciate it!

}
