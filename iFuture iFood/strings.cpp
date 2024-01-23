#include "../bits/stdc++.h"

using namespace std;

/*
 * Complete the 'getMinSubsequences' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING input_str as parameter.
 */

int getMinSubsequences(string input_str) {
    char oldElement;

    int answer = 1;
    int availableSubstringsWith0or1[2] = {};

    oldElement = input_str[0];

    for (int i = 1; i < input_str.size(); i++){
        if (oldElement == input_str[i]){
            if (input_str[i] == '1' && availableSubstringsWith0or1[0] > 0){
                availableSubstringsWith0or1[0]--;
                availableSubstringsWith0or1[1]++;
                continue;
            }

            if (input_str[i] == '0' && availableSubstringsWith0or1[1] > 0) {
                availableSubstringsWith0or1[1]--;
                availableSubstringsWith0or1[0]++;
                continue;
            }

            availableSubstringsWith0or1[0] += input_str[i] == '0' ? 1 : 0;
            availableSubstringsWith0or1[1] += input_str[i] == '1' ? 1 : 0;

            answer++;

            continue;
        }

        oldElement = input_str[i];
    }

    return answer;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string input_str;
    getline(cin, input_str);

    int result = getMinSubsequences(input_str);

    cout << result << "\n";

    fout.close();

    return 0;
}