// Class /Script/FortniteUI.FortFlagObject
// Size: 0x80
class UFortFlagObject : public UObject
{
	struct FString RegionId; // 0x28 (0x10)
	struct FText DisplayName; // 0x38 (0x18)
	struct TWeakObjectPtr<class UTexture2D> FlagTexture; // 0x50 (0x28)
	bool bSelected; // 0x78 (0x1)
	unsigned char padding_79[0x7]; // 0x79 (0x7)
};

