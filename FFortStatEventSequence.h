// ScriptStruct /Script/FortniteGame.FortStatEventSequence
// Size: 0x48
struct FFortStatEventSequence
{
	struct FName StatEventName; // 0x0 (0x4)
	struct TEnumAsByte<EFortEventRepeat> RepeatType; // 0x4 (0x1)
	unsigned char unreflected_5[0x3]; // 0x5 (0x3) 
	struct TArray<struct FFortStatEvent> EventSequence; // 0x8 (0x10)
	class UStat* AssociatedStat; // 0x18 (0x8)
	class AFortPlayerController* FPC; // 0x20 (0x8)
	struct TArray<struct FName> StatsToMonitor; // 0x28 (0x10)
	struct TArray<struct FFortEventConditional> Conditions; // 0x38 (0x10)
};

