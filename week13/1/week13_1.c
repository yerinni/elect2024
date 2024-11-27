//week13_1


struct student {
	int ID;
	char name[10];
	double grade;
	
};

int main(void) {
	
	struct student s = { 21, "Yerin", 4.5
	};
	
	
	printf("ID: %d\nname: %s\ngrade: %f", s.ID, s.name, s.grade);
}
