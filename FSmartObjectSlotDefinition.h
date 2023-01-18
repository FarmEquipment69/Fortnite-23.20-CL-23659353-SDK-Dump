// ScriptStruct /Script/SmartObjectsModule.SmartObjectSlotDefinition
// Size: 0xf8
struct FSmartObjectSlotDefinition
{
	bool bEnabled; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FGameplayTagContainer RuntimeTags; // 0x8 (0x20)
	struct FGameplayTagQuery UserTagFilter; // 0x28 (0x48)
	struct FGameplayTagContainer ActivityTags; // 0x70 (0x20)
	struct FWorldConditionQueryDefinition SelectionPreconditions; // 0x90 (0x18)
	struct FVector Offset; // 0xa8 (0x18)
	struct FRotator Rotation; // 0xc0 (0x18)
	struct TArray<struct FInstancedStruct> Data; // 0xd8 (0x10)
	struct TArray<class USmartObjectBehaviorDefinition*> BehaviorDefinitions; // 0xe8 (0x10)
};

