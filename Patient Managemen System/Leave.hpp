#ifndef Leave_HPP
#define Leave_HPP
class Leave:public Staff{
private:
    string from_date;
    string to_date;
    string type_of_leave;
    string reason;
    string approver;
    string status;
    int days;
public:
    Leave(string name,string from_date,string to_date,string type_of_leave,string reason,string approver,string status,int days);
    string getFrom_Date();
    void setFrom_Date(string from_date);
    string getTo_Date();
    void setTo_Date(string to_date);
    string getType();
    void setType(string type_of_leave);
    string getReason();
    void setReason(string reason);
    string getApprover();
    void setApprover(string approver);
    string getStatus();
    void setStatus(string status);
    int getDays();
    void setDays(int days);
};

#include "Leave.cpp"
#endif
