// Class /Script/Engine.Controller
// Size: 0x320
class AController : public AActor
{
	unsigned char unreflected_288[0x8]; // 0x288 (0x8) 
	class APlayerState* PlayerState; // 0x290 (0x8)
	unsigned char unreflected_298[0x8]; // 0x298 (0x8) 
	struct FMulticastInlineDelegate OnInstigatedAnyDamage; // 0x2a0 (0x10)
	struct FMulticastInlineDelegate OnPossessedPawnChanged; // 0x2b0 (0x10)
	struct FName StateName; // 0x2c0 (0x4)
	unsigned char unreflected_2c4[0x4]; // 0x2c4 (0x4) 
	class APawn* Pawn; // 0x2c8 (0x8)
	unsigned char unreflected_2d0[0x8]; // 0x2d0 (0x8) 
	class ACharacter* Character; // 0x2d8 (0x8)
	class USceneComponent* TransformComponent; // 0x2e0 (0x8)
	unsigned char unreflected_2e8[0x18]; // 0x2e8 (0x18) 
	struct FRotator ControlRotation; // 0x300 (0x18)
	unsigned char bAttachToPawn; // 0x318 (0x1)
	unsigned char padding_319[0x7]; // 0x319 (0x7)

	/* Functions */

	// Function /Script/Engine.Controller.UnPossess (Underlying native function: UnPossess 0x9d2e4a0)
	void UnPossess(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.Controller.StopMovement (Underlying native function: StopMovement 0x240d908)
	void StopMovement(); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.Controller.SetInitialLocationAndRotation (Underlying native function: SetInitialLocationAndRotation 0x9d2c7ac)
	void SetInitialLocationAndRotation(struct FVector& NewLocation, struct FRotator& NewRotation); // (Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.Controller.SetIgnoreMoveInput (Underlying native function: SetIgnoreMoveInput 0x9d2c728)
	void SetIgnoreMoveInput(bool& bNewMoveInput); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.Controller.SetIgnoreLookInput (Underlying native function: SetIgnoreLookInput 0x9d2c6a4)
	void SetIgnoreLookInput(bool& bNewLookInput); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.Controller.SetControlRotation (Underlying native function: SetControlRotation 0x9d2baa8)
	void SetControlRotation(struct FRotator& NewRotation); // (Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.Controller.ResetIgnoreMoveInput (Underlying native function: ResetIgnoreMoveInput 0x2346ed8)
	void ResetIgnoreMoveInput(); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.Controller.ResetIgnoreLookInput (Underlying native function: ResetIgnoreLookInput 0x9d2b6d8)
	void ResetIgnoreLookInput(); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.Controller.ResetIgnoreInputFlags (Underlying native function: ResetIgnoreInputFlags 0x9d2b6c0)
	void ResetIgnoreInputFlags(); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.Controller.ReceiveUnPossess (Has no native function)
	void ReceiveUnPossess(class APawn*& UnpossessedPawn); // (Event | Protected | BlueprintEvent)

	// Function /Script/Engine.Controller.ReceivePossess (Has no native function)
	void ReceivePossess(class APawn*& PossessedPawn); // (Event | Protected | BlueprintEvent)

	// Function /Script/Engine.Controller.ReceiveInstigatedAnyDamage (Has no native function)
	void ReceiveInstigatedAnyDamage(float& Damage, class UDamageType*& DamageType, class AActor*& DamagedActor, class AActor*& DamageCauser); // (BlueprintAuthorityOnly | Event | Protected | BlueprintEvent)

	// Function /Script/Engine.Controller.Possess (Underlying native function: Possess 0x9d2b57c)
	void Possess(class APawn*& InPawn); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/Engine.Controller.OnRep_PlayerState (Underlying native function: OnRep_PlayerState 0x10c4ce8)
	void OnRepPlayerState(); // (Native | Public)

	// Function /Script/Engine.Controller.OnRep_Pawn (Underlying native function: OnRep_Pawn 0x10c4d00)
	void OnRepPawn(); // (Native | Public)

	// Function /Script/Engine.Controller.LineOfSightTo (Underlying native function: LineOfSightTo 0x9d2b45c)
	bool LineOfSightTo(class AActor*& Other, struct FVector& ViewPoint, bool& bAlternateChecks); // (Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Controller.K2_GetPawn (Underlying native function: K2_GetPawn 0x248df80)
	class APawn* K2GetPawn(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Controller.IsPlayerController (Underlying native function: IsPlayerController 0x9d2b3c8)
	bool IsPlayerController(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Controller.IsMoveInputIgnored (Underlying native function: IsMoveInputIgnored 0x9d2b3a0)
	bool IsMoveInputIgnored(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Controller.IsLookInputIgnored (Underlying native function: IsLookInputIgnored 0x9d2b378)
	bool IsLookInputIgnored(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Controller.IsLocalPlayerController (Underlying native function: IsLocalPlayerController 0x2dc9e6c)
	bool IsLocalPlayerController(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Controller.IsLocalController (Underlying native function: IsLocalController 0x2f58484)
	bool IsLocalController(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Controller.GetViewTarget (Underlying native function: GetViewTarget 0x2355ed0)
	class AActor* GetViewTarget(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Controller.GetPlayerViewPoint (Underlying native function: GetPlayerViewPoint 0x9d28864)
	void GetPlayerViewPoint(struct FVector& Location, struct FRotator& Rotation); // (Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Controller.GetDesiredRotation (Underlying native function: GetDesiredRotation 0x9d276ec)
	struct FRotator GetDesiredRotation(); // (Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Controller.GetControlRotation (Underlying native function: GetControlRotation 0x89ea018)
	struct FRotator GetControlRotation(); // (Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Controller.ClientSetRotation (Underlying native function: ClientSetRotation 0x9d26150)
	void ClientSetRotation(struct FRotator& NewRotation, bool& bResetCamera); // (Net | NetReliable | Native | Event | Public | HasDefaults | NetClient | 0x80000000)

	// Function /Script/Engine.Controller.ClientSetLocation (Underlying native function: ClientSetLocation 0x9d26018)
	void ClientSetLocation(struct FVector& NewLocation, struct FRotator& NewRotation); // (Net | NetReliable | Native | Event | Public | HasDefaults | NetClient | 0x80000000)
};

