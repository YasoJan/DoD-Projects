/**************************************************************************************************** 
* Author: Yasin Zahir

*  C++ partstrack

* 4/19/2026
*****************************************************************************************************/


/*
Iteration 1: Hello, Part
Start small. Create a Part class with these fields: a part number (string, like "CW-12345"), a description (string), a quantity on hand (int), and a unit cost (double).
*/

#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

class Part{
  private:
    string part_num;
    string desc;
    int quantity;
    double unit_cost;
  public:
    Part(string part_num, string desc, int quantity, double unit_cost) : part_num(part_num), desc(desc), quantity(quantity), unit_cost(unit_cost) {}
    void print(){
      cout << "Part Number: " << part_num << endl;
      cout << "Description: " << desc << endl;
      cout << "Quantity: " << quantity << endl;
      cout << "Unit cost: $" << unit_cost << endl;
    }
};

// Write a main() that creates a Part on the stack, prints its fields to the console, and exits. Compile and run it. Commit.
void list_items(vector<Part> &parts){
  for(int i =0; i<parts.size(); i++){
   parts[i].print();
  }
}
void initialize_arr(vector<Part> &parts){
  parts.push_back(Part("1", "Basic Mission: F-Fighter", 72, 999999.0));
  parts.push_back(Part("2", "Basic Missions: F-Fighter & A-Attack", 585, 999999.0));
  parts.push_back(Part("3", "Basic Mission: E-Special Electronic Installation", 585, 999999.0));
}
void add_part(vector<Part> &parts){
  string part_num;
  string desc;
  int quantity;
  double unit_cost;

  cout << "Enter Part Number: #";
  cin >> part_num;  
  cin.ignore();

  
  cout << "Enter Description: ";
  getline(cin, desc);

  cout << "Enter quantity: ";
  cin >> quantity;
  cin.ignore();

  cout << "Enter Unit Cost: $";
  cin >> unit_cost;
  cin.ignore();

  parts.push_back(Part(part_num, desc, quantity, unit_cost));
}
int main(){
  vector<Part> parts;
  initialize_arr(parts);
  int answer;

  cout << "-------------- C++ partstrack  --------------"<< endl;
  do {
  cout << "-------------- Menu -------------- " << endl;
  cout << "1. List all parts" << endl;
  cout << "2. Add a part" << endl;
  cout << "3. Quit" << endl;
  cout << "-------------- Menu -------------- " << endl;
  
  cout << "Select Option: ";
  cin >> answer;
  cin.ignore();

  if(answer == 1){
    list_items(parts);
  }
  else if(answer == 2){
    add_part(parts);
  }
  }while(answer != 3);
  cout << "-------------- C++ partstrack  --------------"<< endl;

  return 0;
}