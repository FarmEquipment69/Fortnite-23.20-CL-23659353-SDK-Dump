// ScriptStruct /Script/FortniteGame.FortGameplayEffectModifierDescription
// Size: 0x58
struct FFortGameplayEffectModifierDescription
{
	struct FGameplayAttribute ModAttribute; // 0x0 (0x38)
	struct FText ModDescription; // 0x38 (0x18)
	bool bIsBuff; // 0x50 (0x1)
	struct TEnumAsByte<EFortAttributeDisplay> MagnitudeFormat; // 0x51 (0x1)
	enum EFortStatDisplayType DisplayType; // 0x52 (0x1)
	unsigned char unreflected_53[0x1]; // 0x53 (0x1) 
	float Magnitude; // 0x54 (0x4)
};

