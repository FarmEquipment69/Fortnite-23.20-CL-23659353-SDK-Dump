// ScriptStruct /Script/LagerRuntime.LivingWorldCalendarEventCondition
// Size: 0x10
struct FLivingWorldCalendarEventCondition
{
	struct FName CalendarEventName; // 0x0 (0x4)
	enum ELivingWorldCalendarEventConditionBehavior Behavior; // 0x4 (0x1)
	bool ShouldEventBeActive; // 0x5 (0x1)
	enum ELivingWorldCalendarEventConditionRatioBehavior RatioBehavior; // 0x6 (0x1)
	unsigned char unreflected_7[0x1]; // 0x7 (0x1) 
	float RatioValue; // 0x8 (0x4)
	float RatioMaxValue; // 0xc (0x4)
};

