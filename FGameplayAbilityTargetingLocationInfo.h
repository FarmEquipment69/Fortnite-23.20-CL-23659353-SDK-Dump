// ScriptStruct /Script/GameplayAbilities.GameplayAbilityTargetingLocationInfo
// Size: 0xa0
struct FGameplayAbilityTargetingLocationInfo
{
	struct TEnumAsByte<EGameplayAbilityTargetingLocationType> LocationType; // 0x10 (0x1)
	unsigned char unreflected_11[0xf]; // 0x11 (0xf) 
	struct FTransform LiteralTransform; // 0x20 (0x60)
	class AActor* SourceActor; // 0x80 (0x8)
	class UMeshComponent* SourceComponent; // 0x88 (0x8)
	class UGameplayAbility* SourceAbility; // 0x90 (0x8)
	struct FName SourceSocketName; // 0x98 (0x4)
	unsigned char padding_9c[0x4]; // 0x9c (0x4)
};

