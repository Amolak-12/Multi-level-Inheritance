#include <iostream>
using namespace std;

// Multi-level

class fruit{

   public: 
   string name;
};

class mango:public fruit{
    public:
    int weight;
};

class Alphanso:public mango{
    public:
    int sugarLevel;
};

int main() {
   // Multi-level Inheritance

  Alphanso a;
  a.name = "Alphanso";
  a.weight = 200;
  a.sugarLevel = 120;
  cout << "Name of the fruit is: " << a.name << endl;
  cout << "Weight of the fruit : "<< a.weight << " g" <<endl;
  cout << "Sugar level of the fruit is : " << a.sugarLevel << endl;

}