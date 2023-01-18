// ScriptStruct /Script/FortniteGame.VersionedCostOverride
// Size: 0x30
struct FVersionedCostOverride
{
	struct TWeakObjectPtr<class UClass> ClassPtr; // 0x0 (0x28)
	struct TEnumAsByte<ELevelSaveRecordVersion> IntroducedVersion; // 0x28 (0x1)
	struct TEnumAsByte<ELevelSaveRecordVersion> DeprecatedVersion; // 0x29 (0x1)
	unsigned char unreflected_2a[0x2]; // 0x2a (0x2) 
	int OverrideCost; // 0x2c (0x4)
};

