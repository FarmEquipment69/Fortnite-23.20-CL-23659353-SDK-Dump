// Class /Script/FortniteGame.FortGameActivityProvider
// Size: 0x58
class UFortGameActivityProvider : public UObject
{
	struct TArray<class UFortGameActivity*> Activities; // 0x28 (0x10)
	struct TWeakObjectPtr<class AFortPlayerController> OwningPlayer; // 0x38 (0x8)
	unsigned char padding_40[0x18]; // 0x40 (0x18)
};

