#include<iostream>
#include<ctime>

int main()
{
    srand(time(0));

    int randnumber= rand()%5+1;

    switch(randnumber)
    {
    case 1:
        std::cout << "You win bumper sticker!\n";
        break;
    case 2:
        std::cout << "You win a t-shirt!\n";
        break;
    case 3:
        std::cout << "You win a free lunch!\n";
        break;
    case 4:
        std::cout << "You win a gift card!\n";
        break;
    case 5:
        std::cout << "You win a concert tickets!\n";
        break;

    }

    return 0;
}

