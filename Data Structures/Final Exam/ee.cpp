#include <bits/stdc++.h>
using namespace std;

struct Student
{
    string name;
    int roll;
    int marks;
};

class cmp {
public:
    bool operator()(Student &a, Student &b) {
        if (a.marks == b.marks) {
            return a.roll < b.roll; 
        }
        return a.marks > b.marks; 
    }
};


void update_priority_queue(priority_queue<Student> &pq, vector<Student> &students) {
    while (!pq.empty()) {
        pq.pop();  
    }
    for (auto &student : students) {
        pq.push(student);  
    }
}

int main()
{
    int n;
    cin >> n;
    string name;
    int roll;
    int marks;
    vector<Student> students;
    priority_queue<Student, vector<Student>, cmp> pq;


    for (int i = 0; i < n; i++)
    {
        Student s;
        cin >> name >> roll >> marks;
        s.name = name;
        s.roll = roll;
        s.marks = marks;
        students.push_back(s);
        pq.push(s);
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int cmd;
        cin >> cmd;

        if (cmd == 0)
        {
            Student newstd;
            cin >> name >> roll >> marks;
            newstd.name = name;
            newstd.roll = roll;
            newstd.marks = marks;
             students.push_back(newstd);
            pq.push(newstd);

            Student max_std = pq.top();
            cout << max_std.name << " " << max_std.roll << " " << max_std.marks << endl;
        }
        else if (cmd == 1)
        {

            if (!pq.empty())
            {
                Student max_std = pq.top();
                cout << max_std.name << " " << max_std.roll << " " << max_std.marks << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else if (cmd == 2)
        {

            if (!pq.empty())
            {
                Student max_std = pq.top();
                pq.pop();

                update_priority_queue(pq, students);

                if (!pq.empty())
                {
                    Student new_max_std = pq.top();
                    cout << new_max_std.name << " " << new_max_std.roll << " " << new_max_std.marks << endl;
                }
                else
                {
                    cout << "Empty" << endl;
                }
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
    }

    return 0;
}
