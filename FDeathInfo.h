// ScriptStruct /Script/FortniteGame.DeathInfo
// Size: 0xa0
struct FDeathInfo
{
	struct TWeakObjectPtr<class AActor> FinisherOrDowner; // 0x0 (0x8)
	struct TWeakObjectPtr<class AActor> Downer; // 0x8 (0x8)
	bool bDBNO; // 0x10 (0x1)
	enum EDeathCause DeathCause; // 0x11 (0x1)
	unsigned char DeathClassSlot; // 0x12 (0x1)
	unsigned char unreflected_13[0x1]; // 0x13 (0x1) 
	float Distance; // 0x14 (0x4)
	struct FVector DeathLocation; // 0x18 (0x18)
	bool bInitialized; // 0x30 (0x1)
	unsigned char unreflected_31[0x7]; // 0x31 (0x7) 
	struct FGameplayTagContainer DeathTags; // 0x38 (0x20)
	struct FGameplayTagContainer FinisherOrDownerTags; // 0x58 (0x20)
	struct FGameplayTagContainer VictimTags; // 0x78 (0x20)
	unsigned char padding_98[0x8]; // 0x98 (0x8)
};

