class Solution {
public:
    bool backspaceCompare(string s, string t) {
       string a="",b="";
        
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='#')
            {if(a.length()!=0)
                a.pop_back();
            }
              
            else
                a+=s[i];
        }
        for(int i=0;i<t.length();i++)
        {
            if(t[i]=='#')
            {if(b.length()!=0)
                b.pop_back();}
              
            else
                b+=t[i];
        }
        
        return a==b;
    }
};

/*
 stack <char> stk1;
        stack<char>stk2;
        
         string str1,str2; 
            
         for(int i = 0; i < s.length(); i++){
                 
             if(s[i] != '#')
                         stk1.push(s[i]);
             
                 else if(!stk1.empty()&&s[i] == '#')
                         stk1.pop();
                 
                 
                 
         }
         
         for(int i = 0; i < t.length(); i++){
                 if(t[i] != '#')
                         stk2.push(t[i]);
                else if(t[i] == '#' && !stk2.empty())
                         stk2.pop();
                 
                  
                 
         }
            
         while(!stk1.empty()){
                 
                 str1.push_back(stk1.top());
                 stk1.pop();
                 
         }
            
         while(!stk2.empty()){
                 
                 str2.push_back(stk2.top());
                 stk2.pop();
                 
         }      
            
         return str1 == str2*/