// Class /Script/FortniteGame.FortProjectileMoveComp_Drunk
// Size: 0x470
class UFortProjectileMoveComp_Drunk : public UFortProjectileMovementComponent
{
	struct FProjectileMovementDrunkConfig DrunkConfig; // 0x3d8 (0x50)
	float DrunkTravelTime; // 0x428 (0x4)
	bool bDrunkDirectionChange; // 0x42c (0x1)
	unsigned char unreflected_42d[0x3]; // 0x42d (0x3) 
	int RandSeed; // 0x430 (0x4)
	float DrunkDirectionChangeTimer; // 0x434 (0x4)
	float DrunkHomingDirectionChangeTimer; // 0x438 (0x4)
	unsigned char unreflected_43c[0x4]; // 0x43c (0x4) 
	struct FVector DrunkHomingTargetPosition; // 0x440 (0x18)
	struct FRandomStream* DrunkRandStream; // 0x458 (0x8)
	float DrunkBlendOutMaxRange; // 0x460 (0x4)
	bool bDoingTimeBasedBlendOut; // 0x464 (0x1)
	unsigned char unreflected_465[0x3]; // 0x465 (0x3) 
	float CachedBlendAlpha; // 0x468 (0x4)
	unsigned char padding_46c[0x4]; // 0x46c (0x4)

	/* Functions */

	// Function /Script/FortniteGame.FortProjectileMoveComp_Drunk.SetDrunkConfig (Underlying native function: SetDrunkConfig 0x87029a8)
	void SetDrunkConfig(struct FProjectileMovementDrunkConfig& NewConfig); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortProjectileMoveComp_Drunk.OnRep_RandSeed (Underlying native function: OnRep_RandSeed 0x87022b0)
	void OnRepRandSeed(); // (Final | Native | Private)
};

