//
// ********************************************************************
// * License and Disclaimer                                           *
// *                                                                  *
// * The  Geant4 software  is  copyright of the Copyright Holders  of *
// * the Geant4 Collaboration.  It is provided  under  the terms  and *
// * conditions of the Geant4 Software License,  included in the file *
// * LICENSE and available at  http://cern.ch/geant4/license .  These *
// * include a list of copyright holders.                             *
// *                                                                  *
// * Neither the authors of this software system, nor their employing *
// * institutes,nor the agencies providing financial support for this *
// * work  make  any representation or  warranty, express or implied, *
// * regarding  this  software system or assume any liability for its *
// * use.  Please see the license in the file  LICENSE  and URL above *
// * for the full disclaimer and the limitation of liability.         *
// *                                                                  *
// * This  code  implementation is the result of  the  scientific and *
// * technical work of the GEANT4 collaboration.                      *
// * By using,  copying,  modifying or  distributing the software (or *
// * any work based  on the software)  you  agree  to acknowledge its *
// * use  in  resulting  scientific  publications,  and indicate your *
// * acceptance of all terms of the Geant4 Software license.          *
// ********************************************************************
//
/// \file electromagnetic/TestEm12/include/PhysicsList.hh
/// \brief Definition of the PhysicsList class
//
//
// $Id: PhysicsList.hh 82461 2014-06-23 10:44:06Z gcosmo $
//
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
//
// 14.10.02 (V.Ivanchenko) provide modular list on base of old PhysicsList
//
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

#ifndef PhysicsList_h
#define PhysicsList_h 1

#include "G4VModularPhysicsList.hh"
#include "globals.hh"

class PhysicsListMessenger;
class StepMax;
class G4GammaConversionToMuons;
class G4AnnihiToMuPair;
class G4eeToHadrons;

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

class PhysicsList: public G4VModularPhysicsList
{
  public:
    PhysicsList();
   ~PhysicsList();

    virtual void ConstructParticle();
        
    void AddPhysicsList(const G4String& name);
    virtual void ConstructProcess();

    void AddDecay();    

    void SetStepMax(G4double);
    StepMax* GetStepMaxProcess() {return fStepMaxProcess;};
    void AddStepMax();       

    void ConstructHighEnergy();
    // Construct processes and register them
    void SetGammaToMuPairFac(G4double);
    void SetAnnihiToMuPairFac(G4double);
    void SetAnnihiToHadronFac(G4double);

  private:       
    G4String                      fEmName;
    G4VPhysicsConstructor*        fEmPhysicsList;    

    G4double fMaxChargedStep; // Refer to Example F04
    StepMax* fStepMaxProcess;
    
    PhysicsListMessenger*  fMessenger;
};

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

#endif

