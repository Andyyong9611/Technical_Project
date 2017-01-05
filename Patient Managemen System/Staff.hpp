#ifndef Staff_HPP
#define Staff_HPP

class Staff{
private:
    string name;
    string staff_id;
    string position;
    string category;
    string tel_no;
    string fac_depart;
    int leave_balance;
public:
    Staff(string name);
    Staff(string name,string staff_id,string position,string category,string tel_no,string fac_depart,int leave_balance);
    void setName(string name);
    string getName();
    string getStaff_id();
    void setStaff_id(string staff_id);
    string getPosition();
    void setPosition(string position);
    string getCategory();
    void setCategory(string category);
    string getTelNo();
    void setTelNo(string tel_no);
    string getDepart();
    void setDepart(string fac_depart);
    int getLeaveB();
    void setLeaveB(int leave_balance);
};
#include "Staff.cpp"
#endif
