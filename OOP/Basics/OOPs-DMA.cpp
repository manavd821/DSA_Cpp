#include<iostream>
using namespace std;
class cls
{
    public:
    char a;
    int b,f;
    char c;
};
int main()
{
    cls *obj=new cls;
    (*obj).b=10;
    obj->f=15;
    cout<<(*obj).f<<' '<<obj->b<<endl;

}
