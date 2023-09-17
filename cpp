	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    sort(arr, arr+n);
	    
	    int a = 0;
	    int b = n-1;
	    
	    while(a<b){
	        if(arr[a]+arr[b]==x){
	            
	            return true;
	            
	        }
	        
	        
	        else if(arr[a]+arr[b]<x){
	            
	            
	            a++;
	            
	        }
	        
	        
	        else{
	            b--;
	        }
	    }
	
	
	return false;}
