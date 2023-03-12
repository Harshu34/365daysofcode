class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

// Space complexity is O(N) because vector is created;

    //     int start1 = 0;
    //     int start2 = 0;
    //     vector<int> v3;
    //     v3=nums1;
    //     int k=0;
    //     while(start1 < m and start2 < n){
    //     if(v3[start1] <= nums2[start2]){
    //         nums1[k]=v3[start1];
    //         k++;
    //         start1++;
    //     }
    //     else{
    //         nums1[k++]=nums2[start2++];
    //     }
    // }
    //    while(start2 < n){
    //        nums1[k++]=nums2[start2++];
    //     }
        
    //     while(start1 < m){
    //         nums1[k++]=v3[start1++];
    //     }



//   Space complexity is O(1)
     int i=m-1,j=n-1;
      int k=m+n-1;
      while(j>=0 and i>=0){
          if(nums1[i]<nums2[j])nums1[k--]=nums2[j--];
          else nums1[k--]=nums1[i--];
      }
      while(j>=0)nums1[k--]=nums2[j--];
    }
};