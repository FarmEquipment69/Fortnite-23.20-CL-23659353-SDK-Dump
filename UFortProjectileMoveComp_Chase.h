// Class /Script/FortniteGame.FortProjectileMoveComp_Chase
// Size: 0x410
class UFortProjectileMoveComp_Chase : public UFortProjectileMovementComponent
{
	unsigned char unreflected_3e0[0x8]; // 0x3e0 (0x8) 
	struct FMulticastInlineDelegate OnChaseTargetReached; // 0x3e8 (0x10)
	class USceneComponent* InternalChaseTarget; // 0x3f8 (0x8)
	struct FName ChaseTargetSocket; // 0x400 (0x4)
	float ChaseTargetReachedDistance; // 0x404 (0x4)
	unsigned char padding_408[0x8]; // 0x408 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortProjectileMoveComp_Chase.SetChaseTarget (Underlying native function: SetChaseTarget 0x87027d8)
	void SetChaseTarget(class USceneComponent*& InChaseTarget, struct FName& InSocketName, float& InTargetReachedDistance, bool& bInHomeOnChaseTarget); // (Net | NetReliable | Native | Event | NetMulticast | Public | BlueprintCallable)

	// DelegateFunction /Script/FortniteGame.FortProjectileMoveComp_Chase.OnChaseTargetReachedDelegate__DelegateSignature (Has no native function)
	void OnChaseTargetReachedDelegateDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteGame.FortProjectileMoveComp_Chase.MulticastAddExternalForce (Underlying native function: MulticastAddExternalForce 0x8700f7c)
	void MulticastAddExternalForce(struct FChaseExternalForce& ExternalForce); // (Net | NetReliable | Native | Event | NetMulticast | Protected)

	// Function /Script/FortniteGame.FortProjectileMoveComp_Chase.ClearExternalForces (Underlying native function: ClearExternalForces 0x86fff64)
	void ClearExternalForces(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortProjectileMoveComp_Chase.ClearChaseTarget (Underlying native function: ClearChaseTarget 0x86fff4c)
	void ClearChaseTarget(); // (Net | NetReliable | Native | Event | NetMulticast | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortProjectileMoveComp_Chase.AddExternalForce (Underlying native function: AddExternalForce 0x86ffbe8)
	void AddExternalForce(struct FChaseExternalForce& ExternalForce); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)
};

