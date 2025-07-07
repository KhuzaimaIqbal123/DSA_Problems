 string s;
    s="the sky is blue";

    vector<int> v;
    char a='a';

    for(int i=0;i<s.size();i++){
        a=s[i];
        if(a ==' '){
            v.push_back(i);
        }
    }   
    cout<<v.back();
    v.pop_back();
    cout<<endl;
    
    cout<<v[0];
    cout<<v[1];
    cout<<v[2];


    