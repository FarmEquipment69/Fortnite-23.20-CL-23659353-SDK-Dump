// ScriptStruct /Script/GameplayAbilities.GameplayTargetDataFilter
// Size: 0x20
struct FGameplayTargetDataFilter
{
	class AActor* SelfActor; // 0x8 (0x8)
	class UClass* RequiredActorClass; // 0x10 (0x8)
	struct TEnumAsByte<ETargetDataFilterSelf> SelfFilter; // 0x18 (0x1)
	bool bReverseFilter; // 0x19 (0x1)
	unsigned char padding_1a[0x6]; // 0x1a (0x6)
};

