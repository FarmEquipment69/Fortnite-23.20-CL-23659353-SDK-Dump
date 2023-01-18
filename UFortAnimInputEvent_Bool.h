// Class /Script/FortniteGame.FortAnimInputEvent_Bool
// Size: 0x38
class UFortAnimInputEvent_Bool : public UFortAnimInputEvent
{
	bool bValue; // 0x30 (0x1)
	unsigned char padding_31[0x7]; // 0x31 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.FortAnimInputEvent_Bool.CreateAnimInputEvent_Bool (Underlying native function: CreateAnimInputEvent_Bool 0x29a9b04)
	static class UFortAnimInputEvent_Bool* CreateAnimInputEventBool(struct FName& InEventName, bool& bInValue); // (Final | Native | Static | Public | BlueprintCallable)
};

