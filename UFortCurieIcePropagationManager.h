// Class /Script/IceRuntime.FortCurieIcePropagationManager
// Size: 0x88
class UFortCurieIcePropagationManager : public UFortCurieManagerComponent
{
	class UFortCurieIcePropagationManagerConfig* InternalManagerConfig; // 0x30 (0x8)
	unsigned char padding_38[0x50]; // 0x38 (0x50)

	/* Functions */

	// Function /Script/IceRuntime.FortCurieIcePropagationManager.OnIceBlockDied (Underlying native function: OnIceBlockDied 0x744fc08)
	void OnIceBlockDied(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Public | HasDefaults)
};

