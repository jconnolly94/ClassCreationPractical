//
//  main.cpp
//  ClassCreationPractical
//
//  Created by James Connolly on 13/03/2022.
//


// NOTES/Assumptions
// Note: Duplicate checks performed on kNumber rather than Name, this just makes more sense.

#include <iostream>
#include "CProgStudent.hpp"

const int NUM_STUDENTS = 3;

void populateArray(CProgStudent[]);
void displayStudents(CProgStudent[]);
void displayStudentsOverallResults(CProgStudent[]);
void populateChristmasResults(CProgStudent[]);
void populateLLAttendance(CProgStudent[]);
void populateProject1Results(CProgStudent[]);
void populateProejct2Results(CProgStudent[]);
void populateMayExamResults(CProgStudent[]);
bool studentExistsInList(string kNumber, CProgStudent[]);
int  findStudentInList(string kNumber, CProgStudent[]);
void checkIfStudentFailed(CProgStudent list[]);
void showPassList(CProgStudent list[]);
void showResultsBreakdown(string kNumber, CProgStudent[]);


int main() {
    CProgStudent list[NUM_STUDENTS];
    string name, kNumber;
    populateArray(list);
    displayStudents(list);
    list[0].SetProj2Mark(60);
    checkIfStudentFailed(list);
    
    
}

void populateArray(CProgStudent list[]){
    string name, kNum;
    bool foundInList;
    cout << "Please enter the following information and to initalise the program." << endl;
    for(int i = 0; i < NUM_STUDENTS; i++){
        do{
            cout << "Student " << (i+1) << endl << "\tName: ";
            cin >> name;
            cout << "\tkNumber: ";
            cin >> kNum;
            foundInList = studentExistsInList(kNum, list);
            if(foundInList)
                cout << "Student already exists in list! Try again!" << endl;
        } while(foundInList);
        list[i] = CProgStudent(name, kNum);
        cout << endl;
    }
}

void displayStudents(CProgStudent list[]){
    for(int i = 0; i < NUM_STUDENTS; i++){
        list[i].ShowDetails();
        cout << endl;
    }
}

void populateChristmasResults(CProgStudent list[]){
    cout << "Please enter the required infomration to record christmas exam results" << endl;
    int mark;
    for(int i = 0; i < NUM_STUDENTS; i++){
        cout << list[i].GetkNum() << ", " << list[i].GetName() << ": ";
        cin >> mark;
        list[i].SetChristmasMark(mark);
    }
    cout << endl;
}

void populateLLAttendance(CProgStudent list[]){
    cout << "Please enter the required infomration to record LL Attendance" << endl;
    int mark;
    for(int i = 0; i < NUM_STUDENTS; i++){
        cout << list[i].GetkNum() << ", " << list[i].GetName() << ": ";
        cin >> mark;
        list[i].SetLLAttendanceMark(mark);
    }
    cout << endl;
}

void populateProject1Results(CProgStudent list[]){
    cout << "Please enter the required infomration to record Project 1 results" << endl;
    int mark;
    for(int i = 0; i < NUM_STUDENTS; i++){
        cout << list[i].GetkNum() << ", " << list[i].GetName() << ": ";
        cin >> mark;
        list[i].SetProj1Mark(mark);
    }
    cout << endl;
}

void populateProject2Results(CProgStudent list[]){
    cout << "Please enter the required infomration to record Project 2 results" << endl;
    int mark;
    for(int i = 0; i < NUM_STUDENTS; i++){
        cout << list[i].GetkNum() << ", " << list[i].GetName() << ": ";
        cin >> mark;
        list[i].SetProj2Mark(mark);
    }
    cout << endl;
}

void populateMayExamResults(CProgStudent list[]){
    cout << "Please enter the required infomration to record May Exam results" << endl;
    int mark;
    for(int i = 0; i < NUM_STUDENTS; i++){
        cout << list[i].GetkNum() << ", " << list[i].GetName() << ": ";
        cin >> mark;
        list[i].SetMayExamMark(mark);
    }
    cout << endl;
}

void displayOverallStudentResults(CProgStudent list[]){
    cout << "Displaying overall mark achieved by each student:" << endl;
    for(int i = 0; i < NUM_STUDENTS; i++){
        cout << "Name: " << list[i].GetName() << endl;
        cout << "kNumber: " << list[i].GetkNum() << endl;
        cout << "Total result: " << list[i].GetTotalMark() << endl << endl;
    }
}

bool studentExistsInList(string kNumber, CProgStudent list[]){
    for(int i = 0; i < NUM_STUDENTS; i++){
        if(list[i].GetkNum() == kNumber)
            return true;
    }
    return false;
}

int findStudentInList(string kNumber, CProgStudent list[]){
    int index = -1;
    for(int i = 0; i < NUM_STUDENTS; i++)
        if(list[i].GetkNum() == kNumber)
            index = i;
    return index;
}

void checkIfStudentFailed(CProgStudent list[]){
    string kNum;
    int index;
    cout << "Check to see whether a particular student has failed" << endl;
    do{
        cout << "Enter a kNumber: ";
        cin >> kNum;
        index = findStudentInList(kNum, list);
        if(index == -1)
            cout << "Student not found in list, try again!" << endl;
    } while(index == -1);
    cout << "Name\t\tResult\t\tPass/Fail\n";
    cout << list[index].GetName() << "\t\t" << list[index].GetTotalMark() << "\t\t\t";
    if(list[index].hasPassed())
        cout << "Passed";
    else
        cout << "Failed";
    cout << endl;
}

void showPassList(CProgStudent list[]){
    cout << "Name\t\tResult\t\tPass/Fail\n";
    for(int i = 0; i < NUM_STUDENTS; i++){
        cout << list[i].GetName() << "\t\t" << list[i].GetTotalMark() << "\t\t\t";
        if(list[i].hasPassed())
            cout << "Passed";
        else
            cout << "Failed";
        cout << endl;
    }
}

void showResultsBreakdown(CProgStudent list[]){
    string kNum;
    int index;
    cout << "Check to see whether a particular student has failed" << endl;
    do{
        cout << "Enter a kNumber: ";
        cin >> kNum;
        index = findStudentInList(kNum, list);
        if(index == -1)
            cout << "Student not found in list, try again!" << endl;
    } while(index == -1);
    list[index].ShowDetails();
    
}



