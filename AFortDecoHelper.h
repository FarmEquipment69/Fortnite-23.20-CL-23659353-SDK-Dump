// Class /Script/FortniteGame.FortDecoHelper
// Size: 0x510
class AFortDecoHelper : public AActor
{
	class AFortDecoPreview* DecoPreview; // 0x288 (0x8)
	class UClass* PlacementActorClass; // 0x290 (0x8)
	struct TWeakObjectPtr<class AFortDecoTool> DecoTool; // 0x298 (0x8)
	float DecoToolReach; // 0x2a0 (0x4)
	struct TEnumAsByte<EBuildingAttachmentType> CurrentAttachmentType; // 0x2a4 (0x1)
	struct TEnumAsByte<EPlacementType> CurrentPlacementType; // 0x2a5 (0x1)
	unsigned char unreflected_2a6[0x2]; // 0x2a6 (0x2) 
	class UFortDecoItemDefinition* DecoItemDefinition; // 0x2a8 (0x8)
	struct FVector LocationData[0x2]; // 0x2b0 (0x18) (ARRAY) 
	struct FRotator RelativeRotationData[0x2]; // 0x2e0 (0x18) (ARRAY) 
	struct FRotator AbsoluteRotationData[0x2]; // 0x310 (0x18) (ARRAY) 
	float ScaleData[0x2]; // 0x340 (0x4) (ARRAY) 
	unsigned char unreflected_348[0x8]; // 0x348 (0x8) 
	struct FDecoPlacementState PlacementInfo; // 0x350 (0x130)
	bool bInFallbackPosition; // 0x480 (0x1)
	unsigned char unreflected_481[0x3]; // 0x481 (0x3) 
	float FallbackTinyScale; // 0x484 (0x4)
	struct TEnumAsByte<EFortDecoPlacementQueryResults> CanPlaceState; // 0x488 (0x1)
	unsigned char unreflected_489[0x7]; // 0x489 (0x7) 
	struct FText CustomPlacementText; // 0x490 (0x18)
	float DesiredRelativeRotation; // 0x4a8 (0x4)
	unsigned char unreflected_4ac[0x4]; // 0x4ac (0x4) 
	struct FVector DirectionChange; // 0x4b0 (0x18)
	float GridSnapSize; // 0x4c8 (0x4)
	unsigned char unreflected_4cc[0x4]; // 0x4cc (0x4) 
	struct FRotator FreeFloorPlacementRelativeRotationOffset; // 0x4d0 (0x18)
	unsigned char padding_4e8[0x28]; // 0x4e8 (0x28)

	/* Functions */

	// Function /Script/FortniteGame.FortDecoHelper.IsInValidPlacementSpot (Underlying native function: IsInValidPlacementSpot 0x9040490)
	bool IsInValidPlacementSpot(bool& bTestingForVisuals); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortDecoHelper.GetInFallbackPosition (Underlying native function: GetInFallbackPosition 0x903f4b4)
	bool GetInFallbackPosition(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

