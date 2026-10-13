class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        
        // queue<int>q;
        // for(int i=0;i<tickets.size();i++)
        // {
        //     q.push(i);
        // }

        // int time = 0;


        // while(tickets[k]!=0)
        // {
        //     tickets[q.front()]--;
        //     time++;
        //     if( tickets[q.front()]!=0) {
        //         q.push(q.front());}
        //     q.pop();
        // }

        // return time;

         int time = 0;
            int n = tickets.size();
            
        for(int i=0; i<n; i++){
            if(i<=k){
                time+= min(tickets[k], tickets[i]);
            }
            else{
                time+=min(tickets[k]-1, tickets[i]);
            }
        }

        return time;
    }
};