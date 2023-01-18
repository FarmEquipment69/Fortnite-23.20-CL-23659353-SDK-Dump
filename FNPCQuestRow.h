// ScriptStruct /Script/FortniteGame.NPCQuestRow
// Size: 0x40
struct FNPCQuestRow : FTableRowBase
{
	struct FGameplayTag NPC; // 0x8 (0x4)
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	struct TWeakObjectPtr<class UFortQuestItemDefinition_Athena> Quest; // 0x10 (0x28)
	float Weight; // 0x38 (0x4)
	unsigned char padding_3c[0x4]; // 0x3c (0x4)
};

