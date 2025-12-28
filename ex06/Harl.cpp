#include "Harl.hpp"
#include <iostream>

void Harl::debug()
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special ketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I would't be asking for more!" << std::endl;
}

void Harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error()
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    harlComplains ptrToComplains[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i;

    i = 0;
    while(i < 4)
    {
        if(levels[i] == level)
        {
            switch (i)
            {
                case 0:
                    (this->*ptrToComplains[0])();
                case 1:
                    (this->*ptrToComplains[1])();
                case 2:
                    (this->*ptrToComplains[2])();
                case 3:
                    (this->*ptrToComplains[3])();
                    break;
                default:
                    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
                    break;
            }
            return;
        }
            i++;
    }   
}