#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;

    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class cmp
{
public:
    bool operator()(Student a, Student b)
    {
        if(a.marks < b.marks) return true;

        if (a.marks == b.marks && a.roll > b.roll)
        {
            return true;
        }
        return false;

    }
};

int main()
{
    int n;
    cin >> n;
    string name;
    int roll;
    int marks;
    priority_queue<Student, vector<Student>, cmp> pq;

    for (int i = 0; i < n; i++)
    {
        cin >> name >> roll >> marks;
        Student obj(name, roll, marks);
        pq.push(obj);
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int cmd;
        cin >> cmd;

        if (cmd == 0)
        {
            cin >> name >> roll >> marks;
            Student obj(name, roll, marks);
            pq.push(obj);

            if (pq.empty())
                cout << "Empty" << endl;
            else
            {
                Student max_std = pq.top();
                cout << max_std.name << " " << max_std.roll << " " << max_std.marks << endl;
            }
        }
        else if (cmd == 1)
        {
            if (pq.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                Student max_std = pq.top();
                cout << max_std.name << " " << max_std.roll << " " << max_std.marks << endl;
            }
        }

        else if (cmd == 2)
        {
            if (pq.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                pq.pop();

                if (pq.empty())
                {
                    cout << "Empty" << endl;
                }
                else
                {
                    Student max_std = pq.top();
                    cout << max_std.name << " " << max_std.roll << " " << max_std.marks << endl;
                }
            }
        }
    }
}