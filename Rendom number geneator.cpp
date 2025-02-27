#include<iostream>
#include<ctime>

int main(){
  int iGUess;
//pseudo-random integral numbers

srand(time(NULL));//// Initialize random seed based on current time

int iSerect =rand()%10 +1;

do{

    std::cout << "Guess the number ";
    std::cin >> iGUess;

    if (iSerect > iGUess)
    {
        std::cout << "The secret number is higher.\n";
    }
    else
        std::cout << "The secret number is lower.\n";

}while(iSerect != iGUess);


std::cout << "Congratulations!\n";


return 0;
}
