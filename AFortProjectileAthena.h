// Class /Script/FortniteGame.FortProjectileAthena
// Size: 0xba0
class AFortProjectileAthena : public AFortProjectileBase
{
	struct FVector_NetQuantize FireStartLoc; // 0xa20 (0x18)
	unsigned char unreflected_a38[0x8]; // 0xa38 (0x8) 
	struct FHitResult PawnHitResult; // 0xa40 (0xe0)
	unsigned char bExplodeOnPawnHit; // 0xb20 (0x1)
	unsigned char bNoCollisionForNonOwningClients; // 0xb20 (0x1)
	unsigned char bIgnoreActorsAttachedToFiringPawn; // 0xb20 (0x1)
	unsigned char bProcessLocalHits; // 0xb20 (0x1)
	unsigned char unreflected_b21[0x3]; // 0xb21 (0x3) 
	float TimeToWaitForPawnHitBeforeKillOnServer; // 0xb24 (0x4)
	unsigned char unreflected_b28[0x50]; // 0xb28 (0x50) 
	class AActor* PredictedHitActor; // 0xb78 (0x8)
	class UPrimitiveComponent* PredictedHitComp; // 0xb80 (0x8)
	unsigned char padding_b88[0x18]; // 0xb88 (0x18)

	/* Functions */

	// Function /Script/FortniteGame.FortProjectileAthena.ServerNotifyPawnHit (Underlying native function: ServerNotifyPawnHit 0x8437650)
	void ServerNotifyPawnHit(struct FHitResult& Hit, int& Context); // (0x00000002 | Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortProjectileAthena.ServerNotifyEndOverlap (Underlying native function: ServerNotifyEndOverlap 0x8437564)
	void ServerNotifyEndOverlap(class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp); // (0x00000002 | Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortProjectileAthena.ReplacedPredictedProjectile (Has no native function)
	void ReplacedPredictedProjectile(class AFortProjectileBase*& PredictedProjectile); // (BlueprintCosmetic | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortProjectileAthena.ReplacedByRealProjectile (Has no native function)
	void ReplacedByRealProjectile(class AFortProjectileAthena*& RealProjectile); // (BlueprintCosmetic | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortProjectileAthena.OnSniperTraceWaterHit (Has no native function)
	void OnSniperTraceWaterHit(struct FHitResult& WaterHit, class AFortWaterBodyActor*& WaterBody); // (BlueprintCosmetic | Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortProjectileAthena.OnRep_PawnHitResult (Underlying native function: OnRep_PawnHitResult 0xed0df8)
	void OnRepPawnHitResult(); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.FortProjectileAthena.OnRep_FireStart (Underlying native function: OnRep_FireStart 0x14f9120)
	void OnRepFireStart(); // (0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortProjectileAthena.OnOwnerDestroyed (Underlying native function: OnOwnerDestroyed 0x24b71ec)
	void OnOwnerDestroyed(class AActor*& DestroyedOwner); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortProjectileAthena.KillAfterNoPawnHit (Underlying native function: KillAfterNoPawnHit 0x2346ed8)
	void KillAfterNoPawnHit(); // (0x00000002 | Native | Protected)
};

