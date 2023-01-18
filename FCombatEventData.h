// ScriptStruct /Script/FortniteGame.CombatEventData
// Size: 0x38
struct FCombatEventData
{
	float Heat; // 0x0 (0x4)
	float MaxHeatContribution; // 0x4 (0x4)
	float CoolDownRate; // 0x8 (0x4)
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	struct FString EventName; // 0x10 (0x10)
	struct FLinearColor DebugGraphColor; // 0x20 (0x10)
	struct TEnumAsByte<EFortCombatEventContribution> ContributionType; // 0x30 (0x1)
	unsigned char padding_31[0x7]; // 0x31 (0x7)
};

