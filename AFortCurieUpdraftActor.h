// Class /Script/FortniteGame.FortCurieUpdraftActor
// Size: 0xa50
class AFortCurieUpdraftActor : public ABuildingGameplayActor
{
	class UCapsuleComponent* CapsuleComponent; // 0x9d8 (0x8)
	float PlayerPawnVortexLaunchMagnitude; // 0x9e0 (0x4)
	float PlayerPawnVortexGravityFloorScalar; // 0x9e4 (0x4)
	float VehicleGravityMultiplier; // 0x9e8 (0x4)
	float ProjectileGravityMultiplier; // 0x9ec (0x4)
	float ProjectileZLaunchMagnitude; // 0x9f0 (0x4)
	unsigned char bGlanceProjectiles; // 0x9f4 (0x1)
	unsigned char unreflected_9f5[0x3]; // 0x9f5 (0x3) 
	class UCurveFloat* ProjectileGlanceCurve; // 0x9f8 (0x8)
	struct TMap<class AActor*, float> ActorToPreexistingGravityMultiplierMap; // 0xa00 (0x50)

	/* Functions */

	// Function /Script/FortniteGame.FortCurieUpdraftActor.OnUpdraftEndOverlap (Underlying native function: OnUpdraftEndOverlap 0x87d1f90)
	void OnUpdraftEndOverlap(class UPrimitiveComponent*& OverlappedComponent, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex); // (Native | Protected)

	// Function /Script/FortniteGame.FortCurieUpdraftActor.OnUpdraftBeginOverlap (Underlying native function: OnUpdraftBeginOverlap 0x87d1da0)
	void OnUpdraftBeginOverlap(class UPrimitiveComponent*& OverlappedComp, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex, bool& bFromSweep, struct FHitResult& SweepResult); // (Native | Protected | HasOutParms)
};

