int maxSubArray(int* nums, int numsSize){
    int max_count = -100000;
    int max_ending_here = 0;
    for(int i = 0; i < numsSize; i++)
    {
        max_ending_here = max_ending_here + nums[i];
        if(max_count < max_ending_here)
            max_count = max_ending_here;
        
        if(max_ending_here < 0)
          max_ending_here = 0;
        
    }
    return max_count;
    
}