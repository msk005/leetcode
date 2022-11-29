class RandomizedSet {
public:
    unordered_map<int,int>um;
    vector<int>v;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
       if(um.find(val)==um.end())
       {
          v.push_back(val);
           um[val]=v.size()-1;
           return true ;
       }
        return false;
    }
    
    bool remove(int val) {
        if(um.find(val)!=um.end())
        {
            int end=v[v.size()-1];
            v[um[val]]=end;
            v.pop_back();
            
            um[end]=um[val];
            um.erase(val);
            return true;
        }
        return false;
    }
    
    int getRandom() {
        return v[rand()%v.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */