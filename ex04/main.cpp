#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <algorithm>


void    ft_sed(std::string filename, std::string s1, std::string s2)
{
    std::ifstream   ifs(filename.c_str());
    std::string     tmp;
    size_t          i;

    if (ifs.is_open()) {
        std::string filename_replace = filename + ".replace";
        std::ofstream   ofs(filename_replace.c_str());
    while (std::getline(ifs, tmp)) {
        i = tmp.find(s1, 0);
        while (i != std::string::npos) {
            if (s1.empty())
                break ;
            tmp.erase(i, s1.size());
            tmp.insert(i, s2);
            i = tmp.find(s1, 0);
        }
        ofs << tmp;
        ofs << std::endl;
    }
    ofs.close();
    ifs.close();
    }
}

int main(int argc, char **argv)
{
    if (argc != 4)
        return (0);
    ft_sed(argv[1], argv[2], argv[3]);
}
