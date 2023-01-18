// ScriptStruct /Script/FortniteGame.VersionedMetricWrapper
// Size: 0x30
struct FVersionedMetricWrapper
{
	struct TEnumAsByte<ELevelSaveRecordVersion> IntroducedVersion; // 0x0 (0x1)
	struct TEnumAsByte<ELevelSaveRecordVersion> DeprecatedVersion; // 0x1 (0x1)
	unsigned char unreflected_2[0x6]; // 0x2 (0x6) 
	struct TWeakObjectPtr<class UClass> Class; // 0x8 (0x28)
};

