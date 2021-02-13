class Solution{
public:
    int minValue(string s, int k)
    {
        map<char,int>mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        priority_queue<pair<int,char>>p;
        
        for(auto it:mp)
        {
            p.push({it.second,it.first});
        }
        while(k--)
        {
            pair<int,char>l;
            l=p.top();
            p.pop();
            l.first--;
            p.push(l);
        }
        int sum=0;
        while(p.size()>0)
        {
            pair<int,char>l=p.top();
            p.pop();
            sum=sum+l.first*l.first;
        }
        return sum;
    }
};
