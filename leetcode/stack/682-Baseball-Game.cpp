class Solution {
public:
    int calPoints(vector<string>& operations) {
        int sum=0;
         vector<int> arr; 
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="+"){
               int val=arr[arr.size()-1]+arr[arr.size()-2];
                arr.push_back(val);
                sum += val;
            }
            else if(operations[i]=="D"){
               int val = 2 * arr.back();
                arr.push_back(val);
                sum += val;
            }
                else if(operations[i]=="C"){
                sum -= arr.back();
                arr.pop_back();
            }
         else  {int val = stoi(operations[i]);
                arr.push_back(val);
                sum += val;
        }
        }
        return sum;
    }
};