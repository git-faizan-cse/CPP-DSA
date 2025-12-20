#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int n = height.size();
    int maxVol = 0;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            int width = j - i;
            int heightForArea = min(height[i],height[j]);
            int area = heightForArea * width;
            maxVol = max(maxVol,area);
            // if(height[j] > height[i]){
            //     int currVol = height[i] * ( j - i);
            //     maxVol = max(maxVol, currVol);
            // }
            // if(height[j] <= height[i]){
            //     int currVol = height[j] * ( j - i);
            //     maxVol = max(maxVol, currVol);
            // }
        }
    }

    cout << maxVol;
    return 0;
}