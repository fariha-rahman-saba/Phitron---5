#include <iostream>
using namespace std;

struct Student {
    int id;
    char name[101];
    char sec;
    int marks;
};

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        Student student[3];
        
        for (int i = 0; i < 3; i++) {
            cin >> student[i].id >> student[i].name >> student[i].sec >> student[i].marks;
        }
        
        Student bestStudent = student[0];
        
        for (int i = 1; i < 3; ++i) {
            if (student[i].marks > bestStudent.marks ||
                (student[i].marks == bestStudent.marks && student[i].id < bestStudent.id)) {
                bestStudent = student[i];
            }
        }
        
        cout << bestStudent.id << " " << bestStudent.name << " " << bestStudent.sec << " " << bestStudent.marks << endl;
    }
    
    return 0;
}
