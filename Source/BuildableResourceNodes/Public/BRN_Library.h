#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BRN_Library.generated.h"

class AFGResourceNodeFrackingCore;

UCLASS()
class BUILDABLERESOURCENODES_API UBRNBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category = "BRN")
	static void HandleDelayedSatelliteRegistration(AFGResourceNodeFrackingCore* FrackingCore);
};
