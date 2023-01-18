// Class /Script/FortniteGame.FortMobileInteractionComponent
// Size: 0x620
class UFortMobileInteractionComponent : public UStaticMeshComponent
{
	class UMaterialInstanceDynamic* IconMID; // 0x600 (0x8)
	unsigned char padding_608[0x18]; // 0x608 (0x18)

	/* Functions */

	// Function /Script/FortniteGame.FortMobileInteractionComponent.TickLocation (Underlying native function: TickLocation 0x899da18)
	void TickLocation(float& DeltaTime); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortMobileInteractionComponent.StopRadialTimer (Underlying native function: StopRadialTimer 0x899da00)
	void StopRadialTimer(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMobileInteractionComponent.StartRadialTimer (Underlying native function: StartRadialTimer 0x899d97c)
	void StartRadialTimer(float& Duration); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMobileInteractionComponent.SetVisibleStartTime (Underlying native function: SetVisibleStartTime 0x899d968)
	void SetVisibleStartTime(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMobileInteractionComponent.SetUpdateLocationOnTick (Underlying native function: SetUpdateLocationOnTick 0x899d8dc)
	void SetUpdateLocationOnTick(bool& bShouldUpdate); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMobileInteractionComponent.SetRarityColor (Underlying native function: SetRarityColor 0x899d854)
	void SetRarityColor(struct FLinearColor& InColor); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortMobileInteractionComponent.SetRadialStartTime (Underlying native function: SetRadialStartTime 0x899d7d0)
	void SetRadialStartTime(float& StartTime); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortMobileInteractionComponent.SetRadialOpacity (Underlying native function: SetRadialOpacity 0x899d74c)
	void SetRadialOpacity(float& Opacity); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortMobileInteractionComponent.SetRadialDuration (Underlying native function: SetRadialDuration 0x899d6c8)
	void SetRadialDuration(float& Duration); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortMobileInteractionComponent.SetIcon (Underlying native function: SetIcon 0x899d648)
	void SetIcon(enum EMobileInteractionIconTypes& IconType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMobileInteractionComponent.SetExtents (Underlying native function: SetExtents 0x899d5b8)
	void SetExtents(struct FVector& Extents); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortMobileInteractionComponent.SetCameraPush (Underlying native function: SetCameraPush 0x899d534)
	void SetCameraPush(float& Offset); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMobileInteractionComponent.IsAvailable (Underlying native function: IsAvailable 0x899cce0)
	bool IsAvailable(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

