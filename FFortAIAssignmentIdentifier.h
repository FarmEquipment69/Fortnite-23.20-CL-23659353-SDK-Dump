// ScriptStruct /Script/FortniteAI.FortAIAssignmentIdentifier
// Size: 0x30
struct FFortAIAssignmentIdentifier
{
	enum EAssignmentType AssignmentType; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FGameplayTagContainer AssignmentGameplayTags; // 0x8 (0x20)
	struct TEnumAsByte<EFortTeam> AssignmentTeam; // 0x28 (0x1)
	unsigned char padding_29[0x7]; // 0x29 (0x7)
};

