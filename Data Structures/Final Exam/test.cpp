#include <bits/stdc++.h>
using namespace std;

// Define the Student class
class Student {
public:
    string name;
    int roll;
    int marks;

    Student(string name, int roll, int marks) : name(name), roll(roll), marks(marks) {}

    // For the priority queue, we need to define a comparison operator
    bool operator<(const Student &other) const {
        if (marks == other.marks) {
            return roll > other.roll; // Prefer smaller roll number in case of tie
        }
        return marks < other.marks; // Prefer higher marks
    }
};

// Function to print the student details
void printStudent(const Student &s) {
    cout << s.name << " " << s.roll << " " << s.marks << endl;
}

int main() {
    int n;
    cin >> n;

    priority_queue<Student> pq;
    vector<Student> students;

    // Read initial students
    for (int i = 0; i < n; ++i) {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        Student s(name, roll, marks);
        students.push_back(s);
        pq.push(s);
    }

    int q;
    cin >> q;

    while (q--) {
        int cmd;
        cin >> cmd;

        if (cmd == 0) {
            // Insert a new student
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            Student newstd(name, roll, marks);
            students.push_back(newstd);
            pq.push(newstd);

            // Print the student with the highest marks
            while (!pq.empty()) {
                bool valid = false;
                for (const Student &s : students) {
                    if (s.roll == pq.top().roll) {
                        valid = true;
                        break;
                    }
                }
                if (valid) {
                    printStudent(pq.top());
                    break;
                } else {
                    pq.pop();
                }
            }
            if (pq.empty()) {
                cout << "Empty" << endl;
            }
        } else if (cmd == 1) {
            // Print the student with the highest marks
            while (!pq.empty()) {
                bool valid = false;
                for (const Student &s : students) {
                    if (s.roll == pq.top().roll) {
                        valid = true;
                        break;
                    }
                }
                if (valid) {
                    printStudent(pq.top());
                    break;
                } else {
                    pq.pop();
                }
            }
            if (pq.empty()) {
                cout << "Empty" << endl;
            }
        } else if (cmd == 2) {
            // Delete the student with the highest marks
            while (!pq.empty()) {
                bool valid = false;
                for (const Student &s : students) {
                    if (s.roll == pq.top().roll) {
                        valid = true;
                        break;
                    }
                }
                if (valid) {
                    cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
                    pq.pop();
                    break;
                } else {
                    pq.pop();
                }
            }

            // Print the new student with the highest marks
            while (!pq.empty()) {
                bool valid = false;
                for (const Student &s : students) {
                    if (s.roll == pq.top().roll) {
                        valid = true;
                        break;
                    }
                }
                if (valid) {
                    printStudent(pq.top());
                    break;
                } else {
                    pq.pop();
                }
            }
            if (pq.empty()) {
                cout << "Empty" << endl;
            }
        }
    }

    return 0;
}
 

 