#include <iostream>
#include <string>

using namespace std;

class student
{
protected:
    int rno;
    char fname[18];
    char lname[12];
    char course[30];
    char dob[15];
    char mo[12];
    char addr[500];
    char city[12];
    char email[26];
    int sub1, sub2, sub3, sub4, sub5, sub6, total;
    float per;

public:
    void input_details()
    {
        cout << "\n\n Enter Roll No (3-digit) ===>"
             << " ";
        cin >> rno;
        cout << "\n\n\n";
        cout << "Enter First Name ===>"
             << " ";
        cin >> fname;
        cout << "\n\n\n";
        cout << "Enter Last Name ===>"
             << " ";
        cin >> lname;
        cout << "\n\n\n";
        cout << "Enter Course ===>"
             << " ";
        cin >> course;
        cout << "\n\n\n";
        cout << "Enter Date Of Birth (dd/mm/yyyy) ===>"
             << " ";
        cin >> dob;
        cout << "\n\n\n";
        cout << "Enter Mobile No (10-digit)===>"
             << " ";
        cin >> mo;
        cin.ignore();
        cout << "\n\n\n";
        cout << "Enter Address ===>"
             << " ";
        cin.getline(addr, 500);
        cout << "\n\n\n";
        cout << "Enter City ===>"
             << " ";
        cin >> city;
        cout << "\n\n\n";
        cout << "Enter Email ID ===>"
             << " ";
        cin >> email;
        cout << "\n\n\n";
        cout << "Enter the Marks of FP ==>"
             << " ";
        cin >> sub1;
        cout << "\n";
        cout << "Enter the Marks of LA ==>"
             << " ";
        cin >> sub2;
        cout << "\n";
        cout << "Enter the Marks of English ==>"
             << " ";
        cin >> sub3;
        cout << "\n";
        cout << "Enter the Marks of EWES ==>"
             << " ";
        cin >> sub4;
        cout << "\n";
        cout << "Enter the Marks of LR ==>"
             << " ";
        cin >> sub5;
        cout << "\n";
        cout << "Enter the Marks of  BEE ==>"
             << " ";
        cin >> sub6;
        cout << "\n\n\n";
        ;
        total = sub1 + sub2 + sub3 + sub4 + sub5 + sub6;
        per = total / 6;
    }
    void output_details()
    {
        cout << "\tVISHWAKARMA INSTITUTE OF INFORMATION TECHNOLOGY " << endl;
        cout << "\n_____________________________________________________________________________" << endl;
        cout << "\n Roll No       :---> "
             << " " << rno;
        cout << "\n First Name    :---> "
             << " " << fname;
        cout << "\t\t Last Name   :---> "
             << " " << lname;
        cout << "\n course        :---> "
             << " " << course;
        cout << "\t Date Of Birth :---> "
             << " " << dob;
        cout << "\n Mobile No     :---> "
             << " " << mo;
        cout << "\t\t Address     :---> "
             << " " << addr;
        cout << "\n City          :---> "
             << " " << city;
        cout << "\n Email         :---> "
             << " " << email;
    }
    void output_marksheet()
    {
        cout << "\n  __________________________________________________________________________" << endl;
        cout << "  |       Subject        |      Total marks     |      Obtained marks      |" << endl;
        cout << "  |______________________|______________________|__________________________|" << endl;
        cout << "  |   LA                 |         100          |       " << sub2 << "                 |" << endl;
        cout << "  |   English            |         100          |       " << sub3 << "                 |" << endl;
        cout << "  |   FP                 |         100          |       " << sub1 << "                 |" << endl;
        cout << "  |   EWES               |         100          |       " << sub4 << "                 |" << endl;
        cout << "  |   Logical Reasoning  |         100          |       " << sub5 << "                 |" << endl;
        cout << "  |   BEE                |         100          |       " << sub6 << "                 |" << endl;
        cout << "  |______________________|______________________|__________________________|" << endl;
        cout << "  |     Total Marks      |          600         |       " << total << "                |" << endl;
        cout << "  |______________________|______________________|__________________________|" << endl;
        cout << "     ___________________________________________________________________" << endl;
        cout << "     |  Percentage ---> (Obtained marks/Total marks)*100 = " << per << "          |" << endl;
        cout << "     |_________________________________________________________________|" << endl;
        if (per >= 90 && per <= 100)
        {
            cout << "\n\n\t\t Your Grade is :----> A+";
            cout << "\n";
        }
        else if (per >= 80 && per <= 90)
        {
            cout << "\n\n\t\t Your Grade is :----> A";
            cout << "\n";
        }
        else if (per >= 70 && per <= 80)
        {
            cout << "\n\t\t Your Grade is :----> B+";
        }
        else if (per >= 60 && per <= 70)
        {
            cout << "\n\t\t Your Grade is :----> B";
        }
        else if (per >= 50 && per <= 60)
        {
            cout << "\n\t\t Your Grad is :----> C";
        }
        else if (per >= 40 && per <= 50)
        {
            cout << "\n\t\t Your Grad is :---->D";
        }
        else
        {
            cout << "\n\t\t You Are Fail......";
        }
    }
};
class master : virtual public student
{
public:
    void create()

    {
        cout << "\n\n===========================> Insert Information <==========================\n\n";
        input_details();
    }
    void display()
    {
        cout << "\n\n=========================> Summary Report <============================\n\n";
        output_details();
        cout << "\n\n=========================> Student Marksheet Report <==========================\n\n";
        output_marksheet();
        cout << "\n\n\t=========================> End Of Marksheet <==========================\n\n";
        cout << "\n\n\t=========================> End of Report <=============================\n\n";
    }

