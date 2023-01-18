// Class /Script/Engine.ApplicationLifecycleComponent
// Size: 0x130
class UApplicationLifecycleComponent : public UActorComponent
{
	struct FMulticastInlineDelegate ApplicationWillDeactivateDelegate; // 0xa0 (0x10)
	struct FMulticastInlineDelegate ApplicationHasReactivatedDelegate; // 0xb0 (0x10)
	struct FMulticastInlineDelegate ApplicationWillEnterBackgroundDelegate; // 0xc0 (0x10)
	struct FMulticastInlineDelegate ApplicationHasEnteredForegroundDelegate; // 0xd0 (0x10)
	struct FMulticastInlineDelegate ApplicationWillTerminateDelegate; // 0xe0 (0x10)
	struct FMulticastInlineDelegate ApplicationShouldUnloadResourcesDelegate; // 0xf0 (0x10)
	struct FMulticastInlineDelegate ApplicationReceivedStartupArgumentsDelegate; // 0x100 (0x10)
	struct FMulticastInlineDelegate OnTemperatureChangeDelegate; // 0x110 (0x10)
	struct FMulticastInlineDelegate OnLowPowerModeDelegate; // 0x120 (0x10)
};

