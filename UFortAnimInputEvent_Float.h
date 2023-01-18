// Class /Script/FortniteGame.FortAnimInputEvent_Float
// Size: 0x38
class UFortAnimInputEvent_Float : public UFortAnimInputEvent
{
	float Value; // 0x30 (0x4)
	unsigned char padding_34[0x4]; // 0x34 (0x4)

	/* Functions */

	// Function /Script/FortniteGame.FortAnimInputEvent_Float.CreateAnimInputEvent_Float (Underlying native function: CreateAnimInputEvent_Float 0x820c908)
	static class UFortAnimInputEvent_Float* CreateAnimInputEventFloat(struct FName& InEventName, float& InValue); // (Final | Native | Static | Public | BlueprintCallable)
};

