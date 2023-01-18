// Class /Script/Engine.PlatformEventsComponent
// Size: 0xc0
class UPlatformEventsComponent : public UActorComponent
{
	struct FMulticastInlineDelegate PlatformChangedToLaptopModeDelegate; // 0xa0 (0x10)
	struct FMulticastInlineDelegate PlatformChangedToTabletModeDelegate; // 0xb0 (0x10)

	/* Functions */

	// Function /Script/Engine.PlatformEventsComponent.SupportsConvertibleLaptops (Underlying native function: SupportsConvertibleLaptops 0x9cfac84)
	bool SupportsConvertibleLaptops(); // (Final | Native | Public | BlueprintCallable)

	// DelegateFunction /Script/Engine.PlatformEventsComponent.PlatformEventDelegate__DelegateSignature (Has no native function)
	void PlatformEventDelegateDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// Function /Script/Engine.PlatformEventsComponent.IsInTabletMode (Underlying native function: IsInTabletMode 0x9cf7920)
	bool IsInTabletMode(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PlatformEventsComponent.IsInLaptopMode (Underlying native function: IsInLaptopMode 0x9cf78f4)
	bool IsInLaptopMode(); // (Final | Native | Public | BlueprintCallable)
};

