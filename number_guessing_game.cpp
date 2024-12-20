#include<iostream>
#include<cstdlib>
#include <ctime> 

using namespace std;


int main(){
    srand(time(0));

    int userNum, randNum;

    randNum = rand() % 100 + 1;
    int compGuess = randNum;
    cout<<"Computer Guess : "<<randNum<<endl;

    bool isGuessed = true;

    while (isGuessed)
    {
        cout<<"Enter a number : ";
        cin>>userNum;

        if(userNum == randNum){
            cout<<"You won the Game !"<<endl;
            isGuessed=false;
        }
        else if(userNum > randNum){
            cout<<"The number is  higher"<<endl;
        }
        else if(userNum < randNum){
            cout<<"The number is low"<<endl;
        }
        else{
            cout<<"invalid entery"<<endl;
        }
    }

	return 0;
}