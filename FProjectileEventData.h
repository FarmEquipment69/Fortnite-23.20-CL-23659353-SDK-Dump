// ScriptStruct /Script/FortniteGame.ProjectileEventData
// Size: 0x28
struct FProjectileEventData
{
	class AFortProjectileBase* SpawnedProjectile; // 0x0 (0x8)
	struct TArray<struct FHitResult> Hits; // 0x8 (0x10)
	struct TArray<class AActor*> ExplodedActors; // 0x18 (0x10)
};

