// Class /Script/FortniteGame.FortAthenaMutator_GenerateOverlapEventsOverride
// Size: 0x350
class AFortAthenaMutator_GenerateOverlapEventsOverride : public AFortAthenaMutator
{
	unsigned char bGenerateOverlapEventsOverrideValue; // 0x330 (0x1)
	unsigned char unreflected_331[0x3]; // 0x331 (0x3) 
	float Radius; // 0x334 (0x4)
	struct FVector CenterLocation; // 0x338 (0x18)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_GenerateOverlapEventsOverride.SetRadius (Underlying native function: SetRadius 0x84d0dc8)
	void SetRadius(float& NewRadius); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_GenerateOverlapEventsOverride.SetCenterLocation (Underlying native function: SetCenterLocation 0x84d0d40)
	void SetCenterLocation(struct FVector& NewCenterLocation); // (Final | Native | Public | HasDefaults | BlueprintCallable)
};

