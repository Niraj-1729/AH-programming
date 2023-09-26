#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        unordered_map<string, int> bloodType;
        vector<string> testcase;
        bloodType["A"] = 0;
        bloodType["B"] = 0;
        bloodType["AB"] = 0;
        bloodType["O"] = 0;

        for (int i = 0; i < n; i++)
        {
            string bloodType;
            cin >> bloodType;
            testcase.push_back(bloodType);
            blood[bloodType]++;

            // updating blood type in map
        }

        int ans = INT_MIN;

        for (int i = 0; i < testcase.size(); i++)
        {
            int chain = 0;
            // LOGIC;
            if (testcase[i] == "A")
            {
                chain += blood["A"] + blood["AB"];
            }
            else if (testcase[i] == "B")
            {
                chain += blood["B"] + blood["AB"];
            }
            else if (testcase[i] == "AB")
            {
                chain += blood["AB"];
            }

            else if (testcase[i] == "O")
            {
                int maxPeople = max(blood["A"], blood["B"]);
                chain+=maxPeople+blood["O"];
            }

            ans = max(ans, chain);
        }

        cout << ans << endl;
    }
    return 0;
}
