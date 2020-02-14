#include <algorithm>
#include <fstream>
#include <string>

using std::getline;
using std::string;

int main() {
    std::ifstream inf("input.txt");
    string buffer;

    int w, h;
    int keyboard_x[94], keyboard_y[94];
    inf >> w >> h;
    getline(inf, buffer);
    for (int i = 0; i < h; ++i) {
        getline(inf, buffer);
        for (int j = 0; j < w; ++j) {
            keyboard_x[buffer[j] - 33] = j;
            keyboard_y[buffer[j] - 33] = i;
        }
    }
    
    int best_cost = 1000000;
    string best_name;

    for (int lang = 0; lang < 3; ++lang) {
        string the_template;
        string curr_name;
        getline(inf, curr_name);
        getline(inf, buffer); // skipping %TEMPLATE-START%

        while (getline(inf, buffer), buffer != "%TEMPLATE-END%") {
            for (
                unsigned i = 0, i_max = buffer.length();
                i < i_max;
                ++i
            ) {
            	if (buffer[i] > ' ') {
                	the_template.push_back(buffer[i]);
                }
            }
        }

        int curr_cost = 0;
        for (unsigned i = 1, i_max = the_template.size(); i < i_max; ++i) {
            int i1 = the_template[i] - 33, i2 = the_template[i - 1] - 33;
            curr_cost += std::max(std::abs(keyboard_x[i1] - keyboard_x[i2]),
                                  std::abs(keyboard_y[i1] - keyboard_y[i2]));
        }

        if (best_cost > curr_cost) {
            best_cost = curr_cost;
            best_name = curr_name;
        }
    }

    std::ofstream ouf("output.txt");
    ouf << best_name << "\n" << best_cost << "\n";
    return 0;
}