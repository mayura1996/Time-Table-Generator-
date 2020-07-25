#include<iostream>//header file to include library for input output operations
#include<fstream>//header file to include the file handling operations
#include<string>//header file to includes the operations related to use the strings
#include<vector>//header file to includes the vector operations
#include<sstream>//header file to includes the options which help to extract the data from a string
#include<ctime>//header file to includes the options which help to extract the data from a string
#include<map>//header file to includes the data structure named map
#include<conio.h>//header file to include to _kbhit function
#include <windows.h> //header file to include the set cursor position
using namespace System;
using namespace System::Windows::Forms;


using namespace std; //standard keywords in c++

/*declaring the 2d string vectors to store the data
								   which extracted from the csv file*/
vector<vector<string>> LecDetails;
vector <vector<string>> AcademicYear;
vector<vector<string>> CourseDetails;
vector<vector<string>> HallDetails;
vector<vector<vector<string>>> TimeTable;//3-D Vector to store the final result
/*---------------------------------------------------------------------------------------------------------------------------------------------------*/


class LectureHall { //class to store lecture hall details

private:
	int hallID;
	int hallCode;
	int hallCapacity;

public:
	void setHallID(int hallId) {
		hallID = hallId;
	}
	int getHallID() {
		return hallID;
	}
	//void viewHallDetails() { //to display the information of lecture hall
	//	cout << "DETAILS OF THE LECTURE HALL\n\n";
	//	for (int i = 0; i < HallDetails.size(); i++) {
	//		for (int j = 0; j < HallDetails[i].size(); j++) {
	//			if (i == 0)
	//			{
	//				cout << HallDetails[i][j] << "\t";


	//			}

	//			else
	//			{
	//				cout << HallDetails[i][j] << " \t";

	//			}
	//		}
	//		cout << "\n----------------------------\n";
	//		cout << endl;
	//	}

	//}
};

/*---------------------------------------------------------------------------------------------------------------------------------------------------*/
class Course { //class to store course details

private:
	int courseID;
	string courseCode;
	string courseName;
	int num_of_students;
	int duration;

public:
	void setDuration(int time) {
		duration = time;
	}

	void setCoursename(string name) {
		courseName = name;
	}
	void setNoStudents(int number) {
		num_of_students = number;
	}
	int getDuration() {
		return duration;
	}

	string getCoursename() {
		return courseName;
	}

	int getNoStudents() {
		return num_of_students;
	}

	//void viewCourseDetails() { //to display the details of course
	//	cout << "\t\tDETAILS OF COURSE\n\n";
	//	for (int i = 0; i < CourseDetails.size(); i++) {
	//		for (int j = 0; j < CourseDetails[i].size(); j++) {
	//			if (i == 0)
	//			{
	//				if (j == 2)
	//				{
	//					cout << "\t" << CourseDetails[i][j] << "\t\t\t";
	//				}
	//				else
	//					cout << CourseDetails[i][j] << "\t";


	//			}

	//			else
	//			{
	//				if (i == 4 && j == 3 || i == 6 && j == 3 || i == 10 && j == 3)
	//					cout << "\t";
	//				if (i == 9 && j == 3)
	//					cout << "\t\t";
	//				if (j >= 3)
	//					cout << "\t  ";
	//				cout << CourseDetails[i][j] << " \t";

	//			}
	//		}
	//		cout << "\n-----------------------------------------------------------------------------------------------\n";
	//		cout << endl;
	//	}

	//}




};
/*---------------------------------------------------------------------------------------------------------------------------------------------------*/
class Lecturer { //class to store the details of the lecture

private:
	int LecID;
	string Lecname;
	Course course;

public:

	Lecturer() :LecID(0), Lecname("") {}

	Lecturer(int id, string name, Course crs) :LecID(id), Lecname(name), course(crs) {}

	void setID(int id) { LecID = id; }

	void setName(string name) { Lecname = name; }

	int getID() { return LecID; }

	string getName() { return  Lecname; }

