#include <iostream>
#include <fstream>
#include <map>

class Letter_Frequency_Table{
private:
    std::map<char, std::vector<int>> Frq_Map;
    std::string line;
    double cnt = 0;

public:

    std::map<char, std::vector<int>> getMap() const { return this -> Frq_Map;};
    double getCnt() const { return this -> cnt;}

    explicit Letter_Frequency_Table(std::ifstream& file){

        Frq_Map['a'] = std::vector<int>(5, 0);
        Frq_Map['b'] = std::vector<int>(5, 0);
        Frq_Map['c'] = std::vector<int>(5, 0);
        Frq_Map['d'] = std::vector<int>(5, 0);
        Frq_Map['e'] = std::vector<int>(5, 0);
        Frq_Map['f'] = std::vector<int>(5, 0);
        Frq_Map['g'] = std::vector<int>(5, 0);
        Frq_Map['h'] = std::vector<int>(5, 0);
        Frq_Map['i'] = std::vector<int>(5, 0);
        Frq_Map['j'] = std::vector<int>(5, 0);
        Frq_Map['k'] = std::vector<int>(5, 0);
        Frq_Map['l'] = std::vector<int>(5, 0);
        Frq_Map['m'] = std::vector<int>(5, 0);
        Frq_Map['n'] = std::vector<int>(5, 0);
        Frq_Map['o'] = std::vector<int>(5, 0);
        Frq_Map['p'] = std::vector<int>(5, 0);
        Frq_Map['q'] = std::vector<int>(5, 0);
        Frq_Map['r'] = std::vector<int>(5, 0);
        Frq_Map['s'] = std::vector<int>(5, 0);
        Frq_Map['t'] = std::vector<int>(5, 0);
        Frq_Map['u'] = std::vector<int>(5, 0);
        Frq_Map['v'] = std::vector<int>(5, 0);
        Frq_Map['w'] = std::vector<int>(5, 0);
        Frq_Map['x'] = std::vector<int>(5, 0);
        Frq_Map['y'] = std::vector<int>(5, 0);
        Frq_Map['z'] = std::vector<int>(5, 0);

        while(std::getline(file, line)){
            for(int i = 0; i < line.length(); i++){
                char lower_case_i = std::tolower(line[i]);
                Frq_Map[lower_case_i][i]++;
            }
            cnt++;
        }
        file.clear();
        file.seekg(0);

        for(auto& i : Frq_Map){
            std::cout<< i.first <<":";
            for(int j = 0; j < i.second.size(); j++)
            {
                std::cout<<i.second[j]<<" ";
            }
            std::cout<<std::endl;
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
