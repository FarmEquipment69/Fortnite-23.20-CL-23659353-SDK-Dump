// Class /Script/FortniteGame.FortActorLabelOverrideInterface
// Size: 0x28
class IFortActorLabelOverrideInterface : public IInterface
{

	/* Functions */

	// Function /Script/FortniteGame.FortActorLabelOverrideInterface.SetLabelOverride (Underlying native function: SetLabelOverride 0x80947d4)
	bool SetLabelOverride(class APlayerController*& PlayerController, struct FString& NewLabelOverride); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortActorLabelOverrideInterface.ResetLabelOverride (Underlying native function: ResetLabelOverride 0x8094740)
	bool ResetLabelOverride(class APlayerController*& PlayerController); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortActorLabelOverrideInterface.GetLabelOverride (Underlying native function: GetLabelOverride 0x80946cc)
	struct FString GetLabelOverride(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortActorLabelOverrideInterface.GetDisplayLabel (Underlying native function: GetDisplayLabel 0x8094650)
	struct FText GetDisplayLabel(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortActorLabelOverrideInterface.GetBaseLabel (Underlying native function: GetBaseLabel 0x80945d4)
	struct FText GetBaseLabel(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortActorLabelOverrideInterface.CanOverrideLabel (Underlying native function: CanOverrideLabel 0x80945b0)
	bool CanOverrideLabel(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)
};

