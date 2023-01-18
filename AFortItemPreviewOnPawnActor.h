// Class /Script/FortniteGame.FortItemPreviewOnPawnActor
// Size: 0x670
class AFortItemPreviewOnPawnActor : public AFortItemPreviewMultiAngleActor
{
	unsigned char unreflected_4a0[0x8]; // 0x4a0 (0x8) 
	class UCameraComponent* ZoomedInBodyCameraComponent; // 0x4a8 (0x8)
	class UCameraComponent* ZoomedOutTallBodyCameraComponent; // 0x4b0 (0x8)
	class UCameraComponent* ZoomedInTallBodyCameraComponent; // 0x4b8 (0x8)
	class UCameraComponent* ZoomedOutBackpackCameraComponent; // 0x4c0 (0x8)
	class UCameraComponent* ZoomedInBackpackCameraComponent; // 0x4c8 (0x8)
	class UCameraComponent* ZoomedOutSkydiveCameraComponent; // 0x4d0 (0x8)
	class UCameraComponent* ZoomedInSkydiveCameraComponent; // 0x4d8 (0x8)
	class UCameraComponent* ZoomedOutEmoteCameraComponent; // 0x4e0 (0x8)
	class UCameraComponent* ZoomedInEmoteCameraComponent; // 0x4e8 (0x8)
	class UCameraComponent* ZoomedOutEmoteHighCameraComponent; // 0x4f0 (0x8)
	class UCameraComponent* ZoomedInEmoteHighCameraComponent; // 0x4f8 (0x8)
	class UCameraComponent* ZoomedOutEmoticonCameraComponent; // 0x500 (0x8)
	class UCameraComponent* ZoomedInEmoticonCameraComponent; // 0x508 (0x8)
	class UCameraComponent* ZoomedOutPickaxeCameraComponent; // 0x510 (0x8)
	class UCameraComponent* ZoomedInPickaxeCameraComponent; // 0x518 (0x8)
	class UCameraComponent* ZoomedOutDualPickaxeCameraComponent; // 0x520 (0x8)
	class UCameraComponent* ZoomedInDualPickaxeCameraComponent; // 0x528 (0x8)
	class UCameraComponent* ZoomedOutDoubleWristPickaxeCameraComponent; // 0x530 (0x8)
	class UCameraComponent* ZoomedInDoubleWristPickaxeCameraComponent; // 0x538 (0x8)
	class UCameraComponent* ZoomedOutPersonalGliderCameraComponent; // 0x540 (0x8)
	class UCameraComponent* ZoomedInPersonalGliderCameraComponent; // 0x548 (0x8)
	class UCameraComponent* ZoomedOutCharacterCustomizerCameraComponent; // 0x550 (0x8)
	class UCameraComponent* ZoomedInCharacterCustomizerCameraComponent; // 0x558 (0x8)
	class UChildActorComponent* HeroPawnComponent; // 0x560 (0x8)
	class AFortWeapon* EquippedWeapon; // 0x568 (0x8)
	class AFortPlayerParachute* EquippedParachute; // 0x570 (0x8)
	float ContrailGlideVerticalVelocity; // 0x578 (0x4)
	float ContrailDiveVerticalVelocity; // 0x57c (0x4)
	float EmotePlayDelay; // 0x580 (0x4)
	float EmoteFXDuration; // 0x584 (0x4)
	struct FGameplayTagContainer PickaxeHitTags; // 0x588 (0x20)
	unsigned char padding_5a8[0xc8]; // 0x5a8 (0xc8)

	/* Functions */

	// Function /Script/FortniteGame.FortItemPreviewOnPawnActor.OnMontageStopped (Underlying native function: OnMontageStopped 0x8a08014)
	void OnMontageStopped(class UAnimMontage*& Montage, bool& bInterrupted); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortItemPreviewOnPawnActor.HandlePawnCustomizationComplete (Underlying native function: HandlePawnCustomizationComplete 0x8a07d08)
	void HandlePawnCustomizationComplete(class AFortPlayerPawn*& Pawn); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortItemPreviewOnPawnActor.HandleContrailsActivated (Underlying native function: HandleContrailsActivated 0x8a07bfc)
	void HandleContrailsActivated(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortItemPreviewOnPawnActor.GetPawnLocation (Underlying native function: GetPawnLocation 0x8a06e50)
	struct FVector GetPawnLocation(); // (Final | Native | Protected | HasDefaults | BlueprintCallable | BlueprintPure | Const)
};

