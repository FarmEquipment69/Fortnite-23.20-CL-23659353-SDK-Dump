// ScriptStruct /Script/FortniteGame.FortStatEvent
// Size: 0x48
struct FFortStatEvent
{
	struct FName StatEventName; // 0x0 (0x4)
	struct TEnumAsByte<EFortEventRepeat> RepeatType; // 0x4 (0x1)
	unsigned char unreflected_5[0x3]; // 0x5 (0x3) 
	struct TArray<struct FName> StatsToMonitor; // 0x8 (0x10)
	struct TArray<struct FFortEventConditional> Conditions; // 0x18 (0x10)
	class UClass* AnnouncementToDisplay; // 0x28 (0x8)
	class UObject* NotificationParameter; // 0x30 (0x8)
	class UStat* AssociatedStat; // 0x38 (0x8)
	class AFortPlayerController* FPC; // 0x40 (0x8)
};

