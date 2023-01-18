// Class /Script/FortniteGame.BaseStatManager
// Size: 0xa0
class UBaseStatManager : public UObject
{
	struct TArray<class UStat*> Stats; // 0x28 (0x10)
	struct FString StatPrefix; // 0x38 (0x10)
	struct TWeakObjectPtr<class AController> Controller; // 0x48 (0x8)
	unsigned char padding_50[0x50]; // 0x50 (0x50)
};

