#include <bits/stdc++.h>
using namespace std;

struct Student {
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

Student find_max(vector<Student> &students) {
    
    if (students.empty()) {
        return {"Empty",-1,-1};
    }

    sort(students.begin(), students.end(), cmp());
    return students[0];
}

void delete_max(vector<Student> &students) {
    if (!students.empty()) {
        students.erase(students.begin());
    }
}

int main() {
    int n;
    cin >> n;

    vector<Student> students;

    for (int i = 0; i < n; i++) {
        Student s;
        cin >> s.name >> s.roll >> s.marks;
        students.push_back(s);
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; i++) {
        int cmd;
        cin >> cmd;

        if (cmd == 0) {
            Student new_std;
            cin >> new_std.name >> new_std.roll >> new_std.marks;
            students.push_back(new_std);
            Student max_student = find_max(students);
            if (max_student.roll == -1) {
                cout << "Empty" << endl;
            } else {
                cout << max_student.name << " " << max_student.roll << " " << max_student.marks << endl;
            }
        } else if (cmd == 1) {
            Student max_student = find_max(students);
            if (max_student.roll == -1) {
                cout << "Empty" << endl;
            } else {
                cout << max_student.name << " " << max_student.roll << " " << max_student.marks << endl;
            }
        } else if (cmd == 2) {
            Student max_student = find_max(students);
            if (max_student.roll == -1) {
                cout << "Empty" << endl;
            } else {
                delete_max(students);
                max_student = find_max(students);
                if (max_student.roll == -1) {
                    cout << "Empty" << endl;
                } else {
                    cout << max_student.name << " " << max_student.roll << " " << max_student.marks << endl;
                }
            }
        }
    }

    return 0;
}
