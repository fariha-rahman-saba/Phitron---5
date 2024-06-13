#include <bits/stdc++.h>
using namespace std;

struct Student
{
    string name;
    string cls;
    string sec;
    int id;
    int math_marks;
    int eng_marks;
};

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    Student std[n];
    string name, cls, sec;
    int id, math_marks, eng_marks;
    for (int i = 0; i < n; i++)
    {
        cin >> name;
        cin.ignore();
        cin >> cls >> sec >> id >> math_marks >> eng_marks;
        std[i].name = name;
        std[i].cls = cls;
        std[i].sec = sec;
        std[i].id = id;
        std[i].math_marks = math_marks;
        std[i].eng_marks = eng_marks;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (std[i].eng_marks < std[j].eng_marks)
            {
                Student tmp = std[i];
                std[i] = std[j];
                std[j] = tmp;
            }
            else if (std[i].eng_marks == std[j].eng_marks)
            {
                if (std[i].math_marks < std[j].math_marks)
                {
                    Student tmp = std[i];
                    std[i] = std[j];
                    std[j] = tmp;
                }
                else if (std[i].math_marks == std[j].math_marks)
                {
                    if (std[i].id > std[j].id)
                    {
                        Student tmp = std[i];
                        std[i] = std[j];
                        std[j] = tmp;
                    }
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << std[i].name << " ";
        cout << std[i].cls << " ";
        cout << std[i].sec << " ";
        cout << std[i].id << " ";
        cout << std[i].math_marks << " ";
        cout << std[i].eng_marks << " ";
        cout << endl;
    }

    return 0;
}