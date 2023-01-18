// Class /Script/FortniteGame.FortPawnComponent_Tether
// Size: 0x1a0
class UFortPawnComponent_Tether : public UFortPawnComponent
{
	unsigned char unreflected_a0[0x8]; // 0xa0 (0x8) 
	struct TWeakObjectPtr<class APawn> TetherPawn; // 0xa8 (0x8)
	float TetherPawnSavedCullDistanceSquared; // 0xb0 (0x4)
	bool bTetheredWithoutWeapon; // 0xb4 (0x1)
	bool bPressedTetheredBoost; // 0xb5 (0x1)
	unsigned char unreflected_b6[0x1e]; // 0xb6 (0x1e) 
	bool bAllowVehicleTether; // 0xd4 (0x1)
	unsigned char unreflected_d5[0x3]; // 0xd5 (0x3) 
	struct FVector2D TetherSweetSpotRange; // 0xd8 (0x10)
	struct FVector2D TetherAccelerationRange; // 0xe8 (0x10)
	float TetherSlackLength; // 0xf8 (0x4)
	float TetherCatchupLength; // 0xfc (0x4)
	float TetherViewPlayerLength; // 0x100 (0x4)
	float TetherBreakLength; // 0x104 (0x4)
	float TetheredSpeedToBackOff; // 0x108 (0x4)
	float TetheredMaxSpeed; // 0x10c (0x4)
	float TetheredMovementAccelBackOff; // 0x110 (0x4)
	float TetheredMovementAccelNudge; // 0x114 (0x4)
	float TetheredMovementGroundFrictionMultiplier; // 0x118 (0x4)
	float TetheredMovementWaterFrictionMultiplier; // 0x11c (0x4)
	float TetheredMovementMaxAccel; // 0x120 (0x4)
	float SetViewTargetToTetherPawnDelayTime; // 0x124 (0x4)
	float SetViewTargetToTetherPawnBlendTime; // 0x128 (0x4)
	float TetherJumpServerCorrectionExpansionTime; // 0x12c (0x4)
	float TetherInitialYankLaunchZ; // 0x130 (0x4)
	unsigned char unreflected_134[0x4]; // 0x134 (0x4) 
	class UStaticMesh* TetherRopeMesh; // 0x138 (0x8)
	class UMaterialInterface* TetherRopeMaterial; // 0x140 (0x8)
	class UStaticMeshComponent* TetherRopeComp; // 0x148 (0x8)
	class USkeletalMesh* TetherRopeRodMesh; // 0x150 (0x8)
	class USkeletalMeshComponent* TetherRopeRodComp; // 0x158 (0x8)
	float TetherRightInput; // 0x160 (0x4)
	unsigned char unreflected_164[0x4]; // 0x164 (0x4) 
	class UInputComponent* TetheredInputComponent; // 0x168 (0x8)
	unsigned char unreflected_170[0x8]; // 0x170 (0x8) 
	float TetheredExitHoldTime; // 0x178 (0x4)
	unsigned char padding_17c[0x24]; // 0x17c (0x24)

	/* Functions */

	// Function /Script/FortniteGame.FortPawnComponent_Tether.TetheredExitReleased (Underlying native function: TetheredExitReleased 0x8703ce0)
	void TetheredExitReleased(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPawnComponent_Tether.TetheredExitPressed (Underlying native function: TetheredExitPressed 0x8703ccc)
	void TetheredExitPressed(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPawnComponent_Tether.TetheredBoostReleased (Underlying native function: TetheredBoostReleased 0x8703cb4)
	void TetheredBoostReleased(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPawnComponent_Tether.TetheredBoostPressed (Underlying native function: TetheredBoostPressed 0x8703c9c)
	void TetheredBoostPressed(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPawnComponent_Tether.SetViewTargetToTetherPawn (Underlying native function: SetViewTargetToTetherPawn 0x8703890)
	void SetViewTargetToTetherPawn(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPawnComponent_Tether.ServerRequestTetherJump (Underlying native function: ServerRequestTetherJump 0x206352c)
	void ServerRequestTetherJump(); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPawnComponent_Tether.ServerReleaseTether (Underlying native function: ServerReleaseTether 0x25f7420)
	void ServerReleaseTether(); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPawnComponent_Tether.OnRep_TetherPawn (Underlying native function: OnRep_TetherPawn 0x8702308)
	void OnRepTetherPawn(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPawnComponent_Tether.OnRep_TetheredWithoutWeapon (Underlying native function: OnRep_TetheredWithoutWeapon 0x870231c)
	void OnRepTetheredWithoutWeapon(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPawnComponent_Tether.GamepadTetheredExitAndReloadReleased (Underlying native function: GamepadTetheredExitAndReloadReleased 0x87002b8)
	void GamepadTetheredExitAndReloadReleased(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPawnComponent_Tether.DelayedSetViewTargetToTetherPawn (Underlying native function: DelayedSetViewTargetToTetherPawn 0x87002a4)
	void DelayedSetViewTargetToTetherPawn(); // (Final | Native | Public)
};

