/**************************************************************************************************** 
* Author: Yasin Zahir

*  C++ Fundamentals via a CLI Inventory Tool

* 4/19/2026
*****************************************************************************************************/


/*
Iteration 1: Hello, Part
Start small. Create a Part class with these fields: a part number (string, like "CW-12345"), a description (string), a quantity on hand (int), and a unit cost (double).
*/

#include <iostream>
#include <iomanip>
using std::cout;
using std::cin;
using std::endl;
using std::string;

class Part{
  private:
    string part_num;
    string desc;
    int quantity;
    double unit_cost;
  public:
    Part(string part_num, string desc, int quantity, double unit_cost){
      this->part_num = part_num;
      this->desc = desc;
      this->quantity = quantity;
      this->unit_cost = unit_cost;
    }
    void print(){
      cout << "Part Number: " << this->part_num << endl;
      cout << "Description: " << this->desc << endl;
      cout << "Quantity: " << this->quantity << endl;
      cout << "Unit cost: $" << this->unit_cost << endl;
    }
};

// Write a main() that creates a Part on the stack, prints its fields to the console, and exits. Compile and run it. Commit.

int main(){

  cout << "-------------- C++ CLI Inventory Tool  --------------"<< endl;
  Part growler("752823", "Carrier Based ECM/SEAD", 153, 999999.0 );
  growler.print();
  cout << "-------------- C++ CLI Inventory Tool  --------------"<< endl;

  return 0;
}