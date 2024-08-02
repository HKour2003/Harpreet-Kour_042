class Browser
{
    public:

    vector<string>history;
    int pos;
    Browser(string &homepage)
    {
      history.push_back(homepage);
      pos=0;
    }
    
    void visit(string &url)
    { 
        history.erase(history.begin() + pos+ 1, history.end());
        history.push_back(url);
        pos++;
    }

    string back(int steps)
{
        if ((pos-steps)< history.size()) {
          pos -= steps;
        } 
        else {
          pos = 0;
        }
    return history[pos];
}

string forward(int steps)
{

    if ((steps+pos) < history.size()) {
        pos += steps;

    }
    else{
        pos=history.size()-1;
    }

    return history[pos]; 
}
        
    
};
