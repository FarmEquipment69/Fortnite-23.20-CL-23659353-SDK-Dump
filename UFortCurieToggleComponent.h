// Class /Script/FortniteGame.FortCurieToggleComponent
// Size: 0xe0
class UFortCurieToggleComponent : public UActorComponent
{
	struct FGameplayTagContainer ActivationElements; // 0xa0 (0x20)
	enum EFortCurieToggleComponentActivationBehavior ActivationBehavior; // 0xc0 (0x1)
	enum EFortCurieToggleComponentDeactivationBehavior DeactivationBehavior; // 0xc1 (0x1)
	unsigned char unreflected_c2[0x2]; // 0xc2 (0x2) 
	float DeactivationTime; // 0xc4 (0x4)
	struct FGameplayTag ToggleGroup; // 0xc8 (0x4)
	unsigned char unreflected_cc[0x4]; // 0xcc (0x4) 
	struct FTimerHandle* TimedDeactivationHandle; // 0xd0 (0x8)
	unsigned char padding_d8[0x8]; // 0xd8 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortCurieToggleComponent.OnInactive (Underlying native function: OnInactive 0x206352c)
	void OnInactive(); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortCurieToggleComponent.OnElementDetached (Underlying native function: OnElementDetached 0x87f5144)
	void OnElementDetached(class UObject*& InOwner, struct FCurieContainerHandle& ContainerHandle, struct FGameplayTag& ElementIdentifier); // (Native | Protected)

	// Function /Script/FortniteGame.FortCurieToggleComponent.OnElementAttached (Underlying native function: OnElementAttached 0x87f5048)
	void OnElementAttached(class UObject*& InOwner, struct FCurieContainerHandle& ContainerHandle, struct FGameplayTag& ElementIdentifier); // (Native | Protected)

	// Function /Script/FortniteGame.FortCurieToggleComponent.OnElementApplied (Underlying native function: OnElementApplied 0x87f4f4c)
	void OnElementApplied(class UObject*& InOwner, struct FCurieContainerHandle& ContainerHandle, struct FGameplayTag& ElementIdentifier); // (Native | Protected)

	// Function /Script/FortniteGame.FortCurieToggleComponent.OnActive (Underlying native function: OnActive 0x25f7420)
	void OnActive(); // (Native | Event | Public | BlueprintEvent)
};

