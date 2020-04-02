class singleNumberClass {
public:
    int singleNumber(vector<int>& ar) {
        int res = ar[0]; 
        for (int i = 1; i < ar.size(); i++) 
            res = res ^ ar[i];                     # Apply XOR operation
        return res;
    }
};
