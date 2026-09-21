class Solution {
public:
   long long trip(vector<int>&time,long long mid,int totalTrips){
    long long ans=0;
    for(long long i:time){
        ans+=mid/i;
        if (ans >= totalTrips) 
                return ans;
    }
    return ans;
   }
    long long minimumTime(vector<int>& time, int totalTrips) {
       long long start=time[0];
       for(long long i:time){
        start=min(start,i);
       } 
     long long  end= (long long)start*totalTrips;
       long long  mid;
       long long  totaltime;
       long long  anss;
       while(start<=end){
        mid=start+(end-start)/2;
       totaltime=  trip(time,mid,totalTrips);
       if(totaltime>=totalTrips){
         anss=mid;
         end = mid - 1;
       }
       else {
          start=mid+1;
       }
       }
      return anss;
    }
};
