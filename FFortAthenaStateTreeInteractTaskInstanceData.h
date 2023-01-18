// ScriptStruct /Script/FortniteAI.FortAthenaStateTreeInteractTaskInstanceData
// Size: 0x20
struct FFortAthenaStateTreeInteractTaskInstanceData
{
	struct TEnumAsByte<TInteractionType> InteractType; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	class AActor* Actor; // 0x8 (0x8)
	class AActor* InteractTargetActor; // 0x10 (0x8)
	float InteractDuration; // 0x18 (0x4)
	float Timer; // 0x1c (0x4)
};

