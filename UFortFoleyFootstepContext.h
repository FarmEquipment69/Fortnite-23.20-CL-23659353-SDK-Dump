// Class /Script/FortniteGame.FortFoleyFootstepContext
// Size: 0x80
class UFortFoleyFootstepContext : public USoundLibraryContext
{
	struct TEnumAsByte<EFortFootstepAudioType> StepType; // 0x58 (0x1)
	struct TEnumAsByte<EFortFootstepSurfaceType> SurfaceType; // 0x59 (0x1)
	struct TEnumAsByte<EFortFootstepPosition> RelativePosition; // 0x5a (0x1)
	bool bIs1P; // 0x5b (0x1)
	bool bIsThreat; // 0x5c (0x1)
	unsigned char padding_5d[0x23]; // 0x5d (0x23)
};

