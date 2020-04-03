Time : O(n)
Space : O(n)

class maximumSubArray {
public:
    int maxSubArray(vector<int>& a) {
        # store maximum sum till now
        int max_so_far = a[0]; 
        # store current maximum
        int curr_max = a[0]; 
  
   for (int i = 1; i < a.size(); i++) 
   {    
        curr_max = max(a[i], curr_max + a[i]); 
        max_so_far = max(max_so_far, curr_max); 
   } 
   return max_so_far;
        
    }
};
