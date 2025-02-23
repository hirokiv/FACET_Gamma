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
// $Id: F04PrimaryGeneratorMessenger.cc 77884 2013-11-29 08:41:11Z gcosmo $
//
/// \file field/field04/src/F04PrimaryGeneratorMessenger.cc
/// \brief Implementation of the F04PrimaryGeneratorMessenger class
//

#include "G4UIcmdWithAString.hh"
#include "G4UIcmdWithADoubleAndUnit.hh"
#include "G4UIcmdWithADouble.hh"
#include "G4SystemOfUnits.hh"

#include "TwissBeamGenerator.hh"
#include "TwissBeamGeneratorMessenger.hh"

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
//   
//   PrimaryGeneratorMessenger::
//                     PrimaryGeneratorMessenger(PrimaryGenerator* gun)
//     : fAction(gun)
//   {
//     fSetMomentumCmd = new G4UIcmdWithADoubleAndUnit("/primary/momentum",this);
//     fSetMomentumCmd->SetGuidance(" Set momentum of the primary particles in eV.");
//     fSetMomentumCmd->SetParameterName("pe",true);
//     fSetMomentumCmd->SetDefaultValue(10000.0*MeV);
//     fSetMomentumCmd->SetDefaultUnit("MeV");
//   
//     fSetSigrCmd = new G4UIcmdWithADoubleAndUnit("/primary/sigr",this);
//     fSetSigrCmd->SetGuidance(" Set RMS radius of the primary particles.");
//     fSetSigrCmd->SetParameterName("sigr",true);
//     fSetSigrCmd->SetDefaultValue(10.0*um);
//     fSetSigrCmd->SetDefaultUnit("um");
//   
//     fSetSigzCmd = new G4UIcmdWithADoubleAndUnit("/primary/sigz",this);
//     fSetSigzCmd->SetGuidance(" Set RMS length of the primary particles.");
//     fSetSigzCmd->SetParameterName("sigz",true);
//     fSetSigzCmd->SetDefaultValue(13.0*um);
//     fSetSigzCmd->SetDefaultUnit("um");
//   
//     fSetEmittanceCmd = new G4UIcmdWithADouble("/primary/emittance",this);
//     fSetEmittanceCmd->SetGuidance(" Set Normalized emittance in mm-mrad .");
//     fSetEmittanceCmd->SetParameterName("emitt",true);
//     fSetEmittanceCmd->SetDefaultValue(20.0);
//   //  fSetEmittanceCmd->SetDefaultUnit("um");
//   //
//     fSetParticleCmd = new G4UIcmdWithAString("/primary/particle",this);
//     fSetParticleCmd->SetGuidance(" Set particle.");
//     fSetParticleCmd->SetParameterName("specy",true);
//     fSetParticleCmd->SetDefaultValue("e-");
//   }
//   
//   //....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
//   
//   PrimaryGeneratorMessenger::~PrimaryGeneratorMessenger()
//   {
//     delete fSetMomentumCmd;
//     delete fSetSigrCmd;
//     delete fSetSigzCmd;
//     delete fSetParticleCmd;
//   }
//   
//   //....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
//   
//   void PrimaryGeneratorMessenger::
//                             SetNewValue(G4UIcommand * command,G4String newValue)
//   {
//     if( command == fSetMomentumCmd)
//      { fAction->SetMomentum(fSetMomentumCmd->GetNewDoubleValue(newValue));}
//     if( command == fSetSigrCmd)
//      { fAction->SetSigr(fSetSigrCmd->GetNewDoubleValue(newValue));}
//     if( command == fSetSigzCmd)
//      { fAction->SetSigz(fSetSigzCmd->GetNewDoubleValue(newValue));}
//     if( command == fSetEmittanceCmd)
//      { fAction->SetEmittance(fSetEmittanceCmd->GetNewDoubleValue(newValue));}
//     if( command == fSetParticleCmd)
//      {
//        fAction->SetParticle(newValue);      
//      }
//   
//   }
