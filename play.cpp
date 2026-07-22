#include <iostream>
#include <random>
void play(){
    //defining player move
    int playerMove;
    std:: cout<<"Enter number : ";
    std:: cin>> playerMove;

    //defining computer move
    int lower = 1, upper = 3; //range

    // Create a random number generator
    std::random_device rd;  // Seed
    std::mt19937 gen(rd()); // Mersenne Twister engine
    std::uniform_int_distribution<> distr(lower, upper);
    
    int computerMove = distr(gen); //generating the number which includes both the upper and lower bounds
    //1 - rock, 2 - paper, 3 - scissors

    //processing
    if(playerMove == 1){
        if(computerMove == 1){
            std::cout<<"YOU CHOSE - Rock : COMPUTER CHOSE - Rock :: TIE!"<<std::endl;
        }
        else if(computerMove == 2){
            std::cout<<"YOU CHOSE - Rock : COMPUTER CHOSE - Paper :: YOU LOSE!"<<std::endl;
        }
        else if(computerMove == 3){
            std::cout<<"YOU CHOSE - Rock : COMPUTER CHOSE - Scissors :: YOU WIN!"<<std::endl;
        }
    }

    if(playerMove == 2){
        if(computerMove == 1){
            std::cout<<"YOU CHOSE - Paper : COMPUTER CHOSE - Rock :: YOU WIN!"<<std::endl;
        }
        else if(computerMove == 2){
            std::cout<<"YOU CHOSE - Paper : COMPUTER CHOSE - Paper :: TIE!"<<std::endl;
        }
        else if(computerMove == 3){
            std::cout<<"YOU CHOSE - Paper : COMPUTER CHOSE - Scissors :: YOU LOSE!"<<std::endl;
        }
    }

    if(playerMove == 3){
        if(computerMove == 1){
            std::cout<<"YOU CHOSE - Scissors : COMPUTER CHOSE - Rock :: YOU LOSE!"<<std::endl;
        }
        else if(computerMove == 2){
            std::cout<<"YOU CHOSE - Scissors : COMPUTER CHOSE - Paper :: YOU WIN!"<<std::endl;
        }
        else if(computerMove == 3){
            std::cout<<"YOU CHOSE - Scissors : COMPUTER CHOSE - Scissors :: TIE!"<<std::endl;
        }
    }
}


int main(){
    std:: cout <<"***************************************************************************************"<<std::endl;;
    std:: cout << "GAME OF ROCK-PAPER-SCISSORS"<<std::endl;;
    std:: cout << "Press 1 for Rock , Press 2 for Paper , Press 3 for Scissors"<<std::endl;;
    std:: cout <<"***************************************************************************************"<<std::endl;;

    play();
    bool found = true;
    while(found){
        std::cout<<"Press 1 for further rounds : Press any key to EXIT :- ";
        int a;
        std::cin>>a;
        if(a==1){
            play();
        }
        else{
            std::cout<< "EXIT";
            found=false;
        }
    }
    
}