	/*void viewLectureDetails() {
		cout << "\t\tDETAILS OF THE LECTURERS\n\n";
		for (int i = 0; i < LecDetails.size(); i++) {

			for (int j = 0; j < LecDetails[i].size(); j++) {

					cout << LecDetails[i][j] << "\t";

			}
			cout << "\n\--------------------------------------------\n";
			cout << endl;
		}

	}*/


};
/*---------------------------------------------------------------------------------------------------------------------------------------------------*/
class Year { //class to store the information of the year

private:
	int year;
	int num_of_courses;
	Course course;

public:
	//void viewYearDetails() { //function to display the details of the year
	//	cout << "\t\tDETAILS OF THE ACADEMIC YEAR\n\n";
	//	for (int i = 0; i < AcademicYear.size(); i++) {
	//		for (int j = 0; j < AcademicYear[i].size(); j++) {
	//			if (i == 0)
	//			{
	//				cout << AcademicYear[i][j] << "\t";


	//			}

	//			else
	//			{
	//				if (j == 1 || j == 2)
	//					cout << "\t";
	//				cout << AcademicYear[i][j] << " \t";

	//			}
	//		}
	//		cout << "\n----------------------------------------------------\n";
	//		cout << endl;
	//	}

	//}




};


/*---------------------------------------------------------------------------------------------------------------------------------------------------*/


void Place(string x, int tmpYr, pair<int, int>TimeSlot, int Duration, vector<vector<vector<string>>>& TimeTable, vector<vector<vector<bool>>>& LecAva, int tmpID) {
	//this function places the course in the given time slot 
	for (int i = 0; i < Duration; i++) {
		TimeTable[tmpYr - 1][TimeSlot.second + i][TimeSlot.first] += x;

		LecAva[tmpID - 1][TimeSlot.second + i][TimeSlot.first] = true;
	}

}

/*---------------------------------------------------------------------------------------------------------------------------------------------------*/

void Place(string x, int tmpYr, pair<int, int>TimeSlot, int tmpDuration, vector<vector<vector<string>>>& TimeTable) {
	for (int i = 0; i < tmpDuration; i++) { //function overloading to place the lecture hall
		TimeTable[tmpYr - 1][TimeSlot.second + i][TimeSlot.first] += x;

	}
}

/*---------------------------------------------------------------------------------------------------------------------------------------------------*/


pair<int, int > PickSlot(int Year, vector<vector<vector<string>>>& TimeTable, int Duration, int LecID, vector<vector<vector<bool>>>& LecAva) {//x is from 0 - 4 Y is for 0- 7
	for (int i = 0; i < 4 - Duration; i++) {//this function generates a time and a date for a subject 

		for (int j = 0; j < 5; j++) {
			int able = 0;
			for (int check = i; check < Duration; check++) {
				if (TimeTable[Year - 1][check][j] == "\0" && LecAva[LecID - 1][check][j] == false) {
					able++;
				}
			}
			if (able == Duration) {

				return make_pair(j, i);
			}


		}

		for (int ii = 4; ii < 8 - Duration; ii++) {

			for (int j = 0; j < 5; j++) {


				int able = 0;
				for (int check = ii; check < Duration; check++) {
					if (TimeTable[Year - 1][check][j] == "\0" && LecAva[LecID - 1][check][j] == false) {
						able++;
					}
				}
				if (able == Duration) {

					return make_pair(j, ii);

				}
			}
		}
	}



}

/*---------------------------------------------------------------------------------------------------------------------------------------------------*/

pair<int, string> FindLecInN(string tempCrsId, vector<vector<string>>& LecDetails) {


	Lecturer objLecture;

	for (int i = 0; i < LecDetails.size(); i++) {
		for (int j = 0; j < LecDetails[i].size(); j++) {
			if (tempCrsId == LecDetails[i][j]) {

				int temp = stoi(LecDetails[i][0]);
				objLecture.setID(temp);
				objLecture.setName(" " + LecDetails[i][1] + " ");
				break;
			}

		}
	}

	return make_pair(objLecture.getID(), objLecture.getName());

}

/*---------------------------------------------------------------------------------------------------------------------------------------------------*/

int GetDuration(string tempID, vector<vector<string>>&CourseDetails) {//finds the duration of a subject
	for (int i = 1; i < CourseDetails.size(); i++) {
		if (tempID == CourseDetails[i][1]) {
			Course objCourse1;
			objCourse1.setDuration(stoi(CourseDetails[i][5]));
			return objCourse1.getDuration();

		}
	}
	return 0;
}

/*---------------------------------------------------------------------------------------------------------------------------------------------------*/

string GetCourseName(string tempName, vector<vector<string>>&CourseDetails) { //finds the course name of a subject
	for (int i = 1; i < CourseDetails.size(); i++) {
		if (tempName == CourseDetails[i][1]) {
			Course objCourse2;
			objCourse2.setCoursename(CourseDetails[i][1]);
			return objCourse2.getCoursename();
		}
	}
	return "Not Found\n";

}

/*---------------------------------------------------------------------------------------------------------------------------------------------------*/

int HowManyStudents(string tempID, vector<vector<string>>&CourseDetails) {//returns the number of students of a course
	for (int i = 1; i < CourseDetails.size(); i++) {
		if (tempID == CourseDetails[i][1]) {
			Course objNumofStudents;
			int temp = stoi(CourseDetails[i][4]);
			objNumofStudents.setNoStudents(temp);
			return objNumofStudents.getNoStudents();

		}
	}
}

/*---------------------------------------------------------------------------------------------------------------------------------------------------*/

string FindAHall(int tmpNOStudents, vector<vector<string>>&HallDetails, vector<vector<vector<bool>>>& HallAva, pair<int, int > tmpTimeSlot, int tmpDuration) {
	for (int i = 1; i < HallDetails.size(); i++) { //this function finds a hall fits to the number of students 
		if (tmpNOStudents <= stoi(HallDetails[i][2])) {
			LectureHall objHall;
			objHall.setHallID(stoi(HallDetails[i][0]));
			int tempID = objHall.getHallID();
			if (HallAva[tempID - 1][tmpTimeSlot.second][tmpTimeSlot.first] == false) {
				int able = 0;
				for (int ii = tmpTimeSlot.second; ii < tmpDuration; ii++) {
					if (HallAva[tempID - 1][tmpTimeSlot.second + ii][tmpTimeSlot.first] == false)
						able++;
				}
				for (int ii = tmpTimeSlot.second; ii < tmpDuration; ii++)
					HallAva[tempID - 1][tmpTimeSlot.second + ii][tmpTimeSlot.first] = true;

				if (able == tmpDuration)
					return HallDetails[i][1];
			}
		}
	}
	return "";
}

void csvINPUT(string x) { //Gets the input
	ifstream input;
	input.open(x);
	string line;
	while (getline(input, line)) {
		stringstream ss(line);
		vector <string> tem;
		tem.clear();
		while (ss.good()) {
			string substr = "";
			getline(ss, substr, ',');
			if (substr != "")
				tem.push_back(substr);
		}
		if (x == "Acedemic Year.csv") { AcademicYear.push_back(tem); }
		if (x == "Course.csv") { CourseDetails.push_back(tem); }
		if (x == "Hall.csv") { HallDetails.push_back(tem); }
		if (x == "Lecturer.csv") { LecDetails.push_back(tem); }

	}


	input.close();
}





