// ScriptStruct /Script/FortniteGame.FortSpecializationSlot
// Size: 0x88
struct FFortSpecializationSlot
{
	struct TWeakObjectPtr<class UFortAbilityKit> GrantedAbilityKit; // 0x0 (0x28)
	struct TWeakObjectPtr<class UFortAbilityKit> RemovedAbilityKit; // 0x28 (0x28)
	struct TArray<struct FHeroSpecializationAttributeRequirement> AttributeRequirements; // 0x50 (0x10)
	struct FGameplayTagContainer RequiredTags; // 0x60 (0x20)
	int MinimumHeroLevel; // 0x80 (0x4)
	unsigned char padding_84[0x4]; // 0x84 (0x4)
};

