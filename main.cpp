//
//  main.cpp
//  TP2_Christopher_Lajoie_Asselin
//
//  Created by Christopher Lajoie on 2020-04-18.
//  Copyright © 2020 Christopher Lajoie. All rights reserved.
//

#include <iostream>
#include <map>
#include <iomanip>
#include "ElementFacturable.hpp"
#include "FacturableParUnite.hpp"
#include "FacturableFraisFixe.hpp"

void afficherLaFacture(std::map<int,ElementFacturable*> une_facture);

int main(int argc, const char * argv[]) {
    int choix=0;
    int nb_nuit=0;
    int nb_repas=0;
    std::map<int,ElementFacturable*> une_facture;
    //Lancement de la boucle while pour le menu d'options
    do {
        
        std::cout<< "Choisir parmi ces choix de taches:\n";
        std::cout<< "1. Ajouter des nuitées\n";
        std::cout<< "2. Ajouter des repas\n";
        std::cout<< "3. Ajouter un accès au spa\n";
        std::cout<< "4. Ajouter un accès au gym\n";
        std::cout<< "5. Afficher la facture et quitter\n";
        
        std::cin>>choix;
        std::cout<<std::endl;
        
        //Version 1 de l'exception si jamais des nuitees ont deja ete ajoutees.
        
//        try{
//        if(choix==1&&une_facture.count(1)==1)throw 1;
//        }catch(const int& erreur){
//            std::cout<< "***ATTENTION - ERREUR***\n";
//            std::cout<< "Une ou des nuitees ont deja ete ajoutees.\n";
//            std::cout<<"***VEUILLEZ RECOMMENCER***"<< std::endl;
//            std::cout<< std::endl;
//            std::cout<< "Choisir parmi ces choix de taches:\n";
//            std::cout<< "2. Ajouter des repas\n";
//            std::cout<< "3. Ajouter un accès au spa\n";
//            std::cout<< "4. Ajouter un accès au gym\n";
//            std::cout<< "5. Afficher la facture et quitter\n";
//
//            std::cin>>choix;
//            std::cout<<std::endl;
//        }
        switch (choix) {
                
            // Ajout de nuitee avec 2 exceptions
            case 1:{
                std::cout<<"*** Ajout de nuitees ***\n";
                std::cout<<"Saisir le nombre de nuitee : ";
                std::cin>>nb_nuit;
                try{
                    if(nb_nuit>0&&une_facture.count(1)==1)throw 1;
                    if(nb_nuit<=0)throw 2;
                ElementFacturable* nuitee = new
                FacturableParUnite("NUITEE",nb_nuit);
                std::pair<int,ElementFacturable*> p1(nuitee->getImportance(),nuitee);
                une_facture.insert(p1);
                std::cout<<std::endl;
                    
                //Premiere exception en cas de nuitee deja existante dans le conteneur. Avec options d'ajout des nouvelles informations.
                    
                }catch(const int& erreur2){
                    if(erreur2==1){
                        std::cout<<std::endl;
                        std::cout<< "***ATTENTION***\n";
                        std::cout<< "Une ou des nuitees ont deja ete ajoutees.\n Voulez-vous continuer et ajouter ces nouvelles informations?\n1. OUI || 2. NON\n";
                        int rep;
                        std::cin>>rep;
                        if(rep==1){
                            une_facture.erase(1);
                            ElementFacturable* nuitee = new
                            FacturableParUnite("NUITEE",nb_nuit);
                            std::pair<int,ElementFacturable*> p1(nuitee->getImportance(),nuitee);
                            une_facture.insert(p1);
                            std::cout<<std::endl;
                        }
                        else if(rep==2)
                            std::cout<<std::endl;
                    }
                    
                    //Exception si jamais le nombre de nuitee est egal ou inferieur a zero.
                    
                    if(erreur2==2){
                    std::cout<< std::endl;
                    std::cout<< "***ATTENTION - ERREUR***\n";
                    std::cout<< "Le nombre de nuitee doit etre superieur a 0.\n";
                    std::cout<<"***VEUILLEZ RECOMMENCER***"<< std::endl;
                    std::cout<< std::endl;
                    }
                }
            }
                break;
                
            // Ajout de repas avec exception
            case 2:{
                std::cout<<"*** Ajout de repas ***\n";
                std::cout<<"Saisir le nombre de repas : ";
                std::cin>>nb_repas;
                try{
                    if(nb_repas<=0)throw 3;
                ElementFacturable* repas = new FacturableParUnite("REPAS",nb_repas);
                std::pair<int,ElementFacturable*> p2(repas->getImportance(),repas);
                une_facture.insert(p2);
                std::cout<<std::endl;
                
                //Exception si jamais le nombre de repas est egal ou inferieur a zero.
                    
                }catch(const int& erreur3){
                    std::cout<< std::endl;
                    std::cout<< "***ATTENTION - ERREUR***\n";
                    std::cout<< "Le nombre de repas doit etre superieur a 0.\n";
                    std::cout<<"***VEUILLEZ RECOMMENCER***"<< std::endl;
                    std::cout<< std::endl;
                }
            }
                break;
                
            // Ajout d'un acces au spa.
            case 3:{
                std::cout<<"*** Ajout d'un acces au spa ***\n";
                ElementFacturable* spa = new FacturableFraisFixe("SPA");
                std::pair<int,ElementFacturable*> p3(spa->getImportance(),spa);
                une_facture.insert(p3);
                std::cout<<std::endl;
            }
                break;
                
            // Ajout d'un acces a la piscine
            case 4:{
                std::cout<<"*** Ajout d'un acces a la piscine ***\n";
                ElementFacturable* piscine = new FacturableFraisFixe("PISCINE");
                std::pair<int,ElementFacturable*> p1(piscine->getImportance(),piscine);
                une_facture.insert(p1);
                std::cout<<std::endl;
            }
                break;
                
            case 5:
                break;
            
            default:{
                std::cout<<"MAUVAIS CHOIX!!!\n";
                std::cout<<std::endl;
            }
                break;
        }
    } while (choix!=5);
    
    afficherLaFacture(une_facture);
    
     for (std::map<int,ElementFacturable*>::iterator it=une_facture.begin(); it!=une_facture.end(); ++it) {
         delete it->second;
         it->second = NULL;
         }
    return 0;
}

//Fonction qui sert a afficher chaque item de la facture et son total. Avec un grand total qui inclut les taxes. 
void afficherLaFacture(std::map<int,ElementFacturable*> une_facture) {
    float cout_total=0;
    for (std::map<int,ElementFacturable*>::iterator it=une_facture.begin(); it!=une_facture.end(); ++it) {
            std::cout << std::fixed << std::setprecision(2) << it->second->getType() << " : "<< it->second->getNb_Element()<< " || COUT AVANT TAXES : " << it->second->getTarif() << "$\n";
            cout_total+=it->second->calculerCout();
    }
    std::cout<<std::endl;
    std::cout<<"GRAND TOTAL : ";
    std::cout << std::fixed << std::setprecision(2)<<cout_total<<"$\n";
}
