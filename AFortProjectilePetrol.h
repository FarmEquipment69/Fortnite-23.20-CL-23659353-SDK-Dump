// Class /Script/FortniteGame.FortProjectilePetrol
// Size: 0xa68
class AFortProjectilePetrol : public AFortProjectileBase
{
	float FuelAmount; // 0xa20 (0x4)
	unsigned char unreflected_a24[0x4]; // 0xa24 (0x4) 
	class UClass* PetrolTemplate; // 0xa28 (0x8)
	class UClass* FortSplineGroundPathTemplate; // 0xa30 (0x8)
	bool bImpacted; // 0xa38 (0x1)
	unsigned char unreflected_a39[0x3]; // 0xa39 (0x3) 
	float MaxLifeSpanOnCollision; // 0xa3c (0x4)
	float GroundSlopeAngleThreshold; // 0xa40 (0x4)
	unsigned char unreflected_a44[0x4]; // 0xa44 (0x4) 
	struct FVector CachedImpactDir; // 0xa48 (0x18)
	struct TWeakObjectPtr<class AActor> SplatterSourceActor; // 0xa60 (0x8)
};

