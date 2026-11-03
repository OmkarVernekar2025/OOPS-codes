#include<iostream>
using namespace std;
class Test
{
private :
    int mark;
    float spi;
public :
    void SetData()
    {
       /* mark = 270;
        spi = 6.5;*/
        cout<<"Enter mark : ";
        cin>>mark;
        cout<<"Enter spi : ";#include<iostream>
using namespace std;
class student
{
    private:
    string name;
    int age;
    public:
    void SetData()
    {
       /* name = "Omkar";
        age = 21;*/
        cout<<"Enter name : ";
        cin>>name;
        cout<<"Enter age : ";
        cin>>age;
    }
    void DisplayData()
    {
        cout<< "name= "<<name<<endl;
        cout<< "age= "<<age;
    }
};
int main()
{
    student s1;
    s1.SetData();
    s1.DisplayData();
    return 0;
}
        cin>>spi;
    }
    void DisplayData()
    {
        cout<< "Mark= "<<mark<<endl;
        cout<< "spi= "<<spi;
    }
};
int main()
{
    Test o1;
    o1.SetData();
    o1.DisplayData();
    return 0;
}
