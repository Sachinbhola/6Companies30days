ull getNthUglyNo(int n) {
	    
	    int i=0,j=0,k=0;
	    vector<ull> nums(n);
	    nums[0]=1;
	    for(int x=1;x<n;x++){
	        nums[x]=min({nums[i]*2,nums[j]*3,nums[k]*5});
	        if(nums[x]==nums[i]*2) i++;
	        if(nums[x]==nums[j]*3) j++;
	        if(nums[x]==nums[k]*5) k++;
	    }
	    return nums[n-1];
	    
	}
