#ifndef STUDENT_HPP
#define STUDENT_HPP

#define MAX_NOTE 20
#define COEFF 24

#include <string>
class student
{
private:
    std::string name;
    Std::string surname;
    int number;
    int note;
    int totalNote;
    int coeff;
    int average;
        
public:
    student();
    ~student();
    
    /*Ajouter une nouvelle note à la liste des notes */
    void addNote();
    
    /*Calclule moyenne*/
    void calculate_average();
    
    /*Verifier si  l' etudiant est admis*/
    int admitted();
    
    /*Trouvez la note la plus élévée */ 
    int Maximum();
    
    /*Trouvez la note la plus basse */
    int Minimum();
    
    /*Calculer la mediane*/
    int calculate_Mediane();
    
   /*Triées les notes par ordre croissant*/
    void tri_average();
};

#endif // STUDENT_H