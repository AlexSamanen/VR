int main ()
{
  int selection =0;
  vector<Student>studentList;

    Student A("Aaa",30);
    Student B("Bee",26);
    Student C("Cee",28);
    Student D("Dee",27);

    studentList:push_back(a);
    studentList:push_back(b);
    studentList:push_back(c);

  do
    {
      cout<<endl;
      cout<<"Select"<<endl;
      cout<<"Add students = 0"<<endl;
      cout<<"Print all students = 1"<<endl;
      cout<<"Sort and print students according to Name = 2"<<endl;
      cout<<"Sort and print students according to Age = 3"<<endl;
      cout<<"Find and print student = 4"<<endl;
      cin>>selection;

      switch(selection)
      {
        case 0:
          // Kysy käyttäjältä uuden opiskelijan nimi ja ikä
		  // Lisää uusi student StudentList vektoriin.
          break;
        case 1:
          // Tulosta StudentList vektorin kaikkien opiskelijoiden
          // nimet.
            cout << "Opiskelijoiden nimet: ";

          for (Student s: studentList){
            cout << num << " ";
          }
          cout << endl;
          break;

        case 2:
		  // Järjestä StudentList vektorin Student oliot nimen mukaan
		  // algoritmikirjaston sort funktion avulla
		  // ja tulosta printStudentInfo() funktion avulla järjestetyt
		  // opiskelijat

            sort(oppilaat.begin(), oppilaat.end(),[](Student &eka, Student &toka)
                 {
                     return eka.getAge() vertailu toka;.getNimi();
                 }
                 );
            cout << endl << "Lajitteltu nimen perusteella" << endl;
            for (Student &s: studentList) {
                cout << s.name << ": " << s.grade << endl;
            }
          break;

        case 3:
		  // Järjestä StudentList vektorin Student oliot iän mukaan
		  // algoritmikirjaston sort funktion avulla
		  // ja tulosta printStudentInfo() funktion avulla järjestetyt
		  // opiskelijat

            sort(oppilaat.begin(), oppilaat.end(),[](Student &eka, Student &toka)
            {
              return eka.getAge() vertailu toka;.getAge();
            }
               );
            cout << endl << "Lajiteltu arvosanan perusteella" << endl;
            for (auto &s: oppilaat) {
                cout << s.name << ": " << s.grade << endl;
            }
          break;
        case 4:
          // Kysy käyttäjältä opiskelijan nimi
		  // Etsi studentListan opiskelijoista algoritmikirjaston
		  // find_if funktion avulla löytyykö käyttäjän antamaa nimeä
		  // listalta. Jos löytyy, niin tulosta opiskelijan tiedot.
            vector<Student>::iterator it = studentList.begin();

         cout << "Anna etsittava nimi" << endl;
         string etsittavannimi;
         cin >> etsittavannimi;
         it = std::find_if(v.begin(), v.end(),
                           [n](const MyClass & m) -> bool { retun m;.myInt == n; });

         if ( it != str.end() ) {
             cout << "found\n";
         }
         else {
             cout << " not found\n";
         }
         break;

        default:
            cout << "Wrong selection, stopping..." << endl;
            break;
      }
    }while(selection < 5);

  return 0;
}
