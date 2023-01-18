// Class /Script/FortniteAI.FortNavModifierComponent
// Size: 0x230
class UFortNavModifierComponent : public UNavModifierComponent
{
	float LowSpeedSquareThreshold; // 0x190 (0x4)
	float LowSpeedSquareDistanceThreshold; // 0x194 (0x4)
	float LowSpeedRotationThreshold; // 0x198 (0x4)
	float LowSpeedScaleThreshold; // 0x19c (0x4)
	unsigned char bAutomaticNavBoundComputation; // 0x1a0 (0x1)
	unsigned char bForceFailSafeExtent; // 0x1a0 (0x1)
	unsigned char unreflected_1a1[0x3]; // 0x1a1 (0x3) 
	float ExtrapolationMultiplierForFailsafeExtent; // 0x1a4 (0x4)
	struct TArray<class UClass*> DisableForNavmeshClasses; // 0x1a8 (0x10)
	class UPrimitiveComponent* PrimCompAffectingNavMesh; // 0x1b8 (0x8)
	unsigned char padding_1c0[0x70]; // 0x1c0 (0x70)

	/* Functions */

	// Function /Script/FortniteAI.FortNavModifierComponent.SetComponentAffectingNavMesh (Underlying native function: SetComponentAffectingNavMesh 0xa341090)
	void SetComponentAffectingNavMesh(class UPrimitiveComponent*& InComponentAffectingNavMesh); // (Final | 0x00000002 | Native | Public | BlueprintCallable)
};

