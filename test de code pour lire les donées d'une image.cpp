#include <iostream>
#include <fstream>
#include <string>
using namespace std;
    
    int main()
    {
        ifstream  fichier("D:/Snir2/tiff c++ cam�ra ir/Project1/test.txt");
        int position = fichier.tellg();// on r�cup�re la position
        
        fichier.seekg(0, ios::beg);
   
        if (fichier)
          
        {
            //L'ouverture s'est bien pass�e, on peut donc lire

            string ligne; //Une variable pour stocker les lignes lues

            while (getline(fichier, ligne)) //Tant qu'on n'est pas � la fin, on lit
            {
                cout << ligne << endl;
                //Et on l'affiche dans la console
                //Ou alors on fait quelque chose avec cette ligne
                //� vous de voir
            }
            
        }
        else
        {
            cout << "ERREUR: Impossible d'ouvrir le fichier en lecture." << endl;
        }

        cout << "Nous nous situons au " << position << "eme caractere du fichier." << endl;

        return 0;
    };