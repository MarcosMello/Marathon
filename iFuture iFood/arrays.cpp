//Questão 2 - Incorreta

#include "../bits/stdc++.h"

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'getMinOperations' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY change
 *  2. INTEGER_ARRAY arr
 */

int getMinOperations(vector<int> change, vector<int> arr) {
    vector<vector<int> > schedule(arr.size(), vector<int>());

    vector<int> pointers(arr.size(), 0);

    int maximumPointer = change[change.size() - 1];

    int oldDeadline = change.size() - 1;
    int deadline = change.size() - 1;

    bool isPossible = 0;

    for (int i = change.size(); i >= 0; i--){
        schedule[change[i]].push_back(i);
    }

    deadline = schedule[maximumPointer][0];

    auto lowestMinimum = accumulate(arr.begin(), arr.end(), 0);

    cout << lowestMinimum << " " << maximumPointer << " " <<(lowestMinimum <= maximumPointer) << "\n";

    while (lowestMinimum <= schedule[maximumPointer][pointers[maximumPointer]]){
        for (int i = 0; i < arr.size(); i++){
            if (arr[i] >= pointers[i]){
                if (isPossible){
                    deadline = schedule[maximumPointer][pointers[arr[i]]--];
                    return deadline + 1;
                }

                return -1;
            }
        }

        pointers[maximumPointer] += (schedule[maximumPointer].size() > pointers[maximumPointer] + 1) ? 1 : 0;
        if (deadline == schedule[maximumPointer][pointers[maximumPointer]]){
            break;
        }

        oldDeadline = deadline;
        deadline = schedule[maximumPointer][pointers[maximumPointer]];

        if (!isPossible){
            isPossible = true;
        }
    }

    return deadline + 1;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string change_count_temp;
    getline(cin, change_count_temp);

    int change_count = stoi(ltrim(rtrim(change_count_temp)));

    vector<int> change(change_count);

    for (int i = 0; i < change_count; i++) {
        string change_item_temp;
        getline(cin, change_item_temp);

        int change_item = stoi(ltrim(rtrim(change_item_temp)));

        change[i] = change_item;
    }

    string arr_count_temp;
    getline(cin, arr_count_temp);

    int arr_count = stoi(ltrim(rtrim(arr_count_temp)));

    vector<int> arr(arr_count);

    for (int i = 0; i < arr_count; i++) {
        string arr_item_temp;
        getline(cin, arr_item_temp);

        int arr_item = stoi(ltrim(rtrim(arr_item_temp)));

        arr[i] = arr_item;
    }

    int result = getMinOperations(change, arr);

    cout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
            s.begin(),
            find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
            find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
            s.end()
    );

    return s;
}
