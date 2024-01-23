#include "../../bits/stdc++.h"

// Questão 3 - funciona
//using namespace std;
//
//int d[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
//
//bool valid(const vector<string>& river, bool visited[1500][1500], int posX, int posY, int n, int m){
//    return posX >= 0 && posY >= 0 && posX < n && posY < m && river[posX][posY] != '#' && !visited[posX][posY];
//}
//
//bool visited[1500][1500] = {};
//
//int main(){
//    int initial_x = 0, initial_y = 0;
//    int final_x = 0, final_y = 0;
//
//    vector<string> river;
//
//    int n = 10;
//    int m = 10;
//
//    deque< pair<pair<int, int>, int> > queue;
//
//    queue.push_back(make_pair(make_pair(initial_x, initial_y), 0));
//    visited[initial_x][initial_y] = true;
//
//    while(!queue.empty())
//    {
//        pair<pair<int, int>, int> node = queue.front();
//        queue.erase(queue.begin());
//
//        if (node.first.first == final_x && node.first.second == final_y){
//            return node.second;
//        }
//
//        for (int i = 0; i < 4; i++){
//            int newX = node.first.first + d[i][0];
//            int newY = node.first.second + d[i][1];
//
//            pair<pair<int, int>, int> newNode = make_pair(make_pair(newX, newY), i > 1 ? node.second + 1 : node.second);
//
//            if(valid(river, visited, newX, newY, n, m)){
//                queue.push_back(newNode);
//                visited[newX][newY] = true;
//            }
//        }
//    }
//
//    return -1;
//}

//// Questão 1 - aceita
//using namespace std;
//
///*
// * Complete the 'getMinSubsequences' function below.
// *
// * The function is expected to return an INTEGER.
// * The function accepts STRING input_str as parameter.
// */
//
//int getMinSubsequences(string input_str) {
//    char oldElement;
//
//    int answer = 1;
//    int availableSubstringsWith0or1[2] = {};
//
//    oldElement = input_str[0];
//
//    for (int i = 1; i < input_str.size(); i++){
//        if (oldElement == input_str[i]){
//            if (input_str[i] == '1' && availableSubstringsWith0or1[0] > 0){
//                availableSubstringsWith0or1[0]--;
//                availableSubstringsWith0or1[1]++;
//                continue;
//            }
//
//            if (input_str[i] == '0' && availableSubstringsWith0or1[1] > 0) {
//                availableSubstringsWith0or1[1]--;
//                availableSubstringsWith0or1[0]++;
//                continue;
//            }
//
//            availableSubstringsWith0or1[0] += input_str[i] == '0' ? 1 : 0;
//            availableSubstringsWith0or1[1] += input_str[i] == '1' ? 1 : 0;
//
//            answer++;
//
//            continue;
//        }
//
//        oldElement = input_str[i];
//    }
//
//    return answer;
//}
//
//int main()
//{
//    ofstream fout(getenv("OUTPUT_PATH"));
//
//    string input_str;
//    getline(cin, input_str);
//
//    int result = getMinSubsequences(input_str);
//
//    cout << result << "\n";
//
//    fout.close();
//
//    return 0;
//}

////Questão 2 - Incorreta
//using namespace std;
//
//string ltrim(const string &);
//string rtrim(const string &);
//
//
//
///*
// * Complete the 'getMinOperations' function below.
// *
// * The function is expected to return an INTEGER.
// * The function accepts following parameters:
// *  1. INTEGER_ARRAY change
// *  2. INTEGER_ARRAY arr
// */
//
//int getMinOperations(vector<int> change, vector<int> arr) {
//    vector<vector<int> > schedule(arr.size(), vector<int>());
//
//    vector<int> pointers(arr.size(), 0);
//
//    int maximumPointer = change[change.size() - 1];
//
//    int oldDeadline = change.size() - 1;
//    int deadline = change.size() - 1;
//
//    bool isPossible = 0;
//
//    for (int i = change.size(); i >= 0; i--){
//        schedule[change[i]].push_back(i);
//    }
//
//    deadline = schedule[maximumPointer][0];
//
//    auto lowestMinimum = accumulate(arr.begin(), arr.end(), 0);
//
//    cout << lowestMinimum << " " << maximumPointer << " " <<(lowestMinimum <= maximumPointer) << "\n";
//
//    while (lowestMinimum <= schedule[maximumPointer][pointers[maximumPointer]]){
//        for (int i = 0; i < arr.size(); i++){
//            if (arr[i] >= pointers[i]){
//                if (isPossible){
//                    deadline = schedule[maximumPointer][pointers[arr[i]]--];
//                    return deadline + 1;
//                }
//
//                return -1;
//            }
//        }
//
//        pointers[maximumPointer] += (schedule[maximumPointer].size() > pointers[maximumPointer] + 1) ? 1 : 0;
//        if (deadline == schedule[maximumPointer][pointers[maximumPointer]]){
//            break;
//        }
//
//        oldDeadline = deadline;
//        deadline = schedule[maximumPointer][pointers[maximumPointer]];
//
//        if (!isPossible){
//            isPossible = true;
//        }
//    }
//
//    return deadline + 1;
//}
//
//int main()
//{
//    ofstream fout(getenv("OUTPUT_PATH"));
//
//    string change_count_temp;
//    getline(cin, change_count_temp);
//
//    int change_count = stoi(ltrim(rtrim(change_count_temp)));
//
//    vector<int> change(change_count);
//
//    for (int i = 0; i < change_count; i++) {
//        string change_item_temp;
//        getline(cin, change_item_temp);
//
//        int change_item = stoi(ltrim(rtrim(change_item_temp)));
//
//        change[i] = change_item;
//    }
//
//    string arr_count_temp;
//    getline(cin, arr_count_temp);
//
//    int arr_count = stoi(ltrim(rtrim(arr_count_temp)));
//
//    vector<int> arr(arr_count);
//
//    for (int i = 0; i < arr_count; i++) {
//        string arr_item_temp;
//        getline(cin, arr_item_temp);
//
//        int arr_item = stoi(ltrim(rtrim(arr_item_temp)));
//
//        arr[i] = arr_item;
//    }
//
//    int result = getMinOperations(change, arr);
//
//    cout << result << "\n";
//
//    fout.close();
//
//    return 0;
//}
//
//string ltrim(const string &str) {
//    string s(str);
//
//    s.erase(
//            s.begin(),
//            find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
//    );
//
//    return s;
//}
//
//string rtrim(const string &str) {
//    string s(str);
//
//    s.erase(
//            find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
//            s.end()
//    );
//
//    return s;
//}
