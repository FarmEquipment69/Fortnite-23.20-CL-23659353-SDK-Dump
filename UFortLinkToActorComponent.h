// Class /Script/FortniteGame.FortLinkToActorComponent
// Size: 0xf8
class UFortLinkToActorComponent : public UActorComponent
{
	struct FMulticastInlineDelegate OnLinkedActorDestroyed; // 0xa0 (0x10)
	struct FMulticastInlineDelegate OnLinkedActorDisconnected; // 0xb0 (0x10)
	struct FMulticastInlineDelegate OnLinkedPhysicsObjectWake; // 0xc0 (0x10)
	unsigned char bPerformLinkingCheckOnBeginPlay; // 0xd0 (0x1)
	unsigned char bRegisterWithOwnerMovementComponent; // 0xd0 (0x1)
	unsigned char bUseActorRotationForDirectionVectors; // 0xd0 (0x1)
	unsigned char bMonitorLinkedActorForChanges; // 0xd0 (0x1)
	enum ELinkToDirection DirectionForLink; // 0xd1 (0x1)
	unsigned char unreflected_d2[0x2]; // 0xd2 (0x2) 
	float DirectionTraceLength; // 0xd4 (0x4)
	struct FName ActorTag; // 0xd8 (0x4)
	int NumActorsToLinkMax; // 0xdc (0x4)
	struct TArray<struct TWeakObjectPtr<class AActor>> ActorsLinkedTo; // 0xe0 (0x10)
	unsigned char padding_f0[0x8]; // 0xf0 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortLinkToActorComponent.SetUseActorRotationForDirectionVectors (Underlying native function: SetUseActorRotationForDirectionVectors 0x87036f4)
	void SetUseActorRotationForDirectionVectors(bool& InbUseActorRotationForDirectionVectors); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortLinkToActorComponent.SetRegisterWithOwnerMovementComponent (Underlying native function: SetRegisterWithOwnerMovementComponent 0x8703508)
	void SetRegisterWithOwnerMovementComponent(bool& bRegisterWithMovementComp); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortLinkToActorComponent.SetPerformLinkingCheckOnBeginPlay (Underlying native function: SetPerformLinkingCheckOnBeginPlay 0x8703484)
	void SetPerformLinkingCheckOnBeginPlay(bool& bCheckOnBeginPlay); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortLinkToActorComponent.RegisterWithOwnersProjectileMovementComponent (Underlying native function: RegisterWithOwnersProjectileMovementComponent 0x8702414)
	void RegisterWithOwnersProjectileMovementComponent(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortLinkToActorComponent.PerformLinkingCheck (Underlying native function: PerformLinkingCheck 0x8702330)
	bool PerformLinkingCheck(enum ELinkToDirection& InDirection, class AActor*& OutActorLinkedTo); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortLinkToActorComponent.OnMonitorLinkedActors (Underlying native function: OnMonitorLinkedActors 0x8701af8)
	void OnMonitorLinkedActors(); // (Final | Native | Protected)

	// DelegateFunction /Script/FortniteGame.FortLinkToActorComponent.OnLinkedPhysicsObjectWake__DelegateSignature (Has no native function)
	void OnLinkedPhysicsObjectWakeDelegateSignature(class AActor*& PhysicsObject); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteGame.FortLinkToActorComponent.OnLinkedActorDisconnected__DelegateSignature (Has no native function)
	void OnLinkedActorDisconnectedDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteGame.FortLinkToActorComponent.OnLinkedActorDestroyed__DelegateSignature (Has no native function)
	void OnLinkedActorDestroyedDelegateSignature(class AActor*& DamageCauser); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteGame.FortLinkToActorComponent.HandleMovementStopped (Underlying native function: HandleMovementStopped 0x8700d48)
	void HandleMovementStopped(struct FHitResult& Hit); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteGame.FortLinkToActorComponent.HandleLinkedPhysicsObjectAwakeChanged (Underlying native function: HandleLinkedPhysicsObjectAwakeChanged 0x8700b68)
	void HandleLinkedPhysicsObjectAwakeChanged(class UPrimitiveComponent*& SimulatingComponent, bool& bIsAwake); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortLinkToActorComponent.HandleLinkedActorDestroyed (Underlying native function: HandleLinkedActorDestroyed 0x8700ad8)
	void HandleLinkedActorDestroyed(class AActor*& DestroyedActor); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortLinkToActorComponent.HandleBuildingActorDestroyed (Underlying native function: HandleBuildingActorDestroyed 0x8700690)
	void HandleBuildingActorDestroyed(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Private | HasDefaults)

	// Function /Script/FortniteGame.FortLinkToActorComponent.GetDirectionForLink (Underlying native function: GetDirectionForLink 0x8700478)
	enum ELinkToDirection GetDirectionForLink(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortLinkToActorComponent.GetActorsLinkedTo (Underlying native function: GetActorsLinkedTo 0x87002cc)
	void GetActorsLinkedTo(struct TArray<class AActor*>& OutArray); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)
};

