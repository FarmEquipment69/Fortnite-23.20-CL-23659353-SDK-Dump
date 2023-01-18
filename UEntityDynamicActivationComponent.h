// Class /Script/EntityActor.EntityDynamicActivationComponent
// Size: 0xb8
class UEntityDynamicActivationComponent : public UEntityEnableableComponent
{
	unsigned char unreflected_80[0x8]; // 0x80 (0x8) 
	float TransitionTargetTime; // 0x88 (0x4)
	bool bTargetState; // 0x8c (0x1)
	unsigned char unreflected_8d[0x3]; // 0x8d (0x3) 
	struct TArray<class UEntityComponent*> LinkedComponents; // 0x90 (0x10)
	unsigned char padding_a0[0x18]; // 0xa0 (0x18)

	/* Functions */

	// Function /Script/EntityActor.EntityDynamicActivationComponent.OnRep_TransitionTarget (Underlying native function: OnRep_TransitionTarget 0x6a5b508)
	void OnRepTransitionTarget(); // (Final | Native | Private)

	// Function /Script/EntityActor.EntityDynamicActivationComponent.OnEnabledChanged (Underlying native function: OnEnabledChanged 0x6a5aedc)
	void OnEnabledChanged(bool& bIsEnabled); // (Final | Native | Public)
};

