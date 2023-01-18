// Class /Script/FortniteAI.FortAthenaBTService_ManageWeapon
// Size: 0xb0
class UFortAthenaBTService_ManageWeapon : public UBTService
{
	struct FName WeaponFireName; // 0x70 (0x4)
	struct FName WeaponTriggerMeleeName; // 0x74 (0x4)
	struct FName WeaponTriggerThrowableName; // 0x78 (0x4)
	struct FName WeaponReloadName; // 0x7c (0x4)
	struct FName WeaponName; // 0x80 (0x4)
	struct FName WeaponTargetingName; // 0x84 (0x4)
	struct FName SprintExecutionStatusName; // 0x88 (0x4)
	struct FName TacticalSprintExecutionStatusName; // 0x8c (0x4)
	struct FName HealingStatusKeyName; // 0x90 (0x4)
	struct FName BlockWeaponActionsKeyName; // 0x94 (0x4)
	unsigned char unreflected_98[0x14]; // 0x98 (0x14) 
	bool bEndChargeOnFireStop; // 0xac (0x1)
	unsigned char padding_ad[0x3]; // 0xad (0x3)

	/* Functions */

	// Function /Script/FortniteAI.FortAthenaBTService_ManageWeapon.ManageWeaponTargeting (Underlying native function: ManageWeaponTargeting 0xa3c1ca8)
	void ManageWeaponTargeting(class UBehaviorTreeComponent*& OwnerComp); // (Final | Native | Protected | Const)
};

