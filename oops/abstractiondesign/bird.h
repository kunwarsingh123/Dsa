#if !defined(Bird)
#define Bird_H
using namespace std;
// interface
class Bird{
    public:
    virtual void eat()=0;
    virtual void fly()=0;
    // classes that inherits this class has to be implement pure virtual function 

}
;

// implementation
class sparrow : public Bird{
    public:
    void eat()
    {
        cout<<" eating sparrow"<<endl;

    }
    void fly()
    {
        cout<<"sparrow fly"<<endl;
    }
};

class eagle : public Bird{
    public:
    void eat()
    {
        cout<<" eating eagle"<<endl;

    }
    void fly()
    {
        cout<<"eagle fly"<<endl;
    }
};

#endif //Bird