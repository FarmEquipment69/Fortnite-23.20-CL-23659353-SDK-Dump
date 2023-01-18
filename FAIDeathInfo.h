// ScriptStruct /Script/FortniteGame.AIDeathInfo
// Size: 0x178
struct FAIDeathInfo
{
	struct TWeakObjectPtr<class AActor> FinisherOrDowner; // 0x0 (0x8)
	struct TWeakObjectPtr<class AActor> DeathInstigator; // 0x8 (0x8)
	enum EDeathCause DeathCause; // 0x10 (0x1)
	unsigned char unreflected_11[0x7]; // 0x11 (0x7) 
	struct FVector DeathLocation; // 0x18 (0x18)
	bool bInitialized; // 0x30 (0x1)
	unsigned char unreflected_31[0x7]; // 0x31 (0x7) 
	struct FGameplayTagContainer DeathTags; // 0x38 (0x20)
	struct FGameplayTagContainer FinisherOrDownerTags; // 0x58 (0x20)
	struct FGameplayTagContainer VictimTags; // 0x78 (0x20)
	struct FHitResult LastDamageHitResult; // 0x98 (0xe0)
};

