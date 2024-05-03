/*
   void segregate0and1(int arr[], int n) {
        int s=0;
        int e=n-1;
        
        while(s<=e)
        {
            if(arr[s]==0) s++;
            else if(arr[e]==1) e--;
            else if(arr[s]==1 && arr[e]==0)
            {
                swap(arr[s],arr[e]);
                s++;
                e--;
            }
        }
    }*/