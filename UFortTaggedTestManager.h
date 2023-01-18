// Class /Script/FortniteGame.FortTaggedTestManager
// Size: 0x90
class UFortTaggedTestManager : public UObject
{
	unsigned char unreflected_28[0x10]; // 0x28 (0x10) 
	bool bIsFinished; // 0x38 (0x1)
	bool bInitialized; // 0x39 (0x1)
	bool bTerminateEarly; // 0x3a (0x1)
	bool bPendingReset; // 0x3b (0x1)
	unsigned char unreflected_3c[0x4]; // 0x3c (0x4) 
	struct TArray<struct FAssetData> AssetsToTest; // 0x40 (0x10)
	struct TArray<class UFortTaggedAssetTest_Base*> TestsToRun; // 0x50 (0x10)
	int TestIterator; // 0x60 (0x4)
	unsigned char unreflected_64[0x4]; // 0x64 (0x4) 
	struct TArray<enum EFortItemType> AssetTypesToTest; // 0x68 (0x10)
	class UClass* TargetTestBaseClass; // 0x78 (0x8)
	struct TArray<struct FString> CommandlineAssets; // 0x80 (0x10)
};

