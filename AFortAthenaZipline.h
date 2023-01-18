// Class /Script/FortniteGame.FortAthenaZipline
// Size: 0xc68
class AFortAthenaZipline : public AFortAthenaZiplineBase
{
	struct FScalableFloat ZiplineVelocity; // 0xa70 (0x28)
	struct FScalableFloat ZiplineAcceleration; // 0xa98 (0x28)
	struct FScalableFloat ZiplineVariableSpeedEnabled; // 0xac0 (0x28)
	struct FScalableFloat DownhillAcceleration; // 0xae8 (0x28)
	struct FScalableFloat UphillAcceleration; // 0xb10 (0x28)
	struct FScalableFloat DownhillDeceleration; // 0xb38 (0x28)
	struct FScalableFloat UphillDeceleration; // 0xb60 (0x28)
	struct FScalableFloat ZiplineDownhillSpeed; // 0xb88 (0x28)
	struct FScalableFloat ZiplineUphillSpeed; // 0xbb0 (0x28)
	struct FScalableFloat ZiplineUphillSpeedMin; // 0xbd8 (0x28)
	struct FVector StartPosition; // 0xc00 (0x18)
	struct FVector EndPosition; // 0xc18 (0x18)
	bool bInitialized; // 0xc30 (0x1)
	unsigned char unreflected_c31[0x3]; // 0xc31 (0x3) 
	struct TWeakObjectPtr<class UCapsuleComponent> InteractIconPlacementCapsule; // 0xc34 (0x8)
	unsigned char unreflected_c3c[0x4]; // 0xc3c (0x4) 
	struct FScalableFloat DestructionEnabled; // 0xc40 (0x28)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaZipline.Initialize (Underlying native function: Initialize 0x832e61c)
	void Initialize(struct FVector& NewStartPosition, struct FVector& NewEndPosition); // (Final | 0x00000002 | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)
};

