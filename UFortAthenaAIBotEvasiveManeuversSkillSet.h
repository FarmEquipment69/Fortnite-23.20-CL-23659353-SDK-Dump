// Class /Script/FortniteAI.FortAthenaAIBotEvasiveManeuversSkillSet
// Size: 0x6c8
class UFortAthenaAIBotEvasiveManeuversSkillSet : public UFortAthenaAIBotSkillSet
{
	struct FEvasiveManeuverSkillSettings DefaultEvasiveManeuverSkillSettings; // 0x30 (0x258)
	struct TArray<struct FEvasiveManeuverSkillSettingsSpecialization> EvasiveManeuverSkillSettingsSpecializations; // 0x288 (0x10)
	struct FScalableFloat JetpackStrafeOverlayWeight; // 0x298 (0x28)
	struct FScalableFloat JetpackStrafeDelay; // 0x2c0 (0x28)
	struct FScalableFloat JetpackStrafeRandomDeviationDelay; // 0x2e8 (0x28)
	struct FScalableFloat JetpackStrafeDistanceMax; // 0x310 (0x28)
	struct FScalableFloat JetpackStrafeDistanceMin; // 0x338 (0x28)
	struct FScalableFloat JetpackStrafeActivationTime; // 0x360 (0x28)
	struct FScalableFloat JetpackStrafeActivationTimeRandomDeviation; // 0x388 (0x28)
	struct FScalableFloat JetpackStrafeTime; // 0x3b0 (0x28)
	struct FScalableFloat JetpackStrafeTimeRandomDeviation; // 0x3d8 (0x28)
	struct FScalableFloat DodgeMaxDistance; // 0x400 (0x28)
	struct FScalableFloat CanDodgeInUrgentMovement; // 0x428 (0x28)
	struct FScalableFloat CrouchMaxDistance; // 0x450 (0x28)
	struct FScalableFloat CanCrouchInUrgentMovement; // 0x478 (0x28)
	struct FScalableFloat JumpMaxDistance; // 0x4a0 (0x28)
	struct FScalableFloat CanJumpInUrgentMovement; // 0x4c8 (0x28)
	struct FScalableFloat JetpackStrafeMaxDistance; // 0x4f0 (0x28)
	struct FScalableFloat AvoidProjectilesReactionDistanceMax; // 0x518 (0x28)
	struct FScalableFloat AvoidProjectilesReactionTimeMin; // 0x540 (0x28)
	struct FScalableFloat AvoidProjectilesReactionTimeMax; // 0x568 (0x28)
	struct FScalableFloat AvoidProjectilesEvasiveDistanceMin; // 0x590 (0x28)
	struct FScalableFloat AvoidProjectilesEvasiveDistanceMax; // 0x5b8 (0x28)
	struct FScalableFloat AvoidPhysicsObjectsReactionDistanceMin; // 0x5e0 (0x28)
	struct FScalableFloat AvoidPhysicsObjectsReactionDistanceMax; // 0x608 (0x28)
	struct FScalableFloat AvoidPhysicsObjectsSpeedMin; // 0x630 (0x28)
	struct FScalableFloat AvoidPhysicsObjectsSpeedMax; // 0x658 (0x28)
	struct FGameplayTagQuery CanUseEvasiveManeuversTagQuery; // 0x680 (0x48)
};

