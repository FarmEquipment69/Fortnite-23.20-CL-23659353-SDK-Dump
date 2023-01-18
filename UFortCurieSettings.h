// Class /Script/FortniteGame.FortCurieSettings
// Size: 0xb0
class UFortCurieSettings : public UPrimaryDataAsset
{
	struct TWeakObjectPtr<class UClass> CurieManagerClass; // 0x30 (0x28)
	struct TWeakObjectPtr<class UFortCurieFXSettings> CurieFXSettings; // 0x58 (0x28)
	struct FScalableFloat WaterBodyInteractionMagnitude; // 0x80 (0x28)
	int ElementOverlapMaximumTestActorsPerFrame; // 0xa8 (0x4)
	float ElementOverlapMaximumDelayBetweenChecks; // 0xac (0x4)
};

