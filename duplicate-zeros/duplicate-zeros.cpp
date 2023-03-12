class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int>arr1;
        // arr1=arr;
        int n=arr.size();
        int count=0;
        for(int i=0;i<arr.size() ;i++){
            if(arr[i]==0){
                // arr1.insert(arr1.begin()+i,0);
                // arr1.insert(arr1.begin()+i+1,0);
                // i+=2;
                arr1.push_back(0);
                arr1.push_back(0);
            }
            else{
                arr1.push_back(arr[i]);
            }
        }
        for(int i=0;i<n;i++){
            arr[i]=arr1[i];
        }
    }
};