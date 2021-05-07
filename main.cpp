#include <iostream>
#include <string>

using namespace std;

struct name_address{
  string name;
  string address;
  string city;
  string state;
  string zip;
};

void print_address(name_address);
name_address query_for_address();
string query_for_string(string);

void print_address(name_address my_address){

  cout << "The name entered was: " << my_address.name << endl;
  cout << "The address entered was: "  << my_address.address << endl;
  cout << "The city entered was: " << my_address.city << endl;
  cout << "The state entered was: " << my_address.state << endl;
  cout << "The zip entered was: " << my_address.zip << endl;

  return;
}



name_address query_for_address(){
name_address my_address;

  my_address.name    = query_for_string("Enter your name: ");
  my_address.address = query_for_string("Enter your address: ");
  my_address.city    = query_for_string("Enter your city: ");
  my_address.state   = query_for_string("Enter your state: ");
  my_address.zip     = query_for_string("Enter your zipcode: ");

  return my_address;
}

string query_for_string(string prompt){
  string response;

  cout << prompt;
  cin >> response;

  return response;
}  

int main() {
    name_address my_address;

    name_address *work_location;

    work_location = &my_address;

    my_address = query_for_address();

    cout << "\n";

    print_address(*work_location);

    return 0;
}