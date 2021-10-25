int isPerfectNumber(long long N) {
        // code here
        long long sum=1;
        for(int i=2 ; i<=sqrt(N) ; i++)
        {
            if(N%i==0)
            {
                if(i==N/i)
                    sum+=i;
                else
                {
                    sum+=i;
                    sum+=N/i;
                }
            }
        }
        if(sum==N && N!=1)
            return 1;
        else 
             return 0;
        
    }