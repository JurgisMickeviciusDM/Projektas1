#pragma once
#include "Studentasv02.h"
#include <vector>

void Ifaila();
void sortAndSave(const std::vector<Studentas>& students, const std::string& baseFilename);
void saveToFile(const std::vector<Studentas>& students, const std::string& filename);


// Funkcija skirta generuoti student� �ra�us � fail�
void generateStudents(int n, const std::string& filename);

// Funkcija skirta skaityti student� �ra�us i� failo ir sud�ti juos � vektori�
void readStudentsFromFile(const std::string& filename, std::vector<Studentas>& studentai);

// Funkcija skirta sugrupuoti studentus � vargsiukus ir kietiakius, ir i�saugoti � atskirus failus
void groupAndSaveStudents(const std::vector<Studentas>& studentai, const std::string& baseFilename);

// Funkcija skirta i�saugoti student� duomenis � fail�
//void saveToFile(const std::vector<Studentas>& studentai, const std::string& filename);

