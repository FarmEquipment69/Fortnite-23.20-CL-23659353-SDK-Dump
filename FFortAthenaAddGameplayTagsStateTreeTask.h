// ScriptStruct /Script/FortniteAI.FortAthenaAddGameplayTagsStateTreeTask
// Size: 0x30
struct FFortAthenaAddGameplayTagsStateTreeTask : FStateTreeTaskCommonBase
{
	bool bReplicateChange; // 0x20 (0x1)
	unsigned char unreflected_21[0x3]; // 0x21 (0x3) 
	enum EFortAthenaStateTreeTaskFeatureExecutionMode AddExecutionMode; // 0x24 (0x4)
	enum EFortAthenaStateTreeTaskFeatureExecutionMode RemoveExecutionMode; // 0x28 (0x4)
	unsigned char padding_2c[0x4]; // 0x2c (0x4)
};

