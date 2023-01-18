// Class /Script/Engine.StreamableRenderAsset
// Size: 0xd0
class UStreamableRenderAsset : public UObject
{
	unsigned char unreflected_28[0x18]; // 0x28 (0x18) 
	double ForceMipLevelsToBeResidentTimestamp; // 0x40 (0x8)
	int NumCinematicMipLevels; // 0x48 (0x4)
	unsigned char unreflected_4c[0x4]; // 0x4c (0x4) 
	struct FPerQualityLevelInt NoRefStreamingLODBias; // 0x50 (0x68)
	int StreamingIndex; // 0xb8 (0x4)
	int CachedCombinedLODBias; // 0xbc (0x4)
	unsigned char NeverStream; // 0xc0 (0x1)
	unsigned char bGlobalForceMipLevelsToBeResident; // 0xc0 (0x1)
	unsigned char bHasStreamingUpdatePending; // 0xc0 (0x1)
	unsigned char bForceMiplevelsToBeResident; // 0xc0 (0x1)
	unsigned char bIgnoreStreamingMipBias; // 0xc0 (0x1)
	unsigned char bUseCinematicMipLevels; // 0xc0 (0x1)
	unsigned char padding_c1[0xf]; // 0xc1 (0xf)

	/* Functions */

	// Function /Script/Engine.StreamableRenderAsset.SetForceMipLevelsToBeResident (Underlying native function: SetForceMipLevelsToBeResident 0x9f8dcf8)
	void SetForceMipLevelsToBeResident(float& Seconds, int& CinematicLODGroupMask); // (Final | 0x00000002 | Native | Public | BlueprintCallable)
};

