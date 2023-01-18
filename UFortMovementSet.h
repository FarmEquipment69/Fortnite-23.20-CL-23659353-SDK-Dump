// Class /Script/FortniteGame.FortMovementSet
// Size: 0x260
class UFortMovementSet : public UFortAttributeSet
{
	struct FFortGameplayAttributeData WalkSpeed; // 0x30 (0x28)
	struct FFortGameplayAttributeData RunSpeed; // 0x58 (0x28)
	struct FFortGameplayAttributeData SprintSpeed; // 0x80 (0x28)
	struct FFortGameplayAttributeData FlySpeed; // 0xa8 (0x28)
	struct FFortGameplayAttributeData CrouchedRunSpeed; // 0xd0 (0x28)
	struct FFortGameplayAttributeData CrouchedSprintSpeed; // 0xf8 (0x28)
	struct FFortGameplayAttributeData BackwardSpeedMultiplier; // 0x120 (0x28)
	struct FFortGameplayAttributeData JumpHeight; // 0x148 (0x28)
	struct FFortGameplayAttributeData GravityZScale; // 0x170 (0x28)
	struct FFortGameplayAttributeData VehicleGravityZScale; // 0x198 (0x28)
	struct FFortGameplayAttributeData SpeedMultiplier; // 0x1c0 (0x28)
	struct FFortGameplayAttributeData LandSpeedMultiplier; // 0x1e8 (0x28)
	struct FFortGameplayAttributeData SwimSpeedMultiplier; // 0x210 (0x28)
	struct FFortGameplayAttributeData LandSpeedWhileBlobMultiplier; // 0x238 (0x28)

	/* Functions */

	// Function /Script/FortniteGame.FortMovementSet.OnRep_SpeedMultiplier (Underlying native function: OnRep_SpeedMultiplier 0x85a8014)
	void OnRepSpeedMultiplier(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)
};

