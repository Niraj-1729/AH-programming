// Image Overlap
// Problem link:
// https://leetcode.com/problems/image-overlap/

/*
Intution:
Same overlapping zone would share the same relative positional differnece(linear transformation vector).
**Vab = (Xb - Xa, Yb - Ya)**
```

  IMG 1       IMG 2
  1 1 0       0 0 0
  0 1 0       0 1 1
  0 1 0       0 0 1

// Subtracting the co-ordinates

{0,0}  - {1,1} = { -1 , -1 } 
{0,0}  - {1,2} = { -1,  -2 }
{0,0} - {2, 2} = { -2, -2 }

{0,1}  - {1,1} = { -1 , 0 } 
{0,1}  - {1,2} = { -1 , -1 } 
{0,1} - {2, 2} = { -2, -1 }

{0,2}  - {1,1} = { -1 , 1 } 
{0,2}  - {1,2} = { -1 , 0 } 
{0,2}  - {2,2} = { -2 , 0 } 

and count of { -1 , -1 } is the max overlaping zone = 3 .
*/

// Implementation:

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<pair<int, int>> nonZeroCells(vector<vector<int>>& img){
        // filter out those non-zero cells in each matrix respectively.
        vector<pair<int, int>> res;
        for(int i = 0; i < img.size(); i++){
            for(int j = 0; j < img.size(); j++){
                if(img[i][j] == 1)
                    res.push_back({i,j});
            }
        }
        return res;
    }
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        vector<pair<int, int>> AOnes = nonZeroCells(img1); // {row, col}
        vector<pair<int, int>> BOnes = nonZeroCells(img2);
        int maxOverlaps = 0;
        // calculate the corresponding relative positional differnece(linear transformation vector)
        // as Vab = (Xb - Xa, Yb - Ya)
        // (row, col) -> count
        map<pair<int, int>, int> groupCount;
        for(auto a: AOnes){
            for(auto b: BOnes){
                pair<int, int> val = {b.first-a.first, b.second-a.second};
                // same overlapping zone would share the same relative positional differnece(linear transformation vector).
                groupCount[val]++;
                maxOverlaps = max(maxOverlaps, groupCount[val]);
            }
        }
        return maxOverlaps;
    }
};
