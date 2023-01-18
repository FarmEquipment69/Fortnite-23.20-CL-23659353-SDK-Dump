// Class /Script/FortniteGame.FortAnimInputEvent
// Size: 0x30
class UFortAnimInputEvent : public UObject
{
	struct FName EventName; // 0x28 (0x4)
	unsigned char padding_2c[0x4]; // 0x2c (0x4)

	/* Functions */

	// Function /Script/FortniteGame.FortAnimInputEvent.IsNamed (Underlying native function: IsNamed 0x21ba5b8)
	bool IsNamed(struct FName& InEventName); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAnimInputEvent.CreateAnimInputEvent (Underlying native function: CreateAnimInputEvent 0x1806ca0)
	static class UFortAnimInputEvent* CreateAnimInputEvent(struct FName& InEventName); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)
};

