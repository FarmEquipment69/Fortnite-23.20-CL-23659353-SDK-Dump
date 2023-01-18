// Class /Script/HmxAudio.SchedulerBasedMusicalEventRouterComponentBase
// Size: 0xf0
class USchedulerBasedMusicalEventRouterComponentBase : public UMusicalEventRouterComponentBase
{
	enum EHoldOffUnits holdOffUnits; // 0xc8 (0x1)
	unsigned char unreflected_c9[0x3]; // 0xc9 (0x3) 
	float holdOffCount; // 0xcc (0x4)
	unsigned char padding_d0[0x20]; // 0xd0 (0x20)

	/* Functions */

	// Function /Script/HmxAudio.SchedulerBasedMusicalEventRouterComponentBase.SecsUntilNextFire (Underlying native function: SecsUntilNextFire 0x5451180)
	float SecsUntilNextFire(); // (Final | Native | Public | BlueprintCallable)
};

