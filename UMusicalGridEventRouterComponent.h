// Class /Script/HmxAudio.MusicalGridEventRouterComponent
// Size: 0x128
class UMusicalGridEventRouterComponent : public USchedulerBasedMusicalEventRouterComponentBase
{
	struct FMusicalTimeSpan span; // 0xf0 (0x10)
	enum EMusicalUnit musicalUnits; // 0x100 (0x1)
	unsigned char unreflected_101[0x3]; // 0x101 (0x3) 
	int Subdivision; // 0x104 (0x4)
	int unitCount; // 0x108 (0x4)
	int Measure; // 0x10c (0x4)
	int Beat; // 0x110 (0x4)
	int Tick; // 0x114 (0x4)
	struct FMulticastInlineDelegate listeners; // 0x118 (0x10)

	/* Functions */

	// Function /Script/HmxAudio.MusicalGridEventRouterComponent.OnTriggered (Has no native function)
	void OnTriggered(); // (Event | Public | BlueprintCallable | BlueprintEvent)
};

