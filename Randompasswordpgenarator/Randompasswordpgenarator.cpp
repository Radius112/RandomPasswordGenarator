#include <iostream>
#include <fstream>
#include <random>
std::ofstream readers;
std::string filepas;
//this function creates the randomly genarated password
std::string randompas(std::string in)
{
    std::string genar = (in);
    std::random_device random;
    std::mt19937 Gen(random());
    std::shuffle(genar.begin(), genar.end(), Gen);
    filepas = genar;
    return genar;
}

int main()
{
    std::string pasgiver;
    std::cout << "enter random special chars and words and letters [NO SPACES]\n";
    std::cin >> pasgiver;
    std::cout << "your random password is: \n";
    std::cout << randompas(pasgiver);
    //this will put the randomly genarated password in a text file.
    readers.open("pass.txt", std::ios::app);
    if (readers.is_open()) {
        for (int i = 0; i < 1; i++) {
            readers << filepas << "\n";
        }
    }
    return 0;
}