#include <iostream>
#include <string>
#include <vector>
#include <windows.h>
#include <stdlib.h>
using namespace std;
/*class quest{
	public:
		vector<string> q1,q2,q3,q4,q5,q6,q7,q8,q9,q10; trying something here....
};*/
struct questt{
	string q1,q2,q3,q4,q5,q6,q7,q8,q9,q10; //store users inputs
};
struct addcourses{
	string course;
	string instructor; // for admin only can add a student and enter his course
	string student;
};
struct course_data{
	string a,b,c,d,e,f,g,h,i,j,Rating1, Comment1, Course1; //stored data for the inputs
};
struct instructor_data{
	string a,b,c,d,e,f,g,h,i,j,Rating1, Comment1,instructor; //stored data for the inputs
};
struct cservice{
	string a,b,c,d,e,f,g,h,i,j,Rating,comment; //stored data for the inputs
};
struct admin_login_data{
	string signup;
	string signup_pass;
	string login;
	string password;
	string st_login;		//data to store passwords and logins
	string st_password;
	string st_sign_email;
	string st_sign_password, st_course, st_year;
};
void loading(){
	cout<<"\n\n\n\n\t\t\t\t\t\t\t\t Loading...   ";//loading screen using for loop
 	cout<<"\n\n\t\t\t\t\t\t\t\t";
 	for (int i = 1; i<=20; i++)
 	{
 		Sleep(50);
 		cout<<char(219);
	 }
	cout<<"\n\n";
 	system("cls");
}
void creating(){
	cout<<"\n\n\n\n\t\t\t\t\t\t\t\t Creating...   ";//creating screen using for loop
 	cout<<"\n\n\t\t\t\t\t\t\t\t";
 	for (int i = 1; i<=20; i++)
 	{
 		Sleep(50);
 		cout<<char(219);
	 }
	cout<<"\n\n";
 	system("cls");
}
void retrying(){
	cout<<"\n\n\n\n\t\t\t\t\t\t\t\t Error retrying...   ";//retrying screen using for loop
 	cout<<"\n\n\t\t\t\t\t\t\t\t";
 	for (int i = 1; i<=20; i++)
 	{
 		Sleep(50);
 		cout<<char(219);
	 }
	cout<<"\n\n";
 	system("cls");
}
void exit_restart(); // to use the void even if the other void doesn't define it in their codes
void exit_restart1(); // to use the void even if the other void doesn't define it in their codes
void first_page(admin_login_data& data1); // to use the void even if the other void doesn't define it in their codes
void print_course(course_data& data){		//to print the course feedback by the user or admin
	system("cls");
	cout<<"\t\t\t\t                                    Course Rating(1-5): "<<data.Rating1<<endl;
	cout<<"\t\t\t\t                                   ISABELA STATE UNIVERSITY                                            \n";
	cout<<"\t\t\t\t                                      Echague, Isabela                                              \n";
	cout<<"\t\t\t\t                                      "<<data.Course1<<endl;
	cout<<"\t\t\t\t________________________________________________________________________________________________________\n";
	cout<<"\t\t\t\t|Strongly Agree(1) | Agree(2) | Neutral(3) | Disagree(4) | Strongly Disagree(5)  \n";
	cout<<"\t\t\t\t|_______________________________________________________________________________________________________\n";
	cout<<"\t\t\t\t|The course objectives were clearly stated                                                           | "<<data.a<<endl;
	cout<<"\t\t\t\t|The course materials (e.g., textbooks, readings, videos) were helpful in understanding the concepts | "<<data.b<<endl;
	cout<<"\t\t\t\t|The assessments (quizzes, exams, assignments) were fair and relevant to the course content          | "<<data.c<<endl;
	cout<<"\t\t\t\t|The course workload was reasonable and manageable                                                   | "<<data.d<<endl;
	cout<<"\t\t\t\t|The course activities (discussions, group projects, etc.) enhanced my understanding of the material | "<<data.e<<endl;
	cout<<"\t\t\t\t|The course provided opportunities for interactive learning (e.g., discussions, group activities)    | "<<data.f<<endl;
	cout<<"\t\t\t\t|The course content was presented in an engaging and interesting manner                              | "<<data.g<<endl;
	cout<<"\t\t\t\t|The course need more revising                                                                       | "<<data.h<<endl;	
	cout<<"\t\t\t\t|I would recommend this course to other students                                                     | "<<data.i<<endl;
	cout<<"\t\t\t\t|Overall, I am satisfied with my learning experience in this course                                  | "<<data.j<<endl;
	cout<<"\t\t\t\t|Comment for the course: "<<data.Comment1<<endl;
	cout<<"\t\t\t\t|____________________________________________________________________________________________________| "<<endl;
	exit_restart();
}
void print_cservice(cservice& data){ //to print the campus service feedback by the user or admin
	system("cls");
	cout<<"\t\t\t\t                                      Campus Service Rating(1-5): "<<data.Rating<<endl;
	cout<<"\t\t\t\t                                        ISABELA STATE UNIVERSITY                                            \n";
	cout<<"\t\t\t\t                                           Echague, Isabela                                              \n";
	cout<<"\t\t\t\t________________________________________________________________________________________________________\n";
	cout<<"\t\t\t\t|Strongly Agree(1) | Agree(2) | Neutral(3) | Disagree(4) | Strongly Disagree(5)  \n";
	cout<<"\t\t\t\t|_______________________________________________________________________________________________________\n";
	cout<<"\t\t\t\t|Campus services are easily accessible when needed                                                   | "<<data.a<<endl;
	cout<<"\t\t\t\t|The campus facilities are well-maintained and clean                                                 | "<<data.b<<endl;
	cout<<"\t\t\t\t|Campus staff are helpful and courteous                                                              | "<<data.c<<endl;
	cout<<"\t\t\t\t|Campus security measures are adequate and make me feel safe                                         | "<<data.d<<endl;
	cout<<"\t\t\t\t|The campus dining options meet my dietary needs and preferences                                     | "<<data.e<<endl;
	cout<<"\t\t\t\t|Campus transportation services are reliable and convenient                                          | "<<data.f<<endl;
	cout<<"\t\t\t\t|The campus health services meet my healthcare needs effectively                                     | "<<data.g<<endl;
	cout<<"\t\t\t\t|Campus technology and IT support are readily available and helpful                                  | "<<data.h<<endl;	
	cout<<"\t\t\t\t|The campus library resources and services are satisfactory                                          | "<<data.i<<endl;
	cout<<"\t\t\t\t|Overall, my experience with campus services has been positive                                       | "<<data.j<<endl;
	cout<<"\t\t\t\t|Comment for the course: "<<data.comment<<endl;
	cout<<"\t\t\t\t|____________________________________________________________________________________________________| "<<endl;
	exit_restart();
}
void print_instructor(instructor_data& data){		//to print the instructor feedback by the user or admin
	system("cls");
	cout<<"\t\t\t\t                                      Instructor Name(1-5): "<<data.instructor<<endl;
	cout<<"\t\t\t\t                                     Instructor Rating(1-5): "<<data.Rating1<<endl;
	cout<<"\t\t\t\t                                        ISABELA STATE UNIVERSITY                                            \n";
	cout<<"\t\t\t\t                                           Echague, Isabela                                              \n";
	cout<<"\t\t\t\t________________________________________________________________________________________________________\n";
	cout<<"\t\t\t\t|Strongly Agree(1) | Agree(2) | Neutral(3) | Disagree(4) | Strongly Disagree(5)  \n";
	cout<<"\t\t\t\t|_______________________________________________________________________________________________________\n";
	cout<<"\t\t\t\t|The instructor effectively communicated course materials                                            | "<<data.a<<endl;
	cout<<"\t\t\t\t|The instructor encouraged class participation and discussion                                        | "<<data.b<<endl;;
	cout<<"\t\t\t\t|The instructor responded promptly to questions and concerns                                         | "<<data.c<<endl;;
	cout<<"\t\t\t\t|The instructor created an engaging learning environment                                             | "<<data.d<<endl;;
	cout<<"\t\t\t\t|The instructor provided clear explanations and examples                                             | "<<data.e<<endl;;
	cout<<"\t\t\t\t|The instructor effectively used multimedia or visual aids                                           | "<<data.f<<endl;;
	cout<<"\t\t\t\t|The instructor was well-organized and prepared for each class                                       | "<<data.g<<endl;;
	cout<<"\t\t\t\t|The instructor provided timely feedback on assignments and assessments                              | "<<data.h<<endl;;	
	cout<<"\t\t\t\t|The instructor was approachable and willing to assist students outside of class                     | "<<data.i<<endl;;
	cout<<"\t\t\t\t|Overall, the instructor was effective in teaching the course                                        | "<<data.j<<endl;;
	cout<<"\t\t\t\t|Comment for the Instructor: "<<data.Comment1<<endl;
	cout<<"\t\t\t\t|____________________________________________________________________________________________________| ";
	exit_restart();
}
void campusservice_0(cservice& data){		//get user or admin feedbacks
	// will use vectors on feedbacks
	cout<<"\t\t\t\t\t\t                        ISABLE STATE UNIVERSITY SERVICES\n";
	cout<<"\t\t\t\t                                       Enter rating for the service(1-5): ";
	getline(cin, data.Rating);
	cout<<"\t\t\t\t                                             ISABELA STATE UNIVERSITY                                            \n";
	cout<<"\t\t\t\t                                                Echague, Isabela                                              \n";
	cout<<"\t\t\t\t                                            Type the following Options...                            \n";
	cout<<"\t\t\t\t     ________________________________________________________________________________________________________\n";
	cout<<"\t\t\t\t     |Strongly Agree(1) | Agree(2) | Neutral(3) | Disagree(4) | Strongly Disagree(5)  \n";
	cout<<"\t\t\t\t     |_______________________________________________________________________________________________________\n";
	cout<<"\t\t\t\t     |Campus services are easily accessible when needed                                                   | ";
	cin>>data.a;
	cout<<"\t\t\t\t     |The campus facilities are well-maintained and clean                                                 | ";
	cin>>data.b;
	cout<<"\t\t\t\t     |Campus staff are helpful and courteous                                                              | ";
	cin>>data.c;
	cout<<"\t\t\t\t     |Campus security measures are adequate and make me feel safe                                         | ";
	cin>>data.d;
	cout<<"\t\t\t\t     |The campus dining options meet my dietary needs and preferences                                     | ";
	cin>>data.e;
	cout<<"\t\t\t\t     |Campus transportation services are reliable and convenient                                          | ";
	cin>>data.f;
	cout<<"\t\t\t\t     |The campus health services meet my healthcare needs effectively                                     | ";
	cin>>data.g;
	cout<<"\t\t\t\t     |Campus technology and IT support are readily available and helpful                                  | ";
	cin>>data.h;	
	cout<<"\t\t\t\t     |The campus library resources and services are satisfactory                                          | ";
	cin>>data.i;
	cout<<"\t\t\t\t     |Overall, my experience with campus services has been positive                                       | ";
	cin>>data.j;
	cout<<"\t\t\t\t     |Comment for the course: ";
	cin.ignore();
	getline(cin, data.comment);
	cout<<"\t\t\t\t     |____________________________________________________________________________________________________| ";
	print_cservice (data);
// will use the stored data to print a much better layout of this rating
}
void instructor_0(instructor_data& data){  //get user or admin feedbacks
	// will use vectors on feedbacks
	
	cout<<"\t\t\t\tInstructor Evaluation\n";
	cout<<"\t\t\t\tEnter The Name Of Instructor to evaluate: ";
	getline(cin, data.instructor);
	cout<<"\t\t\t\tEnter rating for the Instructor(1-5): ";
	getline(cin, data.Rating1);
	cout<<"\t\t\t\t                                ISABELA STATE UNIVERSITY                                            \n";
	cout<<"\t\t\t\t                                        Echague, Isabela                                              \n";
	cout<<"\t\t\t\t                                    Type the following Options...                            \n";
	cout<<"\t\t\t\t     ________________________________________________________________________________________________________\n";
	cout<<"\t\t\t\t     |Strongly Agree(1) | Agree(2) | Neutral(3) | Disagree(4) | Strongly Disagree(5)  \n";
	cout<<"\t\t\t\t     |_______________________________________________________________________________________________________\n";
	cout<<"\t\t\t\t     |The instructor effectively communicated course materials                                            | ";
	cin>>data.a;
	cout<<"\t\t\t\t     |The instructor encouraged class participation and discussion                                        | ";
	cin>>data.b;
	cout<<"\t\t\t\t     |The instructor responded promptly to questions and concerns                                         | ";
	cin>>data.c;
	cout<<"\t\t\t\t     |The instructor created an engaging learning environment                                             | ";
	cin>>data.d;
	cout<<"\t\t\t\t     |The instructor provided clear explanations and examples                                             | ";
	cin>>data.e;
	cout<<"\t\t\t\t     |The instructor effectively used multimedia or visual aids                                           | ";
	cin>>data.f;
	cout<<"\t\t\t\t     |The instructor was well-organized and prepared for each class                                       | ";
	cin>>data.g;
	cout<<"\t\t\t\t     |The instructor provided timely feedback on assignments and assessments                              | ";
	cin>>data.h;	
	cout<<"\t\t\t\t     |The instructor was approachable and willing to assist students outside of class                     | ";
	cin>>data.i;
	cout<<"\t\t\t\t     |Overall, the instructor was effective in teaching the course                                        | ";
	cin>>data.j;
	cout<<"\t\t\t\t     |Comment for the Instructor: ";
	cin.ignore();
	getline(cin, data.Comment1);
	cout<<"\t\t\t\t     |____________________________________________________________________________________________________| ";
	print_instructor(data);
// will use the stored data to print a much better layout of this rating
}
void course_0(course_data& data){  // get the admin or user the feedback
	// will use vectors on feedbacks
	
	cout<<"\t\t\t\tCourse Evaluation\n";
	cout<<"\t\t\t\tEnter Course: ";
	getline(cin, data.Course1);
	cout<<"\t\t\t\tEnter rating for the course(1-5): ";
	getline(cin, data.Rating1);
	cout<<"\t\t\t\t                                        ISABELA STATE UNIVERSITY                                            \n";
	cout<<"\t\t\t\t                                           Echague, Isabela                                              \n";
	cout<<"\t\t\t\t                                           "<<data.Course1<<endl;
	cout<<"\t\t\t\t                                    Type the following Options...                            \n";
	cout<<"\t\t\t\t     ________________________________________________________________________________________________________\n";
	cout<<"\t\t\t\t     |Strongly Agree(1) | Agree(2) | Neutral(3) | Disagree(4) | Strongly Disagree(5)  \n";
	cout<<"\t\t\t\t     |_______________________________________________________________________________________________________\n";
	cout<<"\t\t\t\t     |The course objectives were clearly stated                                                           | ";
	cin>>data.a;
	cout<<"\t\t\t\t     |The course materials (e.g., textbooks, readings, videos) were helpful in understanding the concepts | ";
	cin>>data.b;
	cout<<"\t\t\t\t     |The assessments (quizzes, exams, assignments) were fair and relevant to the course content          | ";
	cin>>data.c;
	cout<<"\t\t\t\t     |The course workload was reasonable and manageable                                                   | ";
	cin>>data.d;
	cout<<"\t\t\t\t     |The course activities (discussions, group projects, etc.) enhanced my understanding of the material | ";
	cin>>data.e;
	cout<<"\t\t\t\t     |The course provided opportunities for interactive learning (e.g., discussions, group activities)    | ";
	cin>>data.f;
	cout<<"\t\t\t\t     |The course content was presented in an engaging and interesting manner                              | ";
	cin>>data.g;
	cout<<"\t\t\t\t     |The course need more revising                                                                       | ";
	cin>>data.h;	
	cout<<"\t\t\t\t     |I would recommend this course to other students                                                     | ";
	cin>>data.i;
	cout<<"\t\t\t\t     |Overall, I am satisfied with my learning experience in this course                                  | ";
	cin>>data.j;
	cout<<"\t\t\t\t     |Comment for the course: ";
	cin.ignore();
	getline(cin, data.Comment1);
	cout<<"\t\t\t\t     |____________________________________________________________________________________________________| "<<endl;
	print_course(data);
// will use the stored data to print a much better layout of this rating
}
void questionnaires(questt& q){ //add questionnaires to the admin feature
	cout<<"\t\t\t\tEnter Questionnaire [1]:";
	getline(cin, q.q1);
	cout<<"\t\t\t\tEnter Questionnaire [2]:";
	getline(cin, q.q2);
	cout<<"\t\t\t\tEnter Questionnaire [3]:";
	getline(cin, q.q3);
	cout<<"\t\t\t\tEnter Questionnaire [4]:";
	getline(cin, q.q4);
	cout<<"\t\t\t\tEnter Questionnaire [5]:";
	getline(cin, q.q5);
	cout<<"\t\t\t\tEnter Questionnaire [6]:";
	getline(cin, q.q6);
	cout<<"\t\t\t\tEnter Questionnaire [7]:";
	getline(cin, q.q7);
	cout<<"\t\t\t\tEnter Questionnaire [8]:";
	getline(cin, q.q8);
	cout<<"\t\t\t\tEnter Questionnaire [9]:";
	getline(cin, q.q9);
	cout<<"\t\t\t\tEnter Questionnaire [10]:";
	getline(cin, q.q10);
	cout<<endl;
	cout<<"\t\t\t\t\t\tQUESTIONNAIRE'S ADDED\n";
	exit_restart1();
}
void add(addcourses& data){ // add student information 
	cout<<"\t\t\t\t\tADD STUDENT'S INFORMATION AND COURSE"<<endl;
	cout<<"\t\t\t\tEnter Student Name: ";
	getline(cin, data.student);
	cout<<"\t\t\t\tEnter Course Name: ";
	getline(cin, data.course);
	cout<<"\t\t\t\tEnter Instructor Name: ";
	getline(cin, data.instructor);
	cout<<endl;
	cout<<"\t\t\t\t__________________________________________________________\n";
	cout<<"\t\t\t\t|Course:"<<data.course<<"            Instructor:"<<data.instructor<<"\t\t         \n";
	cout<<"\t\t\t\t__________________________________________________________\n";
	cout<<"\t\t\t\t|Student:"<<data.student<<"                                               \n";
	cout<<"\t\t\t\t|_________________________________________________________\n";
	exit_restart1();
}
void options_2(){ // option to the feedback to evaluate this is for admins
	int ans;

    do // retrying if the user input is false not working with letters
	{
		cout<<"\t\t\t\tType The following Option list to proceed..."<<endl; // ask the user to enter
		cout<<"\t\t\t\t\033[1;36m[0]\033[0m Course Feedback          \033[1;36m[3]\033[0mManage Questionnaires   \n";
		cout<<"\t\t\t\t\033[1;36m[1]\033[0m Instructor Feedback      \033[1;36m[4]\033[0mManage Courses/Instructors/Students   \n";
		cout<<"\t\t\t\t\033[1;36m[2]\033[0m Campus Sevice Feedback      \n";
		cout<<"\t\t\t\t\033[1;36m[?]\033[0m ";
		cin>>ans;	
		cin.ignore();
		system("cls");
		cout<<"\t\t\t\t\tError Try again...\n";
	}	while(ans != 0 && ans != 1 && ans != 2 && ans != 3 && ans != 4);
			if(ans == 0) // goto the next panel after the condition is true
		{
			system("cls");
			course_data data;
			course_0(data);
		}
		else if(ans == 1)
		{
			system("cls");
			instructor_data data1;
			instructor_0(data1);
		}
		else if(ans == 2)
		{
			system("cls");
			cservice data2;
			campusservice_0(data2);
		}
		else if(ans == 3)
		{
			system("cls");
			questt q;
			questionnaires(q);
		}
		if (ans == 4)
		{
			system("cls");
			addcourses a;
			add(a);
		}
}
void options_1(){ // option to the feedback to evaluate this is for students
	int ans;

    do // retrying if the user input is false not working with letters
	{
		cout<<"\t\t\t\tType The following Option list to proceed..."<<endl; // ask the user to enter
		cout<<"\t\t\t\t\033[1;36m[0]\033[0m Course Feedback: \n";
		cout<<"\t\t\t\t\033[1;36m[1]\033[0m Instructor Feedback: \n";
		cout<<"\t\t\t\t\033[1;36m[2]\033[0m Campus Sevice Feedback: \n";
		cout<<"\t\t\t\t\033[1;36m[?]\033[0m ";
		cin>>ans;	
		cin.ignore();
		system("cls");
		cout<<"\t\t\t\t\tError Try again...\n";
	}	while(ans != 0 && ans != 1 && ans != 2);
			if(ans == 0) // goto the next panel after the condition is true
		{
			system("cls");
			course_data data;
			course_0(data);
		}
		else if(ans == 1)
		{
			system("cls");
			instructor_data data1;
			instructor_0(data1);
		}
		else if(ans == 2)
		{
			system("cls");
			cservice data2;
			campusservice_0(data2);
		}

}
/*void view(admin_login_data& admin, course_data& course, cservice& service){
	int ans;
	do{
	cout<<"\t\t\t\t Feedback Complete\n";
	cout<<"\t\t\t\tChoose The Following Option\n";
	cout<<"\t\t\t\t\033[1;36m[0]\033[0m Manage Course Feedback:      \033[1;36m[2]\033[0m Exit:\n";
	cout<<"\t\t\t\t\033[1;36m[1]\033[0m Make another Feedback:\n";
	cout<<"\t\t\t\t\033[1;36m[?]\033[0m ";
	cin>>ans;	
	cin.ignore();
	system("cls");
	}while(ans != 0 && ans != 1 && ans != 2);
	if (ans == 0){
		loading();
		cout<<"\t\t\t\t";
	}
	else if (ans == 1){
		loading();
		options_1();
	}
	else if(ans == 2)
	{
		loading();
		exit(0);
	}
}*/
void first_page(admin_login_data& data1, course_data& course, cservice& service){
	int ans;
    do // retrying if the user input is false not working with letters
	{
	cout<<"\t\t\t\tChoose The Following Option\n";
	cout<<"\t\t\t\t\033[1;36m[0]\033[0m Login as Admin:     \033[1;36m[2]\033[0m Sign Up as Admin:\n";
	cout<<"\t\t\t\t\033[1;36m[1]\033[0m Login as Student:   \033[1;36m[3]\033[0m Sign Up as Student:\n";
	cout<<"\t\t\t\t\033[1;36m[?]\033[0m ";
	cin>>ans;	
	cin.ignore();
	system("cls");
	cout<<"\t\t\t\t\tError Try again...\n";
	}	while(ans != 0 && ans != 1 && ans != 2 && ans != 3);
			if(ans == 0) // goto the next panel after the condition is true
		{
			system("cls");
			loading();
			cout<<"\t\t\t\t\t\tLogin as Admin"<<endl;
			cin.clear();
			cout<<"\t\t\t\tEnter Email: ";
			getline(cin, data1.login);
			cout<<"\t\t\t\tEnter Password: ";
			getline(cin, data1.password);
			if(data1.login == data1.signup && data1.password == data1.signup_pass)
			{
				loading();
				cout<<"\t\t\t\t\t!Welcome "<<data1.signup<<endl;
				options_2();
			}
			else if(data1.login != data1.signup && data1.password != data1.signup_pass)
			{
				retrying();
				cout<<"\t\t\t\t!Error Wrong Email and Password\n";
				first_page(data1,course,service);
			}
			else if(data1.login != data1.signup && data1.password == data1.signup_pass)
			{
				retrying();
				cout<<"\t\t\t\t!Error Wrong Email\n";
				first_page(data1,course,service);
			}
			else if(data1.login == data1.signup && data1.password != data1.signup_pass)
			{
				retrying();
				cout<<"\t\t\t\t!Error Wrong Password\n";
				first_page(data1,course,service);
			}
		}
		else if(ans == 1)
		{
			system("cls");
			loading();
			cout<<"\t\t\t\t\t\tLogin as Student"<<endl;
			cin.clear();
			cout<<"\t\t\t\tEnter Email: ";
			getline(cin, data1.st_login);
			cout<<"\t\t\t\tEnter Password: ";
			getline(cin, data1.st_password);
			if(data1.st_login == data1.st_sign_email && data1.st_password == data1.st_sign_password)
			{
				loading();
				cout<<"\t\t\t\t\t!Welcome "<<data1.st_sign_email<<endl;
				options_1();
			}
			else if(data1.st_login != data1.st_sign_email && data1.st_password != data1.st_sign_password)
			{
				retrying();
				cout<<"\t\t\t\t!Error Wrong Email and Password\n";
				first_page(data1,course,service);
			}
			else if(data1.st_login != data1.st_sign_email && data1.st_password == data1.st_sign_password)
			{
				retrying();
				cout<<"\t\t\t\t!Error Wrong Email\n";
				first_page(data1,course,service);
			}
			else if(data1.st_login == data1.st_sign_email && data1.st_password != data1.st_sign_password)
			{
				retrying();
				cout<<"\t\t\t\t!Error Wrong Password\n";
				first_page(data1,course,service);
			}

		}
		else if(ans == 2)
		{
			system("cls");
			loading();
			cin.clear();
			cout<<"\t\t\t\t\tAdmin Sign Up "<<endl;
			cout<<"\t\t\t\tEnter Email: ";
			getline(cin, data1.signup);
			cout<<"\t\t\t\tEnter Password: ";
			getline(cin, data1.signup_pass);
			creating();
			cout<<"\t\t\t\tCongratulations for Signing Up "<<data1.signup<<endl;
			cout<<"\t\t\t\tYou can now login as admin\n\n";
			first_page(data1,course,service);
		}
		else if(ans == 3){
			system("cls");
			loading();
			cin.clear();
			cout<<"\t\t\t\t\tStudent Sign Up "<<endl;
			cout<<"\t\t\t\tEnter Course: ";
			getline(cin, data1.st_course);
			cout<<"\t\t\t\tEnter Year Level: ";
			getline(cin, data1.st_year);
			cout<<"\t\t\t\tEnter Email: ";
			getline(cin, data1.st_sign_email);
			cout<<"\t\t\t\tEnter Password: ";
			getline(cin, data1.st_sign_password);
			creating();
			cout<<"\t\t\t\tCongratulations for Signing Up "<<data1.st_sign_email<<endl;
			cout<<"\t\t\t\tCourse: "<<data1.st_course<<" Year Level: "<<data1.st_year<<endl;
			cout<<"\t\t\t\tYou can now login as student\n\n";
			first_page(data1,course,service);
		}

}
void exit_restart(){
	int ans;
	do{
	cout<<"\t\t\t\tType the following Options\n";
	cout<<"\t\t\t\tChoose The Following Option\n";
	cout<<"\t\t\t\t\033[1;36m[0]\033[0m Main Menu:         \033[1;36m[1]\033[0m Exit:\n";
	cout<<"\t\t\t\t\033[1;36m[?]\033[0m ";
	cin>>ans;	
	cin.ignore();
	system("cls");
	}while(ans != 0 && ans != 1 );
	if (ans == 0){
		system("cls");
		admin_login_data data1;
		course_data data2;
		cservice data3;
		first_page(data1,data2,data3);
	}
	else if (ans == 1){
		system("cls");
		exit(0);
	}

}
void exit_restart1(){
	int ans;
	do{
	cout<<"\t\t\t\t  \n";
	cout<<"\t\t\t\tType the following Options\n";
	cout<<"\t\t\t\tChoose The Following Option\n";
	cout<<"\t\t\t\t\033[1;36m[0]\033[0m Main Menu:         \033[1;36m[1]\033[0m Exit:\n";
	cout<<"\t\t\t\t\033[1;36m[2]\033[0mBack to list(ADMIN)\n";
	cout<<"\t\t\t\t\033[1;36m[?]\033[0m ";
	cin>>ans;	
	cin.ignore();
	system("cls");
	}while(ans != 0 && ans != 1 && ans != 2 && ans != 3);
	if (ans == 0){
		system("cls");
		admin_login_data data1;
		course_data data2;
		cservice data3;
		first_page(data1,data2,data3);
	}
	else if (ans == 1){
		system("cls");
		exit(0);
	}
	else if(ans == 2) //fixxxxx
	{
		system("cls");
		options_2();
	}
}
void header(){

cout<<"\t\t\t\t\033[1;34m____ ____ ____ ___  ___  ____ ____ _  _ \033[0m"<<endl;
cout<<"\t\t\t\t\033[1;34m|___ |___ |___ |  \\ |__] |__| |    |_/ \033[0m"<<endl;
cout<<"\t\t\t\t\033[1;34m|    |___ |___ |__/ |__] |  | |___ | \\_ \033[0m"<<endl<<endl;
                           
}
int main()
{
	admin_login_data data1;
	course_data data2;
	cservice data3;
	//view(data1,data2,data3);
	//instructor_data data4;
	header();
	first_page(data1,data2,data3);
	//campusservice_0(data3);
	//instructor_0(data4);
	//course_0(data33);
	//print_course(data2);
	//logindata data1; 
	//data_panel_1(data1);
	//options_1();
	//cout<<": "<<data1.panel_name;
	return 0;
}
