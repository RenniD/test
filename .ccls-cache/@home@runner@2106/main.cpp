#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream gift("file.txt");

    if (gift) {
        std::cout << "Open 1" << std::endl;
    }

    std::ofstream gif("filek.txt");

    if (gif) {
        std::cout << "Open 2" << std::endl;
    }

  std::ifstream word_ban("nonono.txt");

  if(word_ban){
    std::cout<<"Open 3"<<std::endl;
  }
    std::string line;
    std::string line_ban;
    unsigned int count{};

while (getline(gift, line)) {
        int banned = 0;
        while (getline(word_ban, line_ban)) {
            if (line == line_ban) {
                banned++;
                break;
            }
        }

        if (banned == 0) {
            gif << line << std::endl;
            count++;
        }
}
    std::cout << "Count: " << count << std::endl;

    gift.close();
    gif.close();
    word_ban.close();
  
    return 0;
}
