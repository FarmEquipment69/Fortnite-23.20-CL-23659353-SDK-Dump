// Class /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTarget
// Size: 0x350
class ACreativeDataChannelTarget : public AElectraDataChannelTarget
{
	unsigned char unreflected_300[0x8]; // 0x300 (0x8) 
	int8_t VersionByte; // 0x308 (0x1)
	unsigned char unreflected_309[0x7]; // 0x309 (0x7) 
	struct FCreativeDataChannelEvents Events; // 0x310 (0x10)
	struct FMulticastInlineDelegate OnEventsRep; // 0x320 (0x10)
	struct FCreativeDataChannelEvents EventsCache; // 0x330 (0x10)
	unsigned char padding_340[0x10]; // 0x340 (0x10)

	/* Functions */

	// Function /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTarget.TestCreativeDataChannelTarget (Underlying native function: TestCreativeDataChannelTarget 0x7366350)
	void TestCreativeDataChannelTarget(struct FCreativeDataChannelEvents& TestEvents); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTarget.OnRep_Events (Underlying native function: OnRep_Events 0x26daa0c)
	void OnRepEvents(); // (Final | Native | Public)

	// Function /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTarget.FireEvent (Has no native function)
	void FireEvent(struct FName& EventName); // (Event | Public | BlueprintEvent)
};

