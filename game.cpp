#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    cout<<"\n\t\t-------------Welcome To The NUMBER GUESSSING Game---------------\n"<<endl;
    cout<<"\n\t\t------>>>>You will have to guess a number between 1 to 100."<<endl;
    cout<<"\n\t\t------>>>>Lets start playing and BEST OF LUCK!"<<endl;
    
    srand(time(0));
    int randNumber = (rand()%100) + 1;

    cout<<"\n\t\t*****You will have total 10 chances to guess the correct number.*****\n";
    int chanceLeft = 10;
    int playerInput;

    for(int i=1;i<=10;i++){

        cout<<"\n------>>>>Enter the Number : ";
        cin>>playerInput;

        if(playerInput == randNumber){
            cout<<"\n*****Congratulations!!. You have successfully guessed the right number*****\n";
            cout<<"\nThanks for playing. Have a nice Day!";
            break;
        }
        else{
            if(playerInput>randNumber){
                cout<<"\n""-->Try a Smaller Number."""<<endl;
            }
            else{
                cout<<"\n""-->Try a Larger Number."""<<endl;
            }
        }
        chanceLeft--;
        cout<<"\n----->>Chances Left to guess the Random Number : "<<chanceLeft<<endl;

        if(chanceLeft==0){
            cout<<"\n Sorry your chance has been finished to guess the random number\n"<<endl;
            cout<<" The random Number was : "<<randNumber<<endl;
            cout<<"Thanks for Playing . Have a Nice Day!!";
        }
    }
    cout<<"\n";
    return 0;
}