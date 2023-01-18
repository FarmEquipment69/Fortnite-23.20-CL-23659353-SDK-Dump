// Class /Script/FortniteGame.FortCurieFireNativeFXHandler
// Size: 0x188
class UFortCurieFireNativeFXHandler : public UFortCurieNativeFXHandler
{
	unsigned char unreflected_40[0x8]; // 0x40 (0x8) 
	float WorldSystemFireParticleSignificanceRequirement; // 0x48 (0x4)
	float WorldSystemIgnitionParticleSignificanceRequirement; // 0x4c (0x4)
	int NumActiveNativeFireStates; // 0x50 (0x4)
	int PrevNumActiveFireStates; // 0x54 (0x4)
	struct TArray<class UFortCurieWorldNiagaraComponent*> WorldFireNiagaraSystems; // 0x58 (0x10)
	struct TArray<struct FFortCurieFireParticleActorData> CachedFireParticleActorData; // 0x68 (0x10)
	struct TArray<struct FFortCurieFireParticleGrassData> CachedFireParticleGrassData; // 0x78 (0x10)
	unsigned char unreflected_88[0x60]; // 0x88 (0x60) 
	struct TSet<struct FFortSpatialCellIndex> CachedBurningGrassGridCells; // 0xe8 (0x50)
	struct FRandomStream* RandomStream; // 0x138 (0x8)
	struct FBox GrassFireBounds; // 0x140 (0x38)
	float LandscapeCharInterpSpeed; // 0x178 (0x4)
	unsigned char unreflected_17c[0x4]; // 0x17c (0x4) 
	double PreviousLandscapeCharTickTime; // 0x180 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortCurieFireNativeFXHandler.OnUserSettingsEffectQualityChanged (Underlying native function: OnUserSettingsEffectQualityChanged 0x87f5398)
	void OnUserSettingsEffectQualityChanged(); // (Final | Native | Private)
};

