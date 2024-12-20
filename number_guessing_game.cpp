#include<iostream>
#include<cstdlib>
#include <ctime> 

using namespace std;



    
      




int main(){
    srand(time(0));

    int userNum, randNum;

    randNum = rand() % 100;


    cout<<"Enter a number : "<<endl;
    cin>>userNum;

     int compGuess = randNum;
     cout<<"Computer Guess : "<<randNum<<endl;



  
    

	return 0;
}