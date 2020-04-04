Time : O(n)
Space : O(1)

class MoveZerosSolution {
public:
    void moveZeroes(vector<int>& nums) {
        int zeros = 0;
        int endOfArray = 0;
        for(int num : nums){
        # count number of zeros
            if(num == 0){
                zeros +=1;
            }
            else{
                nums[endOfArray] = num;
                endOfArray +=1;
            }
        }
        # fill all the zeros at the end of array
        for(int i=0; i<zeros; i++){
            nums[endOfArray] = 0;
            endOfArray +=1;
        }
    }
};
