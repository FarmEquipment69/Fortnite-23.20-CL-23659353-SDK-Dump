// Class /Script/FortniteGame.FortWeaponRangedDual
// Size: 0x15b8
class AFortWeaponRangedDual : public AFortWeaponRanged
{
	class USkeletalMeshComponentBudgeted* LeftHandWeaponMesh; // 0x1560 (0x8)
	class UAnimMontage* LeftHandFireAnimation; // 0x1568 (0x8)
	class UAnimMontage* LeftCockingAnimation; // 0x1570 (0x8)
	class UAnimMontage* LeftHandFireDownsightsAnimation; // 0x1578 (0x8)
	class UAnimMontage* LeftWeaponFireMontage; // 0x1580 (0x8)
	class UAnimMontage* LeftWeaponFireDownsightsMontage; // 0x1588 (0x8)
	class UAnimMontage* LeftWeaponCockingMontage; // 0x1590 (0x8)
	class UAnimMontage* LeftWeaponReloadMontage; // 0x1598 (0x8)
	struct FMulticastInlineDelegate OnHandFired; // 0x15a0 (0x10)
	unsigned char padding_15b0[0x8]; // 0x15b0 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortWeaponRangedDual.GetNextFireHand (Underlying native function: GetNextFireHand 0x9058270)
	enum EDualWeaponHand GetNextFireHand(); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRangedDual.GetLeftHandWeaponMesh (Underlying native function: GetLeftHandWeaponMesh 0x90581d8)
	class USkeletalMeshComponentBudgeted* GetLeftHandWeaponMesh(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRangedDual.GetLastFireHand (Underlying native function: GetLastFireHand 0x90581c0)
	enum EDualWeaponHand GetLastFireHand(); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

