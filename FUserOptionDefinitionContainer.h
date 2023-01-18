// ScriptStruct /Script/FortniteGame.UserOptionDefinitionContainer
// Size: 0xa8
struct FUserOptionDefinitionContainer
{
	struct FText DisplayName; // 0x0 (0x18)
	struct FText Description; // 0x18 (0x18)
	struct FText InteractionText; // 0x30 (0x18)
	struct FCurveTableRowHandle InteractionSpeed; // 0x48 (0x10)
	bool bRecurseBaseClassesForUserOptions; // 0x58 (0x1)
	unsigned char unreflected_59[0x7]; // 0x59 (0x7) 
	struct TArray<struct FUserOptionDefinition> Definitions; // 0x60 (0x10)
	unsigned char padding_70[0x38]; // 0x70 (0x38)
};

