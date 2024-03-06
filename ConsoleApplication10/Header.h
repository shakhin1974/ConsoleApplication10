using namespace std;
struct Student 
{ int id{}; 	 string fio; int age{}; char pol{};  
int ves{};  float rost{};  int stependia{}; string  gruppa;

char Pol()
{
	if ((pol == 'Ì') || (pol == 'Æ')) return pol;
	else return '0'; }
int Age()
{
	if (age <= 15 || age >= 60) { return 0; }
	else  {return age;}
}

void Display ()
{	pol = Pol();
	age = Age();
	cout << setw(3) << left << id << setw(18) << left << fio
		<< setw(7) << left << age << setw(7) << left << pol
		<< setw(7) << left << ves << setw(7) << left << rost <<
		setw(7) << left << stependia << setw(7) << left << gruppa << endl;
	}
} st;