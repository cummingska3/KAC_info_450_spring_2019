#include <iostream>
#include <ofstream>
using namespace std;

///Define the base class for vehicles

class road_vehicle

{

  int wheels;
  int passengers;


public:

  void set_wheels (int num)

  {

    wheels = num;

  }

  int get_wheels ()

  {

    return wheels;

  }

  void set_passengers (int num)

  {
    passengers = num;
  }

  int get_passengers ()

  {

    return passengers;

  }

};

//Define a truck

class truck:public road_vehicle

{
  int cargo;
public:

  void set_cargo (int size)

  {
    cargo = size;

  }

  int get_cargo ()

  {
    return cargo;

  }

};


enum type

{ car, van, wagon };

class automobile:public road_vehicle

{

  enum type car_type;

public:

  void set_type (type t)

  {

    car_type = t;

  }

  enum type get_type ()

  {

    return car_type;

  }



};

class Linked_List

{

public:

  vehicle data;

  node *next;

    node ()

  {

    next = NULL;

  }

void insert(vehicle data);
void print_data();
};

//cout << PUT HIS QUESTION HERE << endl;

//cin >> some variable you have made (e.x. vehicletype, wheels etc);

//cout<< NEXT QUESTION << endl;

//cin >> next variable;

int

main ()

{

  char new[] = "add vehicle";
  int value;

  bool c = true;

  while (new, "add vehicle")

    char car[200];

  {

    cout <<

      "Is this an automobile or a truck? Enter 'automobile' or 'truck'?";

    cin >> car;

    int wheels;

    cout << "How many wheels does this vehicle have?";

    cin >> wheels;

    int passengers;

    cout << "How many passengers can this vehicle hold?";

    cin >> passengers;

    int cargo;

    cout << "How much cargo (in pounds) can this vehicle hold?"

    cin >> cargo;


  }



  else

  {

    cout << "What type of automobile is this?   Enter van, car or wagon";

  }

  cout << "Do you wish to make another entry?";

  cout << " Enter add vehicle for yes and 0 for no";

  cin >> add vehicle;
}

print.Linked_List ();



return 0;


}
