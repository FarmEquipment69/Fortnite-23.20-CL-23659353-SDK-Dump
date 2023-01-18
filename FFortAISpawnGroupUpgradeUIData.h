// ScriptStruct /Script/FortniteAI.FortAISpawnGroupUpgradeUIData
// Size: 0x70
struct FFortAISpawnGroupUpgradeUIData
{
	bool bAlwaysDisplayHealthBar; // 0x0 (0x1)
	bool bOverrideHealthBarColor; // 0x1 (0x1)
	unsigned char unreflected_2[0x6]; // 0x2 (0x6) 
	struct TWeakObjectPtr<class UTexture2D> UpgradeIconImage; // 0x8 (0x28)
	struct FSlateColor UpgradeIconTintColor; // 0x30 (0x14)
	struct FLinearColor HealthBarColorOverride; // 0x44 (0x10)
	unsigned char unreflected_54[0x4]; // 0x54 (0x4) 
	struct FText UpgradeName; // 0x58 (0x18)
};

