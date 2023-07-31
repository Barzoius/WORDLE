#include <iostream>
#include <fstream>
#include <map>

class Letter_Frequency_Table{
private:
    std::map<char, int> Frq_Map;

public:

    explicit Letter_Frequency_Table(std::ifstream& file){
        std::string line;
        int cnt = 0;
        Frq_Map['a'];Frq_Map['b'];Frq_Map['c'];Frq_Map['d'];
        Frq_Map['e'];Frq_Map['f'];Frq_Map['g'];Frq_Map['h'];
        Frq_Map['i'];Frq_Map['j'];Frq_Map['k'];Frq_Map['l'];
        Frq_Map['m'];Frq_Map['n'];Frq_Map['o'];Frq_Map['p'];
        Frq_Map['q'];Frq_Map['r'];Frq_Map['s'];Frq_Map['t'];
        Frq_Map['u'];Frq_Map['v'];Frq_Map['w'];Frq_Map['x'];
        Frq_Map['y'];Frq_Map['z'];

        while(std::getline(file, line)){
            for(char & i : line){
                char lower_case_i = std::tolower(i);
                Frq_Map[lower_case_i]++;
            }
            cnt++;
        }

        for(auto& i : Frq_Map){
            std::cout<< i.first <<":"<< i.second<<std::endl;
        }

        std::cout<<cnt;
    }
};

int main() {
    std::cout << "WORDLE!" << std::endl;
    std::ifstream inputFile("ro_words");
    if(!inputFile.is_open()){
        std::cerr<<"File not open";
        return 1;}
    Letter_Frequency_Table RO(inputFile);

    return 0;
}
