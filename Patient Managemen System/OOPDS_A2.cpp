/****************************
Program: OOPDS_A2.cpp
Course: OOPDS
Year: 2016/17 Trimester 1
Name: Andy Yong Jun Jie
ID: 1142701565
Lecture: TC02
Email: andyyong9611@gmail.com
Phone: 010-2870920
*****************************/
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
#include "LinkedList.h"
#include "Staff.hpp"
#include "Leave.hpp"
int main(){
    LinkedList<Staff*>s;
    LinkedList<Leave*>l;
    int fbalance;
    s.insert(1,new Staff("Lee*Chong*Wei","1000","President","Executive","012-9999999","FOM",30));
    s.insert(2,new Staff("John","1001","Dean","Academician","012-3456789","FCI",30));
    s.insert(3,new Staff("Jeff","1002","Admin","Executive","012-1111111","FCI",30));
    s.insert(4,new Staff("James*Bond","1003","Guard","Non-Executive","012-2222222","FCM",30));
    s.insert(5,new Staff("Andy*Smith","1004","Lecturer","Academician","012-3333333","FCI",30));
    s.insert(6,new Staff("Li*Dan","1005","Tutor","Academician","012-4444444","FOE",30));
    s.insert(7,new Staff("Jacky","1006","Lecturer","Non-Executive","012-5555555","FCI",30));
    l.insert(1,new Leave("Jeff","12-12-2016","14-12-2016","Emergency*Leave","Emergency","Andy","Pending*Approval",3));
    l.insert(2,new Leave("James*Bond","16-11-2016","18-11-2016","Emergency*Leave","Emergency","Andy","Pending*Approval",3));
    l.insert(3,new Leave("James*Bond","20-2-2016","21-2-2016","Compassionate*Leave","Personal*emergency","Andy","Pending*Approval",2));
    l.insert(4,new Leave("Andy*Smith","11-5-2016","15-5-2016","Medical*Leave","Denggi","Andy","Pending*Approval",5));
    l.insert(5,new Leave("Li*Dan","16-7-2016","19-7-2016","Compassionate*Leave","Family*emergency","Andy","Pending*Approval",4));
    l.insert(6,new Leave("Li*Dan","16-3-2016","18-3-2016","Annual*Leave","Family*holiday","Andy","Pending*Approval",3));
    l.insert(7,new Leave("Jeff","26-10-2016","29-10-2016","Medical*Leave","Stomachache","John","Pending*Approval",4));
    l.insert(8,new Leave("Jeff","25-9-2016","28-9-2016","Annual*Leave","Holiday","Amy","Pending*Approval",4));
    for(int i = 1; i <= s.getLength(); i++){
        for(int j = 1; j <= l.getLength(); j++){
            if(s.getEntry(i)->getName() == l.getEntry(j)->getName()){
                fbalance = s.getEntry(i)->getLeaveB() - l.getEntry(j)->getDays();
                s.getEntry(i)->setLeaveB(fbalance);
            }
        }
    }
    label:
    system("cls");
    system("COLOR 2B");
    int choice;
    string name;
    string staff_id;
    string position;
    string category;
    string tel_no;
    string fac_depart;
    int leave_balance;
    string From_date;
    string To_date;
    string type_of_leave;
    string reason;
    string approver;
    string status;
    int days;
    int sCounter = 1;
    int lCounter = 1;
    int x;
    int balance;
    string y;
    int id;
    string confirm;
    cout << "                      *************************************" << '\n';
    cout << "                      ** Human Capital Management of MMU **" << '\n';
    cout << "                      *************************************" << '\n';
    cout << endl << endl << endl;
    cout << "                   +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+"<< endl;
    cout << "                   * 1. Add a new staff into the system        /"<< endl;
    cout << "                   + 2. Retrieve or update or remove staff info+"<< endl;
    cout << "                   * 3. Update or cancel leave                 /"<< endl;
    cout << "                   + 4. Apply leave or Retrieve leave          +"<< endl;
    cout << "                   * 5. Check leave status                     /"<< endl;
    cout << "                   + 6. View leave statistic                   +"<< endl;
    cout << "                   * 7. Save Records to File                   /"<< endl;
    cout << "                   + 8. Load Records from File                 +"<< endl;
    cout << "                   * Any Alphabet/Number not(1-8).Quit         /"<< endl;
    cout << "                   *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<< endl;
    cout << "                   ("<<s.getLength()<< ") staffs in HCM Records"<<endl;
    cout << "                   ("<<l.getLength()<< ") staff leaves in HCM Records"<<endl;
    cout << endl;
    cout <<"                   =>";
    cin >> choice;
    switch(choice){
    case 1:{
            system("cls");
            cout << "                      ******************" << '\n';
            cout << "                      ** Staff Record **" << '\n';
            cout << "                      ******************" << '\n';
            for( int i = 1; i <= s.getLength(); i++ )
            {
                cout << i << ".Staff Name:" << s.getEntry(i)->getName() << endl;
                cout << "  Staff id:" << s.getEntry(i)->getStaff_id() << endl;
                sCounter++;
            }
            cout << "Staff Name =>";
            cin >> name;
            cout << "Staff id =>";
            cin >> staff_id;
            cout << "Position =>";
            cin >> position;
            cout << "Category =>";
            cin >> category;
            cout << "Tel.no(01X-XXXXXXXX) =>";
            cin >> tel_no;
            cout << "Faculty Department =>";
            cin >> fac_depart;
            s.insert(sCounter,new Staff(name,staff_id,position,category,tel_no,fac_depart,30));
            system("Pause");
            goto label;
    }
    case 2:{
            system("cls");
            cout << "                      ******************" << '\n';
            cout << "                      ** Staff Record **" << '\n';
            cout << "                      ******************" << '\n';
            cout << "Do you want to update or retrieve or delete staff info?(u = update / r = retrieve / d = delete):";
            cin >> confirm;
            if(confirm == "u"){
                label2:
                cout << "Enter staff id that want to update :";
                cin >> staff_id;
                for(int i = 1; i<=s.getLength(); i++){
                    if(staff_id == s.getEntry(i)->getStaff_id()){
                        cout << "1.Staff Name:"<<s.getEntry(i)->getName()<<endl;
                        cout << "2.Staff id:"<<s.getEntry(i)->getStaff_id()<<endl;
                        cout << "3.Position:"<<s.getEntry(i)->getPosition()<<endl;
                        cout << "4.Category:"<<s.getEntry(i)->getCategory()<<endl;
                        cout << "5.Tel.no:"<<s.getEntry(i)->getTelNo()<<endl;
                        cout << "6.Faculty Department:"<<s.getEntry(i)->getDepart()<<endl;
                        cout << "7.Leave Balance:"<<s.getEntry(i)->getLeaveB()<<endl;
                        cout << "Enter (1-6) to update:";
                        cin >> x;
                        if(x == 1){
                            cout << "Staff Name =>";
                            cin >> name;
                            s.getEntry(i)->setName(name);
                            goto label;
                        }
                        else if(x == 2){
                            cout << "Staff id =>";
                            cin >> staff_id;
                            s.getEntry(i)->setStaff_id(staff_id);
                            goto label;
                        }
                        else if(x == 3){
                            cout << "Position =>";
                            cin >> position;
                            s.getEntry(i)->setPosition(position);
                            goto label;

                        }
                        else if(x == 4){
                             cout << "Category =>";
                            cin >> category;
                            s.getEntry(i)->setCategory(category);
                            goto label;

                        }
                        else if(x == 5){
                            cout << "Tel.no(01X-XXXXXXXX)=>";
                            cin >> tel_no;
                            s.getEntry(i)->setTelNo(tel_no);
                            goto label;

                        }
                        else if(x == 6){
                            cout << "Faculty Department";
                            cin >> fac_depart;
                            s.getEntry(i)->setDepart(fac_depart);
                            goto label;

                        }
                        else if(x > 1 ||x < 7){
                            cout <<"Try Again or Exit to main menu.(y = try again / n = main menu)";
                            cin >> y;
                            if(y == "y"){
                                cout << "Back to update menu again." << endl;
                                system("Pause");
                                goto label2;
                            }
                            else if(y == "n"){
                                cout << "Back to main menu." << endl;
                                system("Pause");
                                goto label;
                            }
                        }
                    }

                    }
                 cout << "Not same staff name in this program."<<endl;
                 system("Pause");
                 goto label;
            }
            else if(confirm == "r"){
                    cout << "Enter staff id that want to retrieve :";
                    cin >> staff_id;
                    for(int i = 1; i<=s.getLength(); i++){
                        if(staff_id == s.getEntry(i)->getStaff_id()){
                            cout << "Staff Name:"<<s.getEntry(i)->getName()<<endl;
                            cout << "Staff id:"<<s.getEntry(i)->getStaff_id()<<endl;
                            cout << "Position:"<<s.getEntry(i)->getPosition()<<endl;
                            cout << "Category:"<<s.getEntry(i)->getCategory()<<endl;
                            cout << "Tel.no:"<<s.getEntry(i)->getTelNo()<<endl;
                            cout << "Faculty Department:"<<s.getEntry(i)->getDepart()<<endl;
                            cout << "Leave Balance:"<<s.getEntry(i)->getLeaveB()<<endl;
                            cout << "Back to main menu." << endl;
                            system("Pause");
                            goto label;
                        }
                    }
                    cout << "Not same staff name in this program."<<endl;
                    system("Pause");
                    goto label;
            }
            else if(confirm == "d"){
                    for( int i = 1; i <= s.getLength(); i++ )
                    {
                        cout << i << ".Staff Name:" << s.getEntry(i)->getName()<< endl;
                        cout << "  Staff id:" << s.getEntry(i)->getStaff_id()<< endl;
                        cout << "  Position:" << s.getEntry(i)->getPosition()<<endl;
                        cout << "  Category:" << s.getEntry(i)->getCategory()<<endl;
                        cout << "  Tel.no:" << s.getEntry(i)->getTelNo() << endl;
                        cout << "  Faculty Department:"<<s.getEntry(i)->getDepart()<<endl;
                        cout << "  Leave Balance:"<<s.getEntry(i)->getLeaveB()<<endl;
                        cout << endl;
                    }
                    cout << "Enter the staff number that want to delete:";
                    cin >> x;
                    s.remove(x);
                    cout << "Back to main menu." << endl;
                    system("Pause");
                    goto label;
            }
        cout << "Invalid input.Back to main menu." << endl;
        system("Pause");
        goto label;
    }
    case 3:{
            system("cls");
            cout << "                      ******************" << '\n';
            cout << "                      ** Leave Record **" << '\n';
            cout << "                      ******************" << '\n';
            cout << "Do you want to update or delete staff leave?(u = update / d = delete):";
            cin >> confirm;
            if(confirm == "u"){
                label3:
                for(int i = 1; i<=l.getLength(); i++){
                        cout << i << ".Staff Name:" << l.getEntry(i)->getName()<< endl;
                        cout << "  From Date:" << l.getEntry(i)->getFrom_Date()<< endl;
                        cout << "  To Date:" << l.getEntry(i)->getTo_Date()<<endl;
                        cout << "  Type of leave:" << l.getEntry(i)->getType()<<endl;
                        cout << "  Reason:" << l.getEntry(i)->getReason() << endl;
                        cout << "  Approver:"<<l.getEntry(i)->getApprover()<<endl;
                        cout << "  Status:"<<l.getEntry(i)->getStatus()<<endl;
                        cout << "  Days:"<<l.getEntry(i)->getDays()<<endl;
                        cout << endl;
                }
                cout << "Enter the staff number that want to update:";
                cin >> id;
                system("cls");
                cout <<"( "<< id << ")Staff Name:" << l.getEntry(id)->getName() << endl;
                cout << "2.From Date:" << l.getEntry(id)->getFrom_Date()<< endl;
                cout << "3.To Date:" << l.getEntry(id)->getTo_Date()<<endl;
                cout << "4.Type of leave:" << l.getEntry(id)->getType()<<endl;
                cout << "5.Reason:" << l.getEntry(id)->getReason() << endl;
                cout << "6.Approver:"<<l.getEntry(id)->getApprover()<<endl;
                cout << "7.Status:"<<l.getEntry(id)->getStatus()<<endl;
                cout << "8.Days:"<<l.getEntry(id)->getDays()<<endl;
                cout << endl;
                cout << "Enter (2-8) to update except 1 and 7 not in this update:";
                cin >> x;
                if(x == 2){
                    cout << "From Date(DD-MM-YYYY) =>";
                    cin >> From_date;
                    l.getEntry(id)->setFrom_Date(From_date);
                    goto label;
                }
                else if(x ==3){
                    cout << "To Date (DD-MM-YYYY) =>";
                    cin >> To_date;
                    l.getEntry(id)->setTo_Date(To_date);
                    goto label;
                }
                else if(x == 4){
                    cout << "Type of leave =>";
                    cin >> type_of_leave;
                    l.getEntry(id)->setType(type_of_leave);
                    goto label;
                }
                else if(x == 5){
                    cout << "Reason =>";
                    cin >> reason;
                    l.getEntry(id)->setReason(reason);
                    goto label;
                }
                else if(x == 6){
                    cout << "Approver";
                    cin >> approver;
                    l.getEntry(id)->setDepart(approver);
                    goto label;
                }
                else if (x == 8){
                    cout << "Days =>";
                    cin >> days;
                    l.getEntry(id)->setLeaveB(days);
                    goto label;
                }
                else if(x < 2 || x > 8 || x == 7){
                    cout <<"Try Again or Exit to main menu.(y = try again / n = main menu)";
                    cin >> y;
                    if(y == "y"){
                        cout << "Back to update menu again." << endl;
                        system("Pause");
                        goto label3;
                    }
                    else if(y == "n"){
                        cout << "Back to main menu." << endl;
                        system("Pause");
                        goto label;
                    }
                }
            }
            else if(confirm == "d"){
                    for( int i = 1; i <= l.getLength(); i++ )
                    {
                        cout << i << ".Staff Name:" << l.getEntry(i)->getName()<< endl;
                        cout << "  From Date:" << l.getEntry(i)->getFrom_Date()<< endl;
                        cout << "  To Date:" << l.getEntry(i)->getTo_Date()<<endl;
                        cout << "  Type of leave:" << l.getEntry(i)->getType()<<endl;
                        cout << "  Reason:" << l.getEntry(i)->getReason() << endl;
                        cout << "  Approver:"<<l.getEntry(i)->getApprover()<<endl;
                        cout << "  Status:"<<l.getEntry(i)->getStatus()<<endl;
                        cout << "  Days:"<<l.getEntry(i)->getDays()<<endl;
                        cout << endl;
                    }
                    cout << "Enter the staff leave number that want to delete:";
                    cin >> x;
                    l.remove(x);
                    cout << "Back to main menu." << endl;
                    system("Pause");
                    goto label;
            }
            else if(confirm != "u" || confirm != "d"){
                      cout << "Invalid input.Back to main menu." << endl;
                    system("Pause");
                    goto label;
            }
    }
    case 4:{
            system("cls");
            cout << "                      ******************" << '\n';
            cout << "                      ** Leave Record **" << '\n';
            cout << "                      ******************" << '\n';
            cout << "Do you want to update or delete staff leave?(a = apply / r = retrieve):";
            cin >> confirm;
            if(confirm == "a"){
                cout << "Enter staff name that want to apply leave :";
                cin >> name;
                for(int i = 1; i<=s.getLength(); i++){
                    if(name == s.getEntry(i)->getName()){
                        for( int i = 1; i <= l.getLength(); i++ )
                        {
                            lCounter++;
                        }
                        cout << "Staff Name =>";
                        cin >> name;
                        cout << "From Date (DD-MM-YYYY) =>";
                        cin >> From_date;
                        cout << "To Date (DD-MM-YYYY) =>";
                        cin >> To_date;
                        cout << "Type of Leave =>";
                        cin >> type_of_leave;
                        cout << "Reason =>";
                        cin >> reason;
                        cout << "Approver =>";
                        cin >> approver;
                        cout << "Days =>";
                        cin >> days;
                        l.insert(sCounter,new Leave(name,From_date,To_date,type_of_leave,reason,approver,status,days));
                        for(int i = 1; i<=s.getLength(); i++){
                            if(s.getEntry(i)->getName() == name){
                                    for(int j = 1; j<=l.getLength(); j++){
                                        if(l.getEntry(j)->getName() == name){
                                            balance = s.getEntry(i)->getLeaveB() - l.getEntry(j)->getDays();
                                            s.getEntry(i)->setLeaveB(balance);
                                        }
                                    }
                            }
                        }
                        system("Pause");
                        goto label;
                    }
                }
                cout << "not same name that exist in this program. back to main menu" << endl;
                system("Pause");
                goto label;
            }
            else if(confirm == "r"){
                    cout << "Enter staff name that want to apply leave :";
                    cin >> name;
                    for( int i = 1; i <= l.getLength(); i++ )
                    {
                        if(name == l.getEntry(i)->getName()){
                            cout << i << ".Staff Name:" << l.getEntry(i)->getName()<< endl;
                            cout << "  From Date:" << l.getEntry(i)->getFrom_Date()<< endl;
                            cout << "  To Date:" << l.getEntry(i)->getTo_Date()<<endl;
                            cout << "  Type of leave:" << l.getEntry(i)->getType()<<endl;
                            cout << "  Reason:" << l.getEntry(i)->getReason() << endl;
                            cout << "  Approver:"<<l.getEntry(i)->getApprover()<<endl;
                            cout << "  Status:"<<l.getEntry(i)->getStatus()<<endl;
                            cout << "  Days:"<<l.getEntry(i)->getDays()<<endl;
                            cout << endl;
                        }
                    }
                    system("Pause");
                    goto label;
            }
            else if(confirm != "a" || confirm != "r"){
                cout << "Invalid input.Back to main menu." << endl;
                system("Pause");
                goto label;
            }
    }
    case 5:{
            system("cls");
            cout << "                      ******************" << '\n';
            cout << "                      ** Leave Status **" << '\n';
            cout << "                      ******************" << '\n';
            cout << "Please enter approver name to update own staff leave status :";
            cin >> approver;
            for( int i = 1; i <= l.getLength(); i++ )
            {
                if(approver == l.getEntry(i)->getApprover()){
                    cout << i << ".Staff Name:" << l.getEntry(i)->getName()<< endl;
                    cout << "  From Date:" << l.getEntry(i)->getFrom_Date()<< endl;
                    cout << "  To Date:" << l.getEntry(i)->getTo_Date()<<endl;
                    cout << "  Type of leave:" << l.getEntry(i)->getType()<<endl;
                    cout << "  Reason:" << l.getEntry(i)->getReason() << endl;
                    cout << "  Approver:"<<l.getEntry(i)->getApprover()<<endl;
                    cout << "  Status:"<<l.getEntry(i)->getStatus()<<endl;
                    cout << "  Days:"<<l.getEntry(i)->getDays()<<endl;
                    cout << endl;
                }
            }
            cout << "Enter the staff leave number to approve the leave status:";
            cin >> id;
            cout << "Status =>";
            cin >> status;
            l.getEntry(id)->setStatus(status);
            if(l.getEntry(id)->getStatus() == "Approved"){
                    cout << "  Staff Name:" << l.getEntry(id)->getName()<< endl;
                    cout << "  From Date:" << l.getEntry(id)->getFrom_Date()<< endl;
                    cout << "  To Date:" << l.getEntry(id)->getTo_Date()<<endl;
                    cout << "  Type of leave:" << l.getEntry(id)->getType()<<endl;
                    cout << "  Reason:" << l.getEntry(id)->getReason() << endl;
                    cout << "  Approver:"<<l.getEntry(id)->getApprover()<<endl;
                    cout << "  Status:"<<l.getEntry(id)->getStatus()<<endl;
                    cout << "  Days:"<<l.getEntry(id)->getDays()<<endl;
                    cout << endl;
                    system("Pause");
                    goto label;
            }
            else if(l.getEntry(id)->getStatus() == "Rejected"){
                    cout << "  Staff Name:" << l.getEntry(id)->getName()<< endl;
                    cout << "  From Date:" << l.getEntry(id)->getFrom_Date()<< endl;
                    cout << "  To Date:" << l.getEntry(id)->getTo_Date()<<endl;
                    cout << "  Type of leave:" << l.getEntry(id)->getType()<<endl;
                    cout << "  Reason:" << l.getEntry(id)->getReason() << endl;
                    cout << "  Approver:"<<l.getEntry(id)->getApprover()<<endl;
                    cout << "  Status:"<<l.getEntry(id)->getStatus()<<endl;
                    cout << "  Days:"<<l.getEntry(id)->getDays()<<endl;
                    cout << endl;
                    for(int i = 1; i <= s.getLength(); i++){
                        if(l.getEntry(id)->getName()== s.getEntry(i)->getName()){
                            balance = s.getEntry(i)->getLeaveB() + l.getEntry(id)->getDays();
                            s.getEntry(i)->setLeaveB(balance);
                        }
                    }
            system("Pause");
            goto label;
            }
    cout << "Invalid input.Back to main menu." << endl;
    system("Pause");
    goto label;
    }
    case 6:{
            system("cls");
            cout << "                      ******************" << '\n';
            cout << "                      ** Leave Record **" << '\n';
            cout << "                      ******************" << '\n';
            cout << "Please enter faculty department to display:";
            cin >> fac_depart;
            for(int i = 1; i<= s.getLength(); i++){
                if(fac_depart == s.getEntry(i)->getDepart()){
                    cout << i << ".Staff Name:" << l.getEntry(i)->getName()<< endl;
                    cout << "  From Date:" << l.getEntry(i)->getFrom_Date()<< endl;
                    cout << "  To Date:" << l.getEntry(i)->getTo_Date()<<endl;
                    cout << "  Type of leave:" << l.getEntry(i)->getType()<<endl;
                    cout << "  Reason:" << l.getEntry(i)->getReason() << endl;
                    cout << "  Approver:"<<l.getEntry(i)->getApprover()<<endl;
                    cout << "  Status:"<<l.getEntry(i)->getStatus()<<endl;
                    cout << "  Days:"<<l.getEntry(i)->getDays()<<endl;
                    cout << endl;
                }
            }
            system("Pause");
            goto label;
    }
    case 7:{
                 ofstream fout,out;
                 cout << "Save records to : Staff.txt and Leave.txt" << endl;
                 fout.open("Staff.txt");
                 out.open("Leave.txt");
                 for( int i = 1; i <= s.getLength(); i++ )
                 {
                     fout << s.getEntry(i)->getName() << endl;
                     fout << s.getEntry(i)->getStaff_id() << endl;
                     fout << s.getEntry(i)->getPosition() << endl;
                     fout << s.getEntry(i)->getCategory() << endl;
                     fout << s.getEntry(i)->getTelNo() << endl;
                     fout << s.getEntry(i)->getDepart() << endl;
                     fout << s.getEntry(i)->getLeaveB() << endl;
                 }
                 for(int k = 1; k <= l.getLength(); k++)
                 {
                    out <<  l.getEntry(k)->getName() << endl;
                    out <<  l.getEntry(k)->getFrom_Date() << endl;
                    out <<  l.getEntry(k)->getTo_Date() << endl;
                    out <<  l.getEntry(k)->getType() << endl;
                    out <<  l.getEntry(k)->getReason() << endl;
                    out <<  l.getEntry(k)->getApprover() << endl;
                    out <<  l.getEntry(k)->getStatus() << endl;
                    out <<  l.getEntry(k)->getDays() << endl;
                 }
            fout.close();
            cout << "Saved" << endl;
            system("pause");
            goto label;
    }
    case 8:{
            ifstream fin,fil;
            fin.open("Staff.txt");
            if (fin.fail())
            {
                cout << "Could not open Staff.txt." << endl;
                system("cls");
                goto label;
            }
            int qCounter = 1;
            while(!fin.eof())
            {
                fin >> name;
                fin >> staff_id;
                fin >> position;
                fin >> category;
                fin >> tel_no;
                fin >> fac_depart;
                fin >> leave_balance;
                s.insert(qCounter,new Staff(name,staff_id,position,category,tel_no,fac_depart,leave_balance));
                qCounter++;
            }
            fin.close();
            fil.open("Leave.txt");
            if (fil.fail())
            {
                cout << "Could not open Staff.txt." << endl;
                system("cls");
                goto label;
            }
            int wCounter = 1;
            while(!fil.eof())
            {
                fil >> name;
                fil >> From_date;
                fil >> To_date;
                fil >> type_of_leave;
                fil >> reason;
                fil >> approver;
                fil >> status;
                fil >> days;
                l.insert(wCounter,new Leave(name,From_date,To_date,type_of_leave,reason,approver,status,days));
                wCounter++;
            }
            fil.close();
            cout << "Staff Record Loaded" << endl;
            system("pause");
            goto label;
    }
    default:
            cout << "Having a nice day."<< endl;
            return 0;
    }
}
