// Class /Script/LabradorRuntime.FortLabradorComponent_Telemetry
// Size: 0x128
class UFortLabradorComponent_Telemetry : public UFortAIComponent_Telemetry
{
	bool bWasAwake; // 0x108 (0x1)
	unsigned char unreflected_109[0x7]; // 0x109 (0x7) 
	struct FString InstigatorAwakeNetIDString; // 0x110 (0x10)
	enum ELabradorDespawnReason DespawnReason; // 0x120 (0x1)
	unsigned char unreflected_121[0x3]; // 0x121 (0x3) 
	float DamageReceivedFromPlayers; // 0x124 (0x4)

	/* Functions */

	// Function /Script/LabradorRuntime.FortLabradorComponent_Telemetry.OnWakeUp (Underlying native function: OnWakeUp 0x73b900c)
	void OnWakeUp(class AActor*& GoalActor); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/LabradorRuntime.FortLabradorComponent_Telemetry.OnTeleport (Underlying native function: OnTeleport 0x73b8ff4)
	void OnTeleport(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/LabradorRuntime.FortLabradorComponent_Telemetry.OnDamaged (Underlying native function: OnDamaged 0x73b8dac)
	void OnDamaged(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Private | HasDefaults)
};

