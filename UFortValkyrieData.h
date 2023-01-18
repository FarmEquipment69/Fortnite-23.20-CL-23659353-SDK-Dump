// Class /Script/FortniteGame.FortValkyrieData
// Size: 0x60
class UFortValkyrieData : public UPrimaryDataAsset
{
	struct TArray<struct TWeakObjectPtr<class UObject>> Assets; // 0x30 (0x10)
	struct TArray<struct TWeakObjectPtr<class UObject>> AutoAssets; // 0x40 (0x10)
	struct TArray<struct TWeakObjectPtr<class UObject>> AutoGrayboxes; // 0x50 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortValkyrieData.Repopulate (Underlying native function: Repopulate 0x26daa0c)
	void Repopulate(); // (Final | Native | Public)
};

