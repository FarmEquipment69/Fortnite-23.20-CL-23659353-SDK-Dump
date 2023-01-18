// Class /Script/FortniteGame.FortFootstepSurfaceData
// Size: 0x190
class UFortFootstepSurfaceData : public UDataAsset
{
	struct FFortFootstepSurfaceAudioData Surface1P; // 0x30 (0xa8)
	struct FFortFootstepSurfaceAudioData Surface3P; // 0xd8 (0xa8)
	float VerticalPitchMaxBelow; // 0x180 (0x4)
	float VerticalPitchMaxAbove; // 0x184 (0x4)
	float VerticalPitchTileRange; // 0x188 (0x4)
	unsigned char padding_18c[0x4]; // 0x18c (0x4)

	/* Functions */

	// Function /Script/FortniteGame.FortFootstepSurfaceData.GetSurfaceInfo (Underlying native function: GetSurfaceInfo 0x8e5f080)
	void GetSurfaceInfo(struct FFortFootstepSurfaceInfo& OutInfo, bool& bUse1PFootsteps); // (Final | Native | Public | HasOutParms | Const)
};

