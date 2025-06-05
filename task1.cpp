#include <iostream>
#include <ctime>
using namespace std;

int main () {
    srand (time(0));
    int num = rand() % 10 + 1;
    int g;

    do {
        cout<<"Enter a number (1 to 10)"<<endl;
        cin>>g;

        if(g < num ){
            cout<<"Too low! Try again."<<endl;
        }
        if (g> num){
            cout<<"Too high! Try again."<<endl;
        }
    }while(g != num);
    cout<<"Congratulations! You guessed it right."<<endl;
    return 0;
}