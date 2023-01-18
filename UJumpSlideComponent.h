// Class /Script/DynamicCapsuleCodeRuntime.JumpSlideComponent
// Size: 0xa8
class UJumpSlideComponent : public UFortPawnComponent
{
	unsigned char unreflected_a8[0xa8]; 

	/* Functions */

	// Function /Script/DynamicCapsuleCodeRuntime.JumpSlideComponent.OnMovementModeChange (Underlying native function: OnMovementModeChange 0x742357c)
	void OnMovementModeChange(class ACharacter*& Character, struct TEnumAsByte<EMovementMode>& PrevMovementMode, unsigned char& PreviousCustomMode); // (Final | Native | Private)

	// Function /Script/DynamicCapsuleCodeRuntime.JumpSlideComponent.OnJumpSlideStart (Has no native function)
	void OnJumpSlideStart(); // (Event | Public | BlueprintEvent)

	// Function /Script/DynamicCapsuleCodeRuntime.JumpSlideComponent.OnJumpSlideEnd (Has no native function)
	void OnJumpSlideEnd(); // (Event | Public | BlueprintEvent)
};

