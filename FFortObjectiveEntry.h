// ScriptStruct /Script/FortniteGame.FortObjectiveEntry
// Size: 0x58
struct FFortObjectiveEntry
{
	struct TWeakObjectPtr<class UClass> ObjectiveRef; // 0x0 (0x28)
	class UFortBadgeItemDefinition* ObjectiveRewardBadge; // 0x28 (0x8)
	struct TEnumAsByte<EFortObjectiveRequirement> MissionRequirement; // 0x30 (0x1)
	unsigned char unreflected_31[0x7]; // 0x31 (0x7) 
	struct FGameplayTagContainer ObjectiveHandle; // 0x38 (0x20)
};

