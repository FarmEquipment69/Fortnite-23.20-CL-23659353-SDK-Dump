// Class /Script/UMG.Viewport
// Size: 0x1b0
class UViewport : public UContentWidget
{
	struct FLinearColor BackgroundColor; // 0x160 (0x10)
	unsigned char padding_170[0x40]; // 0x170 (0x40)

	/* Functions */

	// Function /Script/UMG.Viewport.Spawn (Underlying native function: Spawn 0x9b12dc4)
	class AActor* Spawn(class UClass*& ActorClass); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.Viewport.SetViewRotation (Underlying native function: SetViewRotation 0x9b12940)
	void SetViewRotation(struct FRotator& Rotation); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/UMG.Viewport.SetViewLocation (Underlying native function: SetViewLocation 0x9b12898)
	void SetViewLocation(struct FVector& Location); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/UMG.Viewport.GetViewRotation (Underlying native function: GetViewRotation 0x9b0b34c)
	struct FRotator GetViewRotation(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.Viewport.GetViewportWorld (Underlying native function: GetViewportWorld 0x9b0b39c)
	class UWorld* GetViewportWorld(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.Viewport.GetViewLocation (Underlying native function: GetViewLocation 0x9b0b2c4)
	struct FVector GetViewLocation(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)
};

