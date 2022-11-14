#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BRNR_Library.generated.h"

class AFGResourceNodeFrackingCore;

UCLASS()
class BUILDABLERESOURCENODESREDUX_API UBRNRBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category = "BuildableResourceNodes")
	static void HandleDelayedSatelliteRegistration(AFGResourceNodeFrackingCore* FrackingCore);
};
