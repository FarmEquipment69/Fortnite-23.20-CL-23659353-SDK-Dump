// ScriptStruct /Script/FortniteAI.FortAthenaWorldConditionInstanceDataStateTreeTask
// Size: 0x40
struct FFortAthenaWorldConditionInstanceDataStateTreeTask : FStateTreeTaskCommonBase
{
	struct FWorldConditionQueryDefinition Conditions; // 0x20 (0x18)
	struct FGameplayTag StateTreeEventTag; // 0x38 (0x4)
	enum EGameplayInteractionTaskTrigger ConditionStartTrigger; // 0x3c (0x1)
	unsigned char padding_3d[0x3]; // 0x3d (0x3)
};

