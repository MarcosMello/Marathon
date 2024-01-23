#include "../bits/stdc++.h"

using namespace std;

int d[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

bool valid(const vector<string>& river, bool visited[1500][1500], int posX, int posY, int n, int m){
    return posX >= 0 && posY >= 0 && posX < n && posY < m && river[posX][posY] != '#' && !visited[posX][posY];
}

bool visited[1500][1500] = {};

int main(){
    int initial_x = 0, initial_y = 0;
    int final_x = 0, final_y = 0;

    vector<string> river;

    int n = 10;
    int m = 10;

    deque< pair<pair<int, int>, int> > queue;

    queue.push_back(make_pair(make_pair(initial_x, initial_y), 0));
    visited[initial_x][initial_y] = true;

    while(!queue.empty())
    {
        pair<pair<int, int>, int> node = queue.front();
        queue.erase(queue.begin());

        if (node.first.first == final_x && node.first.second == final_y){
            return node.second;
        }

        for (int i = 0; i < 4; i++){
            int newX = node.first.first + d[i][0];
            int newY = node.first.second + d[i][1];

            pair<pair<int, int>, int> newNode = make_pair(make_pair(newX, newY), i > 1 ? node.second + 1 : node.second);

            if(valid(river, visited, newX, newY, n, m)){
                queue.push_back(newNode);
                visited[newX][newY] = true;
            }
        }
    }

    return -1;
}