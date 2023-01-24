#include<iostream>
using namespace std;

int main(){

    int nums[4] = {2,11,15,7};
    int numSize = sizeof(nums)/sizeof(nums[0]);
    int target = 9;

    int result[2];
            for(int i=0; i<numSize; i++){
                for(int j=i+1; j<numSize; j++){
                    if(nums[i] + nums[j] == target){
                        result[0] = i;
                        result[1] = j;
                    }
                }
            }
    cout << result[0] << " " << result[1];
    return 0;
}