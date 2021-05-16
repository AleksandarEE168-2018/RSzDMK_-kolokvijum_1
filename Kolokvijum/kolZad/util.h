/**
 * @file util.h
 * @briefc Biblioteka za deklaraciju funkcija koje aktiviraju i proveravaju geometrijski niz
 * @author Aleksandar Aleksic
 * @date 16-05-2021
 */

#ifndef UTIL_H_
#define UTIL_H_

/// Makro za sortiranje niza od najmanjeg do najveceg
#define UP 1

///Makro za sortiranje niza od najveceg do najmanjeg
#define DOWN 0

///Makro za niz koji je aritmeticki
#define TRUE 1

///Makro za niz koji nije aritmeticki
#define FALSE 0
/**
 *  Funkcija koja sortira niz u ozavisnosti od parametra, moze sortirati niz od najveceg do najmanjeg ili obrnuto
 *  @param array - tipa int16_t - oznacava niz
 *  @param array lenght - tipa int16_t -  oznacava duzinu niza
 *  @param mode - tipa int8_t - oznacava tip sortiranja (UP, DOWN)
 *  @return - Nema povratnu vrednost
 */

void Sort(int16_t *array, int16_t array_length, int8_t mode);

/**
 *  Funkcija koja vrsi proveru da li je uneti niz geometrijski
 *  @param array - tipa int16_t - oznacava niz
 *  @return - Vraca vrednosti TRUE ili FALSE
 */

int8_t Check(int16_t *array);

#endif /* UTIL_H_ */
