// Class /Script/VerseAssets.VerseAssetPtr
// Size: 0x90
class UVerseAssetPtr : public UVerseAsset
{
	struct TWeakObjectPtr<class UObject> AssetForEditor; // 0x30 (0x28)
	struct FName AssetPathName; // 0x58 (0x4)
	unsigned char unreflected_5c[0x4]; // 0x5c (0x4) 
	class UObject* Object; // 0x60 (0x8)
	unsigned char padding_68[0x28]; // 0x68 (0x28)

	/* Functions */

	// Function /Script/VerseAssets.VerseAssetPtr.OnRep_AssetPathName (Underlying native function: OnRep_AssetPathName 0x6d33d40)
	void OnRepAssetPathName(); // (Final | Native | Protected)
};

