#include "Staff.hpp"
Staff::Staff(string name):name(name){}
Staff::Staff(string name,string staff_id,string position,string category,string tel_no,string fac_depart,int leave_balance):
    name(name),staff_id(staff_id),position(position),category(category),tel_no(tel_no),fac_depart(fac_depart),leave_balance(leave_balance){}
string Staff::getName(){return name;}
void Staff::setName(string name){this->name = name;}
string Staff::getStaff_id(){return staff_id;}
void Staff::setStaff_id(string staff_id){this->staff_id =staff_id;}
string Staff::getPosition(){return position;}
void Staff::setPosition(string position){this->position=position;}
string Staff::getCategory(){return category;}
void Staff::setCategory(string category){this->category=category;}
string Staff::getTelNo(){return tel_no;}
void Staff::setTelNo(string tel_no){this->tel_no=tel_no;}
string Staff::getDepart(){return fac_depart;}
void Staff::setDepart(string fac_depart){this->fac_depart=fac_depart;}
int Staff::getLeaveB(){return leave_balance;}
void Staff::setLeaveB(int leave_balance){this->leave_balance=leave_balance;}
