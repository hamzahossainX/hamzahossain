
#include<iostream>

int getDigit(const int number);
int sumoddDigit(const std::string cardNumber);
int sumEvenDigit(const std::string cardNumber);

int main(){


 std::string cardNumber;

 int result =0;


std::cout << "Enter a credit number: ";
std::getline(std::cin,cardNumber);


result= sumEvenDigit(cardNumber)+sumoddDigit(cardNumber);

if(result %10 ==0){
    std::cout << cardNumber << " is valid";

}
else
    std::cout << cardNumber << " is not valid";

return 0;
}
int getDigit(const int number){
    //18    8       1 %10 =1 ;

return number %10 + (number /10 %10);
}
int sumoddDigit(const std::string cardNumber){
    int sum=0;
    int a=cardNumber.size();

    for(int i=a-1; i>=0;i-=2){

            sum+=(cardNumber[i]-'0');

    }
    return sum;


}
int sumEvenDigit(const std::string cardNumber){

    int sum=0;
    int a=cardNumber.size();
    for(int i=a-2; i>=0;i-=2){
            sum+=getDigit((cardNumber[i]-'0')*2);

    }
    return sum;

}
