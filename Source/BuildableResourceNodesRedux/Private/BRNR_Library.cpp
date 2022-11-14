#include "BRNR_Library.h"

#include "Resources/FGResourceNodeFrackingCore.h"
#include "Resources/FGResourceNodeFrackingSatellite.h"
#include "Buildables/FGBuildableFrackingActivator.h"
#include "BuildableResourceNodesReduxModule.h"

void UBRNRBlueprintLibrary::HandleDelayedSatelliteRegistration(AFGResourceNodeFrackingCore* FrackingCore) {
	if (!FrackingCore) {
		UE_LOG(LogBuildableResourceNodesRedux, Warning, TEXT("UBRNBlueprintLibrary: FrackingCore is nullpeter!"));
		return;
	}

	if (FrackingCore->HasAuthority() && FrackingCore->mActivator.IsValid()) {
		FrackingCore->mActivator->mSatelliteNodeCount = FrackingCore->mSatellites.Num();
		FrackingCore->mActivator->CalculateConnectedExtractorCount();
		FrackingCore->mActivator->CalculateDefaultPotentialExtractionPerMinute();
	}
}