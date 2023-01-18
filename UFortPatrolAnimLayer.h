// Class /Script/FortniteGame.FortPatrolAnimLayer
// Size: 0x4c0
class UFortPatrolAnimLayer : public UFortBaseLayerAnimInstance
{
	struct FFortAnimInput_PatrolAnimSet CurrentAnimSet; // 0x440 (0x40)
	unsigned char unreflected_480[0x10]; // 0x480 (0x10) 
	float CurrentSpeedInterpSpeed; // 0x490 (0x4)
	float PatrolForceEnableSpeedThreshold; // 0x494 (0x4)
	float WalkAdditiveStartOffset; // 0x498 (0x4)
	float Speed2D; // 0x49c (0x4)
	float LocalVelocityYawAngle; // 0x4a0 (0x4)
	float DisableIdleDuringWalk; // 0x4a4 (0x4)
	struct FName PatrolLocomotionStateMachineName; // 0x4a8 (0x4)
	unsigned char unreflected_4ac[0x4]; // 0x4ac (0x4) 
	bool bRecentlyFired; // 0x4b0 (0x1)
	bool bIsLandPatrolling; // 0x4b1 (0x1)
	bool bIdleWalkTransition; // 0x4b2 (0x1)
	bool bIsPatrolLocomotionCurrentTimeAboveThreshold; // 0x4b3 (0x1)
	bool bIsDBNO; // 0x4b4 (0x1)
	bool bIsMoving2D; // 0x4b5 (0x1)
	bool bIsAIPatrolling; // 0x4b6 (0x1)
	bool bIsStressed; // 0x4b7 (0x1)
	bool bIsDanceStunned; // 0x4b8 (0x1)
	bool bEnableFullbodyOverride; // 0x4b9 (0x1)
	unsigned char padding_4ba[0x6]; // 0x4ba (0x6)

	/* Functions */

	// Function /Script/FortniteGame.FortPatrolAnimLayer.SetPatrolAnimAsset (Underlying native function: SetPatrolAnimAsset 0x8246984)
	void SetPatrolAnimAsset(class UFortPatrolAnimAsset*& NewAnimAsset); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPatrolAnimLayer.GetPatrolAnimSetFromWeapon (Underlying native function: GetPatrolAnimSetFromWeapon 0x8245dec)
	class UFortPatrolAnimAsset* GetPatrolAnimSetFromWeapon(struct TArray<struct FFortPatrolAnimSetWeaponPair>& AnimWeaponPairs, class AFortWeapon*& NewWeapon); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

