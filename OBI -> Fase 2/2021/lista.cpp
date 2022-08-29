#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll bc(vector<ll> nums, ll p){
    if(p == (size(nums) - 1 - p) || p >= size(nums)){ //caso de fim
        return 0;
    }
    else{
        if (nums[p] == nums[(size(nums) - 1 - p)]){
            return bc(nums, p+1);
        }
        else if(nums[p] < nums[(size(nums) - 1 - p)]){
            //fazer a soma da p0 e p1
            nums[p+1] += nums[p];
            nums.erase(nums.begin() + p);
            return 1 + bc(nums, p);
        }
        else if(nums[p] > nums[(size(nums) - 1 - p)]){
            //fazer a soma p-1 e p-2
            nums[size(nums) - p - 1 - 1] += nums[(size(nums) - p -1)];
            nums.erase(nums.end() - p - 1);

            return 1 + bc(nums, p);
        }
    }

    return 0;
}

int main(){
    ll n, r;

    cin >> n;

    vector<ll> nums;

    for(ll i = 0; i < n; i++){
        cin >> r;
        nums.push_back(r);
    }

    cout << bc(nums, 0) << "\n";

    return 0;
}