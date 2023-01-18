// Class /Script/FortniteGame.FortWeakPointComponent
// Size: 0x300
class UFortWeakPointComponent : public USceneComponent
{
	unsigned char unreflected_2a0[0x8]; // 0x2a0 (0x8) 
	struct FMulticastInlineDelegate OnWeakpointHit; // 0x2a8 (0x10)
	struct FDelegate ShouldKillWeakSpotDynamic; // 0x2b8 (0xc)
	unsigned char unreflected_2c4[0x1c]; // 0x2c4 (0x1c) 
	struct TEnumAsByte<EPhysicalSurface> PrimarySurfaceType; // 0x2e0 (0x1)
	unsigned char unreflected_2e1[0xb]; // 0x2e1 (0xb) 
	bool bUseComplexForWeakSpots; // 0x2ec (0x1)
	bool bWeakPointsEnabled; // 0x2ed (0x1)
	unsigned char padding_2ee[0x12]; // 0x2ee (0x12)

	/* Functions */

	// Function /Script/FortniteGame.FortWeakPointComponent.SetWeakPointsEnabled (Underlying native function: SetWeakPointsEnabled 0x871bc34)
	void SetWeakPointsEnabled(bool& bEnabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeakPointComponent.NetMulticast_HandleOwnerDamaged (Underlying native function: NetMulticast_HandleOwnerDamaged 0x871ad7c)
	void NetMulticastHandleOwnerDamaged(struct FGameplayTag& MatchingTag, struct FGameplayEventData& Payload); // (Net | NetReliable | Native | Event | NetMulticast | Public)
};

