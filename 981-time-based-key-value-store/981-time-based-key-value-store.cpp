class TimeMap {
public:
    unordered_map<string,unordered_map<int,string>>um;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        um[key][timestamp]=value;
    }
    
    string get(string key, int timestamp) {
      
        for(int i=timestamp;i>0;i--)
        {
            if(um[key].find(i)!=um[key].end())
                return um[key][i];
        }
        return "";
    }
};

  
/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */