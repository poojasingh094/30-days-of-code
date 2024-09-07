class Solution {
  public:
    // Function returns the second
    // largest elements
    int print2largest(vector<int> &arr) {
        int largest = arr[0];
        int Slargest = -1;
        for(int i=1; i<arr.size(); i++){
            if(arr[i]>largest) largest=arr[i];
        }
        for(int i=0; i<arr.size(); i++){
            if(arr[i]>Slargest && arr[i]< largest) Slargest = arr[i];
        }
        return Slargest;
    }
};

