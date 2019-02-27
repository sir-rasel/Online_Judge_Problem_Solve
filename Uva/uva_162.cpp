#include <bits/stdc++.h>
using namespace std;

int main(){
    map<char, int> fcount;
    fcount['A'] = 4;
    fcount['K'] = 3;
    fcount['Q'] = 2;
    fcount['J'] = 1;
    while(true){
        deque<char> p[2];
        string card;
        for (int i = 1; i <= 52; ++i){
            cin >> card;
            if (card == "#")
                return 0;

            p[i % 2].push_front(card[1]);
        }

        deque<char> deck;
        int turn = 1;
        int last_face = -1;
        int cover_count = 0;
        while (true){
            if (p[turn].empty()) break;
            char card = p[turn].front();
            p[turn].pop_front();
            deck.push_front(card);
            if (fcount.count(card)){
                last_face = turn;
                cover_count = fcount[card] + 1;
                turn = (turn + 1) % 2;
            }
            if (cover_count){
                --cover_count;
                if (!cover_count){
                    while (!deck.empty()){
                        p[last_face].push_back(deck.back());
                        deck.pop_back();
                    }
                    turn = last_face;
                }
            }
            else
                turn = (turn + 1) % 2;
        }
        int winner = (turn + 1) % 2;
        printf("%d%3d\n", winner + 1, p[winner].size());
    }
    return 0;
}
