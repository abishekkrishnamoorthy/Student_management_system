typedef struct{
        int  reg_no;
        int  age;
        char name[50];
        char gender[10];
        char phone[10];
        char emaiid[50];
        char dept[50];
        int  year_from;
	int  year_to;
        char father_name[50];
        char father_phone[10];
	int  percentage;
        int  sub_mark[5];
        char grade[10];
} student ;
extern student  s[10];
void add();
void add_data() ;
void view_data();
void upload();
void conn();
void terminate();
void modify_data();
void first_page(int);
