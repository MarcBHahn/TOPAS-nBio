//
// ********************************************************************
// *                                                                  *
// * This file is part of the TOPAS-nBio extensions to the            *
// *   TOPAS Simulation Toolkit.                                      *
// * The TOPAS-nBio extensions are freely available under the license *
// *   agreement set forth at: https://topas-nbio.readthedocs.io/     *
// *                                                                  *
// ********************************************************************
//

#ifndef TsCylindericalDNA_hh
#define TsCylindericalDNA_hh

#include "TsVGeometryComponent.hh"

class TsCylindericalDNA : public TsVGeometryComponent
{    
public:
	TsCylindericalDNA(TsParameterManager* pM, TsExtensionManager* eM, TsMaterialManager* mM, TsGeometryManager* gM,
				  TsVGeometryComponent* parentComponent, G4VPhysicalVolume* parentVolume, G4String& name);
	~TsCylindericalDNA();
	
	G4VPhysicalVolume* Construct();
};

#endif