    void update()
    {
        int choice;
        cout << "\n\n\t=========================> Update Information <=========================\n\n";
        cout << "\n\n\t ---------------> choose Details You Want to Perform <--------------\n\n";
        cout << "\n\n 1. Roll No ===>" << rno << "\n";
        cout << "\n\n 2. First Name ===>" << fname << "\n";
        cout << "\n\n 3. Last Name ====>" << lname << "\n";
        cout << "\n\n 4. Course ===>" << course << "\n";
        cout << "\n\n 5. Date Of Birth ===>" << dob << "\n";
        cout << "\n\n 6. Mobile No ===>" << mo << "\n";
        cout << "\n\n 7. Address ===>" << addr << "\n";
        cout << "\n\n 8. City ===>" << city << "\n";
        cout << "\n\n 9. Email ===>" << email << "\n";
        cout << "\n\n 10. FP Marks ===>" << sub1 << "\n";
        cout << "\n\n 11. LA Marks ===>" << sub2 << "\n";
        cout << "\n\n 12. English Marks ===>" << sub3 << "\n";
        cout << "\n\n 13. EWES Marks ===>" << sub4 << "\n";
        cout << "\n\n 14. LR Marks ===>" << sub5 << "\n";
        cout << "\n\n 15. BEE Marks ===>" << sub4 << "\n";
        cout << "\n\n Enter Your Choice ====>";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "\n\n Enter Roll No :--->";
            cin >> rno;
            cout << "\n";
            break;
        case 2:
            cout << "\n\n Enter First Name :--->";
            cin >> fname;
            cout << "\n";
            break;
        case 3:
            cout << "\n\n Enter Last Name :--->";
            cin >> lname;
            cout << "\n";
            break;
        case 4:
            cout << "\n\n Enter Course :--->";
            cin >> course;
            cout << "\n";
            break;
        case 5:
            cout << "\n\n Enter Date Of Birth :--->";
            cin >> dob;
            cout << "\n";
            break;
        case 6:
            cout << "\n\n Enter Mobile No :--->";
            cin >> mo;
            cout << "\n";
            break;
        case 7:
            cin.ignore();
            cout << "\n\n Enter Address :--->";
            cin.getline(addr, 500);
            cout << "\n";
            break;
        case 8:
            cout << "\n\n Enter city :--->";
            cin >> city;
            cout << "\n";
            break;
        case 9:
            cout << "\n\n Enter Email :--->";
            cin >> email;
            break;
        case 10:
            cout << "\n\n Enter Marks Of FP :--->";
            cin >> sub1;
            break;
        case 11:
            cout << "\n\n Enter Marks of LA :--->";
            cin >> sub2;
            cout << "\n";
            break;
        case 12:
            cout << "\n\n Enter Marks of English :--->";
            cin >> sub3;
            cout << "\n";
            break;
        case 13:
            cout << "\n\n Enter Marks of EWES :--->";
            cin >> sub4;
            cout << "\n";
            break;
        case 14:
            cout << "\n\n Enter Marks of LR :--->";
            cin >> sub4;
            cout << "\n";
            break;
        case 15:
            cout << "\n\n Enter Marks of BEE :--->";
            cin >> sub4;
            cout << "\n";
            break;
        default:
            cout << "\n\n=======> Invalid Choice <=========\n ******** Try again ********\n\n";
            break;
        }
    }
};
int main()
{
    master ms;
    while (1)
    {
        cout << "\n\t==============> Developed By : GROUP 4  <=================\n";
        cout << "\n\t     ==============>  Database <================\n";
        cout << "\n\n\t ********** Choose Operation You Want To Perform **********\n\n";
        cout << "\n\n\t\t 1--> Create Record";
        cout << "\n\n\t\t 2--> Display Record";
        cout << "\n\n\t\t 3--> Update Record";
        cout << "\n\n\t\t 4--> Exit Program";
        cout << "\n\n Enter your choice====>"
             << " ";

        int ch;

        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            ms.create();
            break;
        }
        case 2:
        {
            ms.display();
            break;
        }
        case 3:
        {
            ms.update();
            break;
        }
        case 4:
        {
            cout << "\t\t     THANK YOU FOR USING THIS SOFTWARE" << endl;

            cout << "\n\n";
            cout << "\t   **********************GROUP MEMBERS(DEVELOPERS)**********************";
            cout << "\n\n";
            cout << "\n  ________________________________________________________________________________________________" << endl;
            cout << "  |    GROUP MEMBERS     |      ROLL_NO.     |     P.R.N NO.    |            E-MAIL               |" << endl;
            cout << "  |______________________|___________________|__________________|_________________________________|" << endl;
            cout << "  |   VISHAL KUMAR       |       267         |    22111330      |   kumar.22111330@viit.ac.in     |" << endl;
            cout << "  |   MIHIR PATWARDHAN   |       268         |    22111346      |   mihir.22111346@viit.ac.in     |" << endl;
            cout << "  |   ADITYA PATIL       |       269         |    22110016      |   aditya.22110016@viit.ac.in    |" << endl;
            cout << "  |   KRISHNA GUPTA      |       270         |    22110152      |   krishna.22110152@viit.ac.in   |" << endl;
            cout << "  |   TRIAMBAK KAPOOR    |       271         |    22110153      |   triambak.22110153@viit.ac.in  |" << endl;
            cout << "  |______________________|___________________|__________________|_________________________________|" << endl;

            cout << "\n\n";
            cout << "\t\t\t\t\t\t\t\t\t   SUBMITED TO:   ANUP INGALE\n";
            cout << "\t\t\t\t\t\t\t\t\t   SUBMITED ON DATE: 09/03/2022 ";

            cout << "\n\n";
            break;
        }
        default:
            cout << "\n\n\t========> Invalid choice <========";
            break;
        }
    }
}
