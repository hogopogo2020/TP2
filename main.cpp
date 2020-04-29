//
//  main.cpp
//  TP2_Christopher_Lajoie_Asselin
//
//  Created by Christopher Lajoie on 2020-04-18.
//  Copyright © 2020 Christopher Lajoie. All rights reserved.
//

#include <iostream>
#include <map>
#include "ElementFacturable.hpp"
#include "FacturableParUnite.hpp"
#include "FacturableFraisFixe.hpp"

void afficherLaFacture(std::map<int,ElementFacturable> une_facture);

int main(int argc, const char * argv[]) {
    int choix=0;
    int nb_nuit=0;
    int nb_repas=0;
    std::map<int,ElementFacturable> une_facture;
    
    
    
    
    do {
        
        std::cout<< "Choisir parmi ces choix de taches:\n";
        std::cout<< "1. Ajouter des nuitées\n";
        std::cout<< "2. Ajouter des repas\n";
        std::cout<< "3. Ajouter un accès au spa\n";
        std::cout<< "4. Ajouter un accès au gym\n";
        std::cout<< "5. Afficher la facture et quitter\n";
        
        std::cin>>choix;
        
        switch (choix) {
            case 1:{
                std::cout<<"*** Ajout de nuitees ***\n";
                std::cout<<"Saisir le nombre de nuitee : ";
                std::cin>>nb_nuit;
                ElementFacturable nuitee = new FacturableParUnite("NUITEE",nb_nuit);
                une_facture.insert(nuitee.getImportance,nuitee);
            }
                break;
            case 2:{
                std::cout<<"*** Ajout de repas ***\n";
                std::cout<<"Saisir le nombre de repas : ";
                std::cin>>nb_repas;
                ElementFacturable repas = new FacturableParUnite("REPAS",nb_repas);
                une_facture.insert(repas.getImportance,repas)
            }
                break;
            case 3:{
                std::cout<<"*** Ajout d'un acces au spa ***\n";
                ElementFacturable spa = new FacturableFraisFixe("SPA");
                une_facture.insert(spa.getImportance,spa);
            }
                break;
            case 4:{
                std::cout<<"*** Ajout d'un acces a la piscine ***\n";
                ElementFacturable piscine = new FacturableFraisFixe("PISCINE");
                une_facture.insert(piscine.getImportance,piscine);
            }
                break;
            
            default:
                break;
        }
    } while (choix!=5);
    
    afficherLaFacture(une_facture);
    
    return 0;
}
void afficherLaFacture(std::map<int,ElementFacturable> une_facture) {
    float cout_total=0;
    std::map<int,ElementFacturable>::iterator it;
    for (it=une_facture.begin(); it!=une_facture.end(); ++it) {
        std::cout << it->getType() << " : " it->getNbElement << " || Cout avec taxe: " << it->calculerCout() << "\n";
        cout_total+=it->calculerCout();
    }
    std::cout<<"Le total de la facture est : "<<cout_total<<"$";
}
