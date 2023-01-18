// Class /Script/SidewaysCodeRuntime.SidewaysStateComponent
// Size: 0xc8
class USidewaysStateComponent : public UGameFrameworkComponent
{
	enum ESidewaysState SidewaysState; // 0xa0 (0x1)
	unsigned char unreflected_a1[0x7]; // 0xa1 (0x7) 
	class ASidewaysPlayspace* SidewaysPlayspace; // 0xa8 (0x8)
	struct FMulticastInlineDelegate OnSidewaysStateChangedDelegate; // 0xb0 (0x10)
	unsigned char padding_c0[0x8]; // 0xc0 (0x8)

	/* Functions */

	// Function /Script/SidewaysCodeRuntime.SidewaysStateComponent.SetSidewaysState (Underlying native function: SetSidewaysState 0x72ab9f0)
	void SetSidewaysState(enum ESidewaysState& NewState, class ASidewaysPlayspace*& NewSidewaysPlayspace); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/SidewaysCodeRuntime.SidewaysStateComponent.OnRep_SidewaysState (Underlying native function: OnRep_SidewaysState 0x72ab8bc)
	void OnRepSidewaysState(enum ESidewaysState& LastSidewaysState); // (Final | Native | Protected)

	// Function /Script/SidewaysCodeRuntime.SidewaysStateComponent.OnRep_SidewaysPlayspace (Underlying native function: OnRep_SidewaysPlayspace 0x709e37c)
	void OnRepSidewaysPlayspace(class ASidewaysPlayspace*& NewSidewaysPlayspace); // (Final | Native | Protected)

	// Function /Script/SidewaysCodeRuntime.SidewaysStateComponent.HandleSidewaysStateChanged (Has no native function)
	void HandleSidewaysStateChanged(class ASidewaysPlayspace*& NewSidewaysPlayspace, enum ESidewaysState& OldState, enum ESidewaysState& NewState); // (Event | Protected | BlueprintEvent)

	// Function /Script/SidewaysCodeRuntime.SidewaysStateComponent.GetSidewaysState (Underlying native function: GetSidewaysState 0x72ab810)
	enum ESidewaysState GetSidewaysState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