void setup() { //this function setup the 2D and 3D vectors required for the generation of time table
	csvINPUT("Acedemic Year.csv");
	csvINPUT("Course.csv");
	csvINPUT("Hall.csv");
	csvINPUT("Lecturer.csv"); 
	vector<bool> tem; //Tempory bool array to mark the Available lectures and thr Available hall
	for (int i = 0; i < 5; i++)
		tem.push_back(false);
	vector<vector<bool>> tem5X8;
	for (int i = 0; i < 8; i++)
		tem5X8.push_back(tem);
	vector<vector<vector<bool>>> LecAva, HallAva; //3-D vector to mark the Available lectures And the Availble hall

	vector<string> tem5s;//null vectr consists of 5 elements to fill the timetable 
	vector<vector<string>> tem5x8s;//2 D vector to fill the Timetable
	for (int i = 0; i < 5; i++)
		tem5s.push_back("\0");
	for (int i = 0; i < 8; i++)
		tem5x8s.push_back(tem5s);
	for (int i = 1; i < AcademicYear.size(); i++)
		TimeTable.push_back(tem5x8s);//filling the Timetble vector
	for (int i = 1; i < LecDetails.size(); i++)
		LecAva.push_back(tem5X8);//Filling the Lecturer vector
	for (int i = 1; i < HallDetails.size(); i++)
		HallAva.push_back(tem5X8);//Filling the Lecture hall vector




	for (int i = 1; i < AcademicYear.size(); i++) {
		for (int j = 2; j < AcademicYear[i].size(); j++) {
			pair<int, int > TimeSlot = PickSlot(i, TimeTable, GetDuration(AcademicYear[i][j], CourseDetails), FindLecInN(AcademicYear[i][j], LecDetails).first, LecAva);
			//cout << GetCourseName(AcademicYear[i][j], CourseDetails) << "-";

			//cout<<HowManyStudents(AcademicYear[i][j],CourseDetails)<<endl;
			Place(AcademicYear[i][j], i, TimeSlot, GetDuration(AcademicYear[i][j], CourseDetails), TimeTable, LecAva, FindLecInN(AcademicYear[i][j], LecDetails).first);

			Place(FindLecInN(AcademicYear[i][j], LecDetails).second, i, TimeSlot, GetDuration(AcademicYear[i][j], CourseDetails), TimeTable, LecAva, FindLecInN(AcademicYear[i][j], LecDetails).first);
			Place(FindAHall(HowManyStudents(AcademicYear[i][j], CourseDetails), HallDetails, HallAva, TimeSlot, GetDuration(AcademicYear[i][j], CourseDetails)), i, TimeSlot, GetDuration(AcademicYear[i][j], CourseDetails), TimeTable);

			//cout<<GetDuration(AcademicYear[i][j], CourseDetails)<<endl;
			//cout<<FindAHall(HowManyStudents(AcademicYear[i][j],CourseDetails),HallDetails,HallAva,TimeSlot,GetDuration(AcademicYear[i][j], CourseDetails));
		}
	}



	//ofstream Write;//Write the Final result on a csv file
	//Write.open("AcademicCalandar.csv");
	//for (int i = 0; i < TimeTable.size(); i++) {
	//	Write << "Academic Year " << i + 1 << "\n";
	//	for (int j = 0; j < TimeTable[i].size(); j++) {
	//		for (int k = 0; k < TimeTable[i][j].size(); k++) {
	//			Write << TimeTable[i][j][k] << ",";
	//		}
	//		Write << "\n";
	//	}Write << "\n";
	//}

}
//............................................................................................................................................//
void initialize() //this function is used to initilize the values of the vectors inorder to generate the algorithm multiple times
{
	LecDetails.clear();
	AcademicYear.clear();
	CourseDetails.clear();
	HallDetails.clear();
	TimeTable.clear();
}
//..........................................................................................................................................//
void emptyGrid() //to empty the vectors
{
	TimeTable.clear();
	vector<string> tem5s;//null vectr consists of 5 elements to fill the timetable 
	vector<vector<string>> tem5x8s;//2 D vector to fill the Timetable
	for (int i = 0; i < 7; i++)
		tem5s.push_back(" ");
	for (int i = 0; i < 8; i++)
		tem5x8s.push_back(tem5s);
	for (int i = 0; i < AcademicYear.size(); i++)
		TimeTable.push_back(tem5x8s);


}
//..........................................................................................................................................//

#include "MyForm.h"






[STAThreadAttribute]


void main() {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	timetable::MyForm MyForm;
	Application::Run(%MyForm);



}

