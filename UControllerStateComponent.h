// Class /Script/VGameplayRst.ControllerStateComponent
// Size: 0xd0
class UControllerStateComponent : public UControllerComponent
{
	struct TArray<struct FString> ActiveStates; // 0xa0 (0x10)
	unsigned char padding_b0[0x20]; // 0xb0 (0x20)

	/* Functions */

	// Function /Script/VGameplayRst.ControllerStateComponent.OnRep_ActiveStates (Underlying native function: OnRep_ActiveStates 0x709e004)
	void OnRepActiveStates(); // (Final | Native | Private)
};

