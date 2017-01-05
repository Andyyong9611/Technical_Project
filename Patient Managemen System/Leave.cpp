#include "Leave.hpp"

Leave::Leave(string name,string from_date,string to_date,string type_of_leave,string reason,string approver,string status,int days):Staff(name),from_date(from_date),to_date(to_date),type_of_leave(type_of_leave),reason(reason),approver(approver),status(status),days(days){}
string Leave::getFrom_Date(){return from_date;}
void Leave::setFrom_Date(string from_date){this->from_date=from_date;}
string Leave::getTo_Date(){return to_date;}
void Leave::setTo_Date(string to_date){this->to_date=to_date;}
string Leave::getType(){return type_of_leave;}
void Leave::setType(string type_of_leave){this->type_of_leave=type_of_leave;}
string Leave::getReason(){return reason;}
void Leave::setReason(string reason){this->reason=reason;}
string Leave::getApprover(){return approver;}
void Leave::setApprover(string approver){this->approver=approver;}
string Leave::getStatus(){return status;}
void Leave::setStatus(string status){this->status=status;}
int Leave::getDays(){return days;}
void Leave::setDays(int days){this-> days= days;}

