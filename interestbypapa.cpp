using namespace std;
#include <iostream>
class Principle{
    public:
     float val;
    void read(){
     cout << "Enter the Principle:";
        cin >> val;   
    }
};
class Rate{
    public:
    float val;
    void read(){
        cout<< "Enter rate of interest";
        cin>>val;
    }
};
class Time{
    public:
    float val;
    void read(){
        cout<<"Enter the time duration in years:";
        cin>>val;
    }
};
class Interest{
    private:
     Principle p;
     Rate r;
     Time t;
    public:
    float simple(){
        p.read();
        r.read();
        t.read();
        return p.val*r.val*t.val;
    }
};
int main(){
    Interest si;
    si.simple();
    return 0;
}