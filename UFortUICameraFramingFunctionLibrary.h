// Class /Script/FortniteGame.FortUICameraFramingFunctionLibrary
// Size: 0x28
class UFortUICameraFramingFunctionLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/FortniteGame.FortUICameraFramingFunctionLibrary.CalculateVisibleItemDefinitionBoundsForCameraFraming (Underlying native function: CalculateVisibleItemDefinitionBoundsForCameraFraming 0x866dd58)
	static struct FFortUICameraFrameTargetBounds CalculateVisibleItemDefinitionBoundsForCameraFraming(class UAthenaCharacterPartItemDefinition*& ItemDefinition); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortUICameraFramingFunctionLibrary.CalculateComponentSetBoundsForCameraFraming (Underlying native function: CalculateComponentSetBoundsForCameraFraming 0x866dbc4)
	static struct FFortUICameraFrameTargetBounds CalculateComponentSetBoundsForCameraFraming(struct TSet<class USceneComponent*>& Components, bool& bIgnoreHiddenOrNotVisibleComponents, bool& bIncludePSCs); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortUICameraFramingFunctionLibrary.CalculateComponentBoundsForCameraFraming (Underlying native function: CalculateComponentBoundsForCameraFraming 0x866daec)
	static struct FFortUICameraFrameTargetBounds CalculateComponentBoundsForCameraFraming(class USceneComponent*& ParentComponent, bool& bIncludePSCs); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortUICameraFramingFunctionLibrary.CalculateCharacterCapsuleForCameraFraming (Underlying native function: CalculateCharacterCapsuleForCameraFraming 0x866da5c)
	static struct FFortUICameraFrameTargetBounds CalculateCharacterCapsuleForCameraFraming(class ACharacter*& Character); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortUICameraFramingFunctionLibrary.CalculateCharacterBoundsForZoomedCameraFraming (Underlying native function: CalculateCharacterBoundsForZoomedCameraFraming 0x866d998)
	static struct FFortUICameraFrameTargetSettings CalculateCharacterBoundsForZoomedCameraFraming(class AFortPlayerPawn*& PlayerPawn); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortUICameraFramingFunctionLibrary.CalculateCharacterBoundsForCameraFraming (Underlying native function: CalculateCharacterBoundsForCameraFraming 0x866d908)
	static struct FFortUICameraFrameTargetBounds CalculateCharacterBoundsForCameraFraming(class AFortPlayerPawn*& PlayerPawn); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortUICameraFramingFunctionLibrary.CalculateActorBoundsForCameraFraming (Underlying native function: CalculateActorBoundsForCameraFraming 0x866d7f8)
	static struct FFortUICameraFrameTargetBounds CalculateActorBoundsForCameraFraming(class AActor*& Actor, bool& bIgnoreHiddenOrNotVisibleComponents, bool& bIncludePSCs); // (Final | Native | Static | Public | BlueprintCallable)
};

