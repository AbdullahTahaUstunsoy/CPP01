#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char *argv[])
{
    if(argc != 4)
    {
        std::cerr << "Wrong amount of arguments! (./main <fileName> <s1> <s2>)" <<std::endl;
        return (1);
    }
    if(argv[2][0] == '\0')
    {
        std::cerr << "Choosen string cannot be empty" <<std::endl;
        return (1);
    }
    std::string inputFileName;
    std::string outputFileName;
    std::string str1;
    std::string str2;
    std::string line;
    std::string new_line;
    size_t pos;
    size_t found;
    

    inputFileName = argv[1];
    str1 = argv[2];
    str2 = argv[3];

    std::ifstream inputFile(inputFileName.c_str());
    if(!inputFile.is_open())
    {
        std::cerr << "File could not be opened" <<std::endl;
        return (1);
    }
    outputFileName = inputFileName + ".replace";

    std::ofstream outputFile(outputFileName.c_str());
    if (!outputFile.is_open())
    {
        std::cerr << "Output file could not be created" << std::endl;
        inputFile.close();
        return (1);
    }
    
    while (std::getline(inputFile, line))
    {
        new_line.clear(); //önceki satırların birikmesini önler
        pos = 0;
        found = line.find(str1, pos);
        while(found != std::string::npos) //std::string::find gibi fonksiyonlar bulamazsa std::string::npos döndürür.
        {
            new_line +=line.substr(pos, found-pos);
            new_line += str2;
            pos = found + str1.length(); 
            found = line.find(str1, pos);
        }
        new_line += line.substr(pos);
        outputFile << new_line << std::endl;
    }

    inputFile.close();
    outputFile.close();
    return (0);
}