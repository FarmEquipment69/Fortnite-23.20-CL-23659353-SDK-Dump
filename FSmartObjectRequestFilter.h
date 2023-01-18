// ScriptStruct /Script/SmartObjectsModule.SmartObjectRequestFilter
// Size: 0xf0
struct FSmartObjectRequestFilter
{
	class AActor* UserActor; // 0x0 (0x8)
	struct FGameplayTagContainer UserTags; // 0x8 (0x20)
	struct FGameplayTagQuery ActivityRequirements; // 0x28 (0x48)
	class UClass* BehaviorDefinitionClass; // 0x70 (0x8)
	struct TArray<class UClass*> BehaviorDefinitionClasses; // 0x78 (0x10)
	unsigned char padding_88[0x68]; // 0x88 (0x68)
};

