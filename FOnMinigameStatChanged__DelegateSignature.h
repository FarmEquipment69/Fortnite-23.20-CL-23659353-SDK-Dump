// DelegateFunction /Script/FortniteGame.OnMinigameStatChanged__DelegateSignature
// Size: 0x80
struct FOnMinigameStatChanged__DelegateSignature
{
	enum EFortQuestObjectiveStatEvent Type; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	class UObject* TargetObject; // 0x8 (0x8)
	class AFortPlayerController* PlayerController; // 0x10 (0x8)
	struct FGameplayTagContainer TargetTags; // 0x18 (0x20)
	struct FGameplayTagContainer SourceTags; // 0x38 (0x20)
	struct FGameplayTagContainer ContextTags; // 0x58 (0x20)
	int Count; // 0x78 (0x4)
	unsigned char padding_7c[0x4]; // 0x7c (0x4)
};

