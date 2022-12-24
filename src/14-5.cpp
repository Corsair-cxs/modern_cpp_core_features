#include <iostream>

enum class HighSchool {
    student,
    teacher,
    principal
};

enum class University {
    student,
    professor,
    principal
};

int main()
{
    HighSchool x = HighSchool::student;
    University y = University::student;
    bool b = x < HighSchool::headmaster;
    std::cout << std::boolalpha << b << std::endl;
}
