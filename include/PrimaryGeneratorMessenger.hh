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
//
// $Id: PrimaryGeneratorMessenger.hh,v 1.1 2010-10-18 15:56:17 maire Exp $
// GEANT4 tag $Name: geant4-09-04-patch-02 $
//
// 

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

#ifndef PrimaryGeneratorMessenger_h
#define PrimaryGeneratorMessenger_h 1

#include "G4UImessenger.hh"
#include "globals.hh"


class PrimaryGeneratorAction;
class G4UIdirectory;
class G4UIcmdWithADouble;
class G4UIcmdWithADoubleAndUnit;
class G4UIcmdWith3Vector;
class G4UIcmdWith3VectorAndUnit;
class G4UIcmdWithAString;
class G4UIcommand;
class G4UIcmdWithAnInteger;
class G4UIcmdWithABool;

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

class PrimaryGeneratorMessenger: public G4UImessenger
{
  public:
    PrimaryGeneratorMessenger(PrimaryGeneratorAction*);
    virtual ~PrimaryGeneratorMessenger();

  public:
    void SetNewValue(G4UIcommand*, G4String);

  private:
    PrimaryGeneratorAction*        Action;
    G4UIdirectory*                 gunDir; 
    G4UIcmdWithADoubleAndUnit*     energyCmd;
    G4UIcmdWith3Vector*            directionCmd;
    G4UIcmdWith3VectorAndUnit*     positionCmd;
    G4UIcmdWithADoubleAndUnit*     radiusCmd;
    G4UIcmdWithAString*            particleCmd;
    G4UIcommand*                   ionCmd;
    G4UIcommand*									 rangeCmd;
    G4UIcmdWithAString*            betaPlusEmissionCmd;
    G4UIcmdWithAString*            betaMinusEmissionCmd;
    G4UIcmdWithAString*            radioactiveBetaDecayCmd;
    G4UIcmdWithAString*            radioactiveSourceDecayCmd;
    G4UIcmdWithADouble*            polarizationCmd;
    G4UIcmdWithABool*              emitBetaParticleCmd;
    G4UIcmdWithABool*              includeXRayInputFileKShellCmd;
    G4UIcmdWithABool*              includeXRayInputFileLShellCmd;
    G4UIcmdWithABool*              includeXRayInputFileMShellCmd;
    G4UIcmdWithADoubleAndUnit*     radioactiveDecayHalflifeCmd;
    G4UIcmdWithAnInteger*          numberOfRadioactiveNucleiCmd;
};

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

#endif

