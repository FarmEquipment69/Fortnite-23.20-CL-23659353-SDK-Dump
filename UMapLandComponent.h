// Class /Script/FortniteGame.MapLandComponent
// Size: 0x1a0
class UMapLandComponent : public UActorComponent
{
	struct FSlateBrush LandIcon; // 0xa0 (0xc0)
	struct FVector LandIconWorldOffset; // 0x160 (0x18)
	struct FVector MapLocationOverride; // 0x178 (0x18)
	bool bShadowLayer; // 0x190 (0x1)
	unsigned char padding_191[0xf]; // 0x191 (0xf)

	/* Functions */

	// Function /Script/FortniteGame.MapLandComponent.UpdateMinimapDetailsLocation (Underlying native function: UpdateMinimapDetailsLocation 0x868ce90)
	void UpdateMinimapDetailsLocation(struct FVector& InLocation); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)
};

