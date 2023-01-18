// ScriptStruct /Script/FortniteGame.FortEventConditional
// Size: 0x20
struct FFortEventConditional
{
	struct TEnumAsByte<EFortEventConditionType> ConditionalType; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	struct FName StatToCompare; // 0x4 (0x4)
	enum EStatRecordingPeriod RelevantPeriod; // 0x8 (0x1)
	struct TEnumAsByte<EFortCompare> ComparisonType; // 0x9 (0x1)
	unsigned char unreflected_a[0x2]; // 0xa (0x2) 
	int Value; // 0xc (0x4)
	class UStat* Stat; // 0x10 (0x8)
	class AFortPlayerController* FPC; // 0x18 (0x8)
};

