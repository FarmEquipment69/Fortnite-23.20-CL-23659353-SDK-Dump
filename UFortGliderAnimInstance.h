// Class /Script/FortniteGame.FortGliderAnimInstance
// Size: 0x4d0
class UFortGliderAnimInstance : public UFortBaseAnimInstance
{
	float DeltaTime; // 0x430 (0x4)
	unsigned char unreflected_434[0x4]; // 0x434 (0x4) 
	class AFortPlayerParachute* OwnerGlider; // 0x438 (0x8)
	class AFortPlayerPawn* OwnerFortPawn; // 0x440 (0x8)
	struct FFortAnimInput_Skydiving SkydivingState; // 0x448 (0x78)
	bool bIsAccelerating2D; // 0x4c0 (0x1)
	bool bForceOpen; // 0x4c1 (0x1)
	bool bForceOpenSkipInto; // 0x4c2 (0x1)
	unsigned char unreflected_4c3[0x1]; // 0x4c3 (0x1) 
	float GliderBaseBSPlayRate; // 0x4c4 (0x4)
	float GliderIntoBSPlayRate; // 0x4c8 (0x4)
	unsigned char padding_4cc[0x4]; // 0x4cc (0x4)

	/* Functions */

	// Function /Script/FortniteGame.FortGliderAnimInstance.SetGliderFullyDeployed (Underlying native function: SetGliderFullyDeployed 0x82467f8)
	void SetGliderFullyDeployed(bool& bIsFullyDeployed); // (Final | Native | Public | BlueprintCallable)
};

