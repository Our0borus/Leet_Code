class Solution {
public:
    int numOfSubarrays(vector<int>& a, int k, int t) {
        int c=0,j=0;
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=a[i];
        }
        if(sum>=k*t)
                c+=1;
        for(int i=k;i<a.size();i++){
              
                sum-=a[j++];
                sum+=a[i];

            if(sum>=k*t)
                c+=1;
        }
    
        return c;
    }
};