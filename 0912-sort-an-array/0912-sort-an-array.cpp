class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        
        // Build a max heap (heapify from the last non-leaf node upward)
        for (int i = n / 2 - 1; i >= 0; i--) {
            heapify(nums, n, i);
        }
        
        // Repeatedly move the max to the end, then re-heapify the rest
        for (int i = n - 1; i > 0; i--) {
            swap(nums[0], nums[i]);
            heapify(nums, i, 0);
        }
        
        return nums;
    }
    
private:
    void heapify(vector<int>& nums, int heapSize, int root) {
        int largest = root;
        int left = 2 * root + 1;
        int right = 2 * root + 2;
        
        if (left < heapSize && nums[left] > nums[largest]) {
            largest = left;
        }
        if (right < heapSize && nums[right] > nums[largest]){
            largest = right;
        }
        
        if (largest != root) {
            swap(nums[root], nums[largest]);
            heapify(nums, heapSize, largest);  // sift down further
        }
    }
};