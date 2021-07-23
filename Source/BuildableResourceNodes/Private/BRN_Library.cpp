#include "BRN_Library.h"

#include "Resources/FGResourceNodeFrackingCore.h"
#include "Resources/FGResourceNodeFrackingSatellite.h"
#include "Buildables/FGBuildableFrackingActivator.h"
#include "BuildableResourceNodesModule.h"

void UBRNBlueprintLibrary::HandleDelayedSatelliteRegistration(AFGResourceNodeFrackingCore* FrackingCore) {
	if (!FrackingCore) {
		UE_LOG(LogBuildableResourceNodes, Warning, TEXT("UBRNBlueprintLibrary: FrackingCore is nullpeter!"));
		return;
	}

	if (FrackingCore->HasAuthority() && FrackingCore->mActivator.IsValid()) {
		FrackingCore->mActivator->mSatelliteNodeCount = FrackingCore->mSatellites.Num();
		FrackingCore->mActivator->CalculateConnectedExtractorCount();
		FrackingCore->mActivator->CalculateDefaultPotentialExtractionPerMinute();
	}
}