#include <bits/stdc++.h>

using namespace std;

int main(){
    int qP[2];
    int num = 0;
    vector<int> pA;
    vector<int> pJ;

    cin >> qP[0] >> qP[1];

    for(int i = 0; i < qP[0]; i++){
        cin >> num;
        pA.push_back(num);
        num = 0;
    }

    for(int j = 0; j < qP[1]; j++){
        cin >> num;
        pJ.push_back(num);
        num = 0;
    }

    sort(pA.begin(), pA.end());
    sort(pJ.begin(), pJ.end());

    vector<int> feitos;

    if (pJ[qP[1]-1] >= pA[qP[0]-1]){
        cout << "-1";
    }
    else{
        int c = 0, i = 0, f = qP[0] - 1;

        while(c <= f && i < qP[1]){
            int m = c + (f-c) / 2;

            if (pA[m] <= pJ[i]){
                c = m + 1;
            }
            else{
                if (m == 0 || pA[m-1] <= pJ[i]){
                    feitos.push_back(pJ[i]);
                    pA.erase(pA.begin() + m);
                    i++;
                    c = 0;
                    f = qP[0] - 1;
                }
                else{
                    f = m - 1;
                }
            }
        }
        if (pJ == feitos){
            cout << "a";
        }
        else{
            cout << "-1";
        }
    }
}