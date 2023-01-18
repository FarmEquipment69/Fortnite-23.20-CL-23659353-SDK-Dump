// Class /Script/FortniteGame.BuildingProp_DamageProxy
// Size: 0xee8
class ABuildingProp_DamageProxy : public ABuildingProp
{

	/* Functions */

	// Function /Script/FortniteGame.BuildingProp_DamageProxy.HandleOwningBuildingActorDied (Underlying native function: HandleOwningBuildingActorDied 0x8609f00)
	void HandleOwningBuildingActorDied(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Private | HasDefaults)

	// Function /Script/FortniteGame.BuildingProp_DamageProxy.HandleOwningActorDestroyed (Underlying native function: HandleOwningActorDestroyed 0x8609e84)
	void HandleOwningActorDestroyed(class AActor*& DestroyedActor); // (Final | Native | Private)

	// Function /Script/FortniteGame.BuildingProp_DamageProxy.HandleOnDamaged (Underlying native function: HandleOnDamaged 0x8609c08)
	void HandleOnDamaged(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Private | HasDefaults)
};

