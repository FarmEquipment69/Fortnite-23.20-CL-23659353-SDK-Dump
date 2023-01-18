// Class /Script/FortniteAI.FortAthenaAIBotMovementSkillSet
// Size: 0x12b8
class UFortAthenaAIBotMovementSkillSet : public UFortAthenaAIBotSkillSet
{
	struct FScalableFloat SlowDownDistance; // 0x30 (0x28)
	struct FScalableFloat TraversalSpeedEstimation; // 0x58 (0x28)
	struct FScalableFloat TraversalSpeedEstimationWithThreat; // 0x80 (0x28)
	struct FScalableFloat GliderDeployMinAngle; // 0xa8 (0x28)
	struct FScalableFloat GliderDeployMaxAngle; // 0xd0 (0x28)
	struct FScalableFloat GliderNoiseMinDistance; // 0xf8 (0x28)
	struct FScalableFloat GliderNoiseMaxDistance; // 0x120 (0x28)
	struct FScalableFloat GliderNoiseMinDelay; // 0x148 (0x28)
	struct FScalableFloat GliderNoiseMaxDelay; // 0x170 (0x28)
	struct FScalableFloat GliderNoiseDistanceTreshold; // 0x198 (0x28)
	struct FScalableFloat GliderStopRotationDistance; // 0x1c0 (0x28)
	struct FScalableFloat GliderLandingDistance; // 0x1e8 (0x28)
	struct FScalableFloat GliderRotationLerpDuration; // 0x210 (0x28)
	struct FScalableFloat GliderBehaviorEnableFlag; // 0x238 (0x28)
	struct FScalableFloat GliderBehaviorMinInterval; // 0x260 (0x28)
	struct FScalableFloat GliderBehaviorMaxInterval; // 0x288 (0x28)
	struct FScalableFloat GliderBehaviorMinRadius; // 0x2b0 (0x28)
	struct FScalableFloat GliderBehaviorMaxRadius; // 0x2d8 (0x28)
	struct FScalableFloat GliderBehaviorSurveyProbability; // 0x300 (0x28)
	struct FScalableFloat GliderMovementTypeEnableFlag; // 0x328 (0x28)
	struct FScalableFloat GliderLinearProbability; // 0x350 (0x28)
	struct FScalableFloat GliderSpiralMinRadius; // 0x378 (0x28)
	struct FScalableFloat GliderSpiralMaxRadius; // 0x3a0 (0x28)
	struct FScalableFloat GliderSpiralMinAngle; // 0x3c8 (0x28)
	struct FScalableFloat GliderSpiralMaxAngle; // 0x3f0 (0x28)
	struct FScalableFloat GliderSpiralMinInterval; // 0x418 (0x28)
	struct FScalableFloat GliderSpiralMaxInterval; // 0x440 (0x28)
	struct FScalableFloat GliderSpiralProbability; // 0x468 (0x28)
	struct FScalableFloat GliderSerpentineMinAngle; // 0x490 (0x28)
	struct FScalableFloat GliderSerpentineMaxAngle; // 0x4b8 (0x28)
	struct FScalableFloat GliderSerpentineMinRadius; // 0x4e0 (0x28)
	struct FScalableFloat GliderSerpentineMaxRadius; // 0x508 (0x28)
	struct FScalableFloat GliderSerpentineMinInterval; // 0x530 (0x28)
	struct FScalableFloat GliderSerpentineMaxInterval; // 0x558 (0x28)
	struct FScalableFloat GliderSerpentineMinPeriod; // 0x580 (0x28)
	struct FScalableFloat GliderSerpentineMaxPeriod; // 0x5a8 (0x28)
	struct FScalableFloat GliderSerpentineProbability; // 0x5d0 (0x28)
	struct FScalableFloat JumpOffMinAngle; // 0x5f8 (0x28)
	struct FScalableFloat JumpOffMaxAngle; // 0x620 (0x28)
	struct FScalableFloat MaxPatrolDistance; // 0x648 (0x28)
	struct FScalableFloat MaxPatrolDistanceRandomDeviation; // 0x670 (0x28)
	struct FScalableFloat MoveToRangeAttackMinOffset; // 0x698 (0x28)
	struct FScalableFloat MoveToRangeAttackMaxOffset; // 0x6c0 (0x28)
	struct FScalableFloat LKPMinOffset; // 0x6e8 (0x28)
	struct FScalableFloat LKPMaxOffset; // 0x710 (0x28)
	struct FScalableFloat SandTunnelJumpMinTime; // 0x738 (0x28)
	struct FScalableFloat SandTunnelJumpMaxTime; // 0x760 (0x28)
	struct FScalableFloat SandTunnelBurrowedAndHiddenChance; // 0x788 (0x28)
	struct FScalableFloat SandTunnelBurrowedAndHiddenMinTime; // 0x7b0 (0x28)
	struct FScalableFloat SandTunnelBurrowedAndHiddenMaxTime; // 0x7d8 (0x28)
	struct FScalableFloat WobblingProbability; // 0x800 (0x28)
	struct FScalableFloat MaxDelayBetweenWobblingMovement; // 0x828 (0x28)
	struct FScalableFloat MaxDelayBetweenWobblingMovementRandomDeviation; // 0x850 (0x28)
	struct FScalableFloat MaxWobblingDuration; // 0x878 (0x28)
	struct FScalableFloat MaxWobblingDurationRandomDeviation; // 0x8a0 (0x28)
	struct FScalableFloat MaxWobblingIntensity; // 0x8c8 (0x28)
	struct FScalableFloat WobblingIntensityDeviation; // 0x8f0 (0x28)
	struct FScalableFloat MaxWobblingFrequency; // 0x918 (0x28)
	struct FScalableFloat WobblingFrequencyDeviation; // 0x940 (0x28)
	struct FScalableFloat WobblingStickToPathCorridorStrength; // 0x968 (0x28)
	struct FScalableFloat LimitBlockingObstacleAngle; // 0x990 (0x28)
	struct FScalableFloat MaxAfterLaunchedPauseTime; // 0x9b8 (0x28)
	struct FScalableFloat MaxAfterLaunchedFromVortexPauseTime; // 0x9e0 (0x28)
	struct FScalableFloat AfterLaunchedPauseTimeDeviation; // 0xa08 (0x28)
	struct FScalableFloat SteerMovementWhenLaunched; // 0xa30 (0x28)
	struct FScalableFloat SteerMovementWhenLaunchedDirectionUpdateTime; // 0xa58 (0x28)
	struct FScalableFloat MaxReactionTimeToDangerZone; // 0xa80 (0x28)
	struct FScalableFloat MaxReactionTimeToDangerZoneDeviation; // 0xaa8 (0x28)
	struct FScalableFloat AllowSwimWobble; // 0xad0 (0x28)
	struct FScalableFloat EnableSwimSprintJump; // 0xaf8 (0x28)
	struct FScalableFloat SwimSprintJumpDelay; // 0xb20 (0x28)
	struct FScalableFloat SwimSprintJumpDelayDeviation; // 0xb48 (0x28)
	struct FScalableFloat SwimUnblockJumpHeightThreshold; // 0xb70 (0x28)
	struct FScalableFloat SwimSprintJumpNav2D; // 0xb98 (0x28)
	struct FScalableFloat TacticalSprintEvaluationMinTime; // 0xbc0 (0x28)
	struct FScalableFloat TacticalSprintEvaluationMaxTime; // 0xbe8 (0x28)
	struct FScalableFloat TacticalSprintMinTriggerChance; // 0xc10 (0x28)
	struct FScalableFloat TacticalSprintMaxTriggerChance; // 0xc38 (0x28)
	struct FScalableFloat TacticalSprintMinTriggerChanceInUrgentMovement; // 0xc60 (0x28)
	struct FScalableFloat TacticalSprintMaxTriggerChanceInUrgentMovement; // 0xc88 (0x28)
	struct FScalableFloat TacticalSprintMaxSlopeAngle; // 0xcb0 (0x28)
	struct FScalableFloat TacticalSprintMinPathTargetDistance; // 0xcd8 (0x28)
	struct FScalableFloat TacticalSprintMaxPathAlignmentAngle; // 0xd00 (0x28)
	struct FScalableFloat TacticalSprintMaxPathConeAngle; // 0xd28 (0x28)
	struct FScalableFloat TacticalSprintPathConeRearOffset; // 0xd50 (0x28)
	struct FScalableFloat TacticalSprintUsageEnabled; // 0xd78 (0x28)
	struct FScalableFloat TacticalSprintJumpTriggerChance; // 0xda0 (0x28)
	struct FScalableFloat TacticalSprintJumpDelay; // 0xdc8 (0x28)
	struct FScalableFloat TacticalSprintJumpDelayDeviation; // 0xdf0 (0x28)
	struct FScalableFloat TacticalSprintJumpDelayInitialRatio; // 0xe18 (0x28)
	struct FVector SlidingBoxExtent; // 0xe40 (0x18)
	struct FScalableFloat SlidingEnabled[0x4]; // 0xe58 (0x28) (ARRAY) 
	struct FScalableFloat SlidingEvaluationMinTime; // 0xef8 (0x28)
	struct FScalableFloat SlidingEvaluationMaxTime; // 0xf20 (0x28)
	struct FScalableFloat SlidingTriggerChanceStyleMalus; // 0xf48 (0x28)
	struct FScalableFloat SlidingTriggerChanceStyleMalusRandomDeviation; // 0xf70 (0x28)
	struct FScalableFloat SlidingTriggerChanceFlat; // 0xf98 (0x28)
	struct FScalableFloat SlidingTriggerChanceLittleSlope; // 0xfc0 (0x28)
	struct FScalableFloat SlidingTriggerChanceSteepSlope; // 0xfe8 (0x28)
	struct FScalableFloat SlidingDuringUrgentMovementTriggerChanceFlat; // 0x1010 (0x28)
	struct FScalableFloat SlidingDuringUrgentMovementTriggerChanceLittleSlope; // 0x1038 (0x28)
	struct FScalableFloat SlidingDuringUrgentMovementTriggerChanceSteepSlope; // 0x1060 (0x28)
	struct FScalableFloat MinSlidingDuration; // 0x1088 (0x28)
	struct FScalableFloat SlidingCooldownMinTime; // 0x10b0 (0x28)
	struct FScalableFloat SlidingCooldownMaxTime; // 0x10d8 (0x28)
	struct FScalableFloat SlidingStopMinDelay; // 0x1100 (0x28)
	struct FScalableFloat SlidingStopMaxDelay; // 0x1128 (0x28)
	struct FScalableFloat SlidingMaxPathConeAngle; // 0x1150 (0x28)
	struct FScalableFloat SlidingMinPathTargetDistance; // 0x1178 (0x28)
	struct FScalableFloat SlidingAllowResumeFocusOnTargetTriggerChance; // 0x11a0 (0x28)
	struct FVector ZiplineOctreeBoxExtent; // 0x11c8 (0x18)
	struct FScalableFloat ThresholdDistanceToRescanForZiplines; // 0x11e0 (0x28)
	struct FScalableFloat CooldownBetweenZiplineUsages; // 0x1208 (0x28)
	struct FScalableFloat DistanceToAddToZiplineStartPosition; // 0x1230 (0x28)
	struct FScalableFloat RadiusFromZiplineEnterPointToLookAtExit; // 0x1258 (0x28)
	struct FScalableFloat ZiplineUsageEnabled; // 0x1280 (0x28)
	struct TArray<struct FBotKnockbackSettings> KnockbackSettings; // 0x12a8 (0x10)
};

