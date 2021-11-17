// Group Anagrams.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;


vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> map;
    for (int i = 0; i < strs.size(); i++) {
        string temp = strs[i];
        sort(temp.begin(), temp.end());
        map[temp].push_back(strs[i]);
    }
    vector<vector<string>> result;
    for (auto iterator = map.begin(); iterator != map.end(); iterator++) {
        result.push_back(iterator->second);
    }
    return result;
}


int main()
{
    vector<string> strs = { "eat", "tea", "tan", "ate", "nat", "bat" };
    vector<vector<string>> arr = groupAnagrams(strs);
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[i].size(); j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
