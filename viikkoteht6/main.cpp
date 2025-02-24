#include <iostream>
#include <algorithm>
#include <vector>

#include "student.h"

int main ()
{
    int selection =0;
    vector<Student>studentList;

    do {
        cout << "Select" << endl;
        cout << "Add students = 0" << endl;
        cout << "Print all students = 1" << endl;
        cout << "Sort and print students according to Name = 2" << endl;
        cout << "Sort and print students according to Age = 3" << endl;
        cout << "Find and print student = 4" << endl;
        cin >> selection;

        switch(selection) {

        case 0: {
            // Kysy käyttäjältä uuden opiskelijan nimi ja ikä
            // Lisää uusi student StudentList vektoriin.
            string nimi;
            cout << "Nimi? ";
            cin >> nimi;
            int ika=0;
            cout << "Ika? ";
            cin >> ika;

            // Ao. toimii, mutta mahdollisuus muistivuotoon:
            //   Student newStudent(nimi, ika);
            //   studentList.push_back(newStudent);
            // Sen sijaan oikea tapa:
            studentList.emplace_back(nimi, ika);
            break;
        }

        case 1:
            // Tulosta StudentList vektorin kaikkien opiskelijoiden
            // nimet.
            cout << "Opiskelijoiden nimet:" << endl;
            for (Student &s: studentList) {
                cout << s.getName() << endl;
            }
            cout << endl;
            break;

        case 2:
            // Järjestä StudentList vektorin Student oliot nimen mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            sort(studentList.begin(), studentList.end(),[](Student &eka, Student &toka)
                 { // funktion sisällä lambda-funktio
                     return eka.getName() < toka.getName();
                 }
                 );

            cout << "Opiskelijan tiedot nimen mukaan:" << endl;
            for (Student &s: studentList) {
                // funktio hoitaa tulostuksen itse
                s.printStudentInfo();
            }
            cout << endl;
            break;

        case 3:
            // Järjestä StudentList vektorin Student oliot iän mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            sort(studentList.begin(), studentList.end(),[](Student &eka, Student &toka)
                 { // funktion sisällä lambda-funktio
                     return eka.getAge() < toka.getAge();
                 }
                 );

            cout << "Opiskelijat ian mukaan:" << endl;
            for (Student &s: studentList) {
                // funktio hoitaa tulostuksen itse
                s.printStudentInfo();
            }
            cout << endl;
            break;

        case 4: {
            // Kysy käyttäjältä opiskelijan nimi
            // Etsi studentListan opiskelijoista algoritmikirjaston
            // find_if funktion avulla löytyykö käyttäjän antamaa nimeä
            // listalta. Jos löytyy, niin tulosta opiskelijan tiedot.
            cout << "Etsittava nimi? ";
            string enimi;
            cin >> enimi;

            vector<Student>::iterator it = studentList.begin();
            it = find_if(studentList.begin(), studentList.end(),[enimi](Student &s)
                         { // funktion sisällä lambda-funktio
                             return s.getName() == enimi;
                         }
                         );
            if (it != studentList.end()) {
                // iteratoria kutsutaan kuten osoitinta
                it->printStudentInfo();
            } else {
                cout << enimi << " ei loytynyt!" << endl;
            }
            break;
        }

        default:
            cout<< "Wrong selection, stopping..."<<endl;
            break;
        }
    } while (selection < 5);

    return 0;
}
