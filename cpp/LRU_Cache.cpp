// { Driver Code Starts


#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends




// design the class:

class LRUCache
{
private:

public:
    int c;
    list<pair<int,int>> l;
    unordered_map<int, list<pair<int,int>> :: iterator> umap;
    LRUCache(int cap)
    {
        c = cap;
        l.clear();
        umap.clear();
    }
    
    int get(int key)
    {
         if(umap.find(key) == umap.end())
            {
                return -1;
            }
            else
            {
                
                auto i = umap[key];
                int y = (*i).second;
                //cout<<"hi"<<(*i).first<<" ";
                l.erase(i);
                l.push_front({key,y});
                umap[key] = l.begin();
                // for(auto j:umap)
                // {
                //     cout<<"umap "<<j.first<<" "<<(*(j.second)).first<<" "<<" "<<(*(j.second)).second<<"\n";
                // }
                return y;
            }
    }
    
    void set(int key, int value)
    {
        if(umap.find(key) == umap.end())
        {
            if(l.size() == c)
            {
                
                int x = l.back().first;
                l.pop_back();
                umap.erase(x);
                l.push_front({key,value});
                umap[key] = l.begin();
            }
            else
            {
                l.push_front({key,value});
                umap[key] = l.begin();
            }
        }
        else
        {
            auto i = umap[key];
            umap.erase(key);
            l.erase(i);
            l.push_front({key,value});
            umap[key] = l.begin();
        }
    }
    
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int capacity;
        cin >> capacity;
        LRUCache *cache = new LRUCache(capacity);
        
        int queries;
        cin >> queries;
        while (queries--)
        {
            string q;
            cin >> q;
            if (q == "SET")
            {
                int key;
                cin >> key;
                int value;
                cin >> value;
                cache->set(key, value);
            }
            else
            {
                int key;
                cin >> key;
                cout << cache->get(key) << " ";
            }
        }
        cout << endl;

    }
    return 0;
}
  // } Driver Code Ends