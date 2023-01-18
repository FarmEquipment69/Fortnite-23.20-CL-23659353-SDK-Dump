// ScriptStruct /Script/FortniteAI.FortAthenaAIBotTargetHeuristicSettings
// Size: 0x348
struct FFortAthenaAIBotTargetHeuristicSettings
{
	struct FPerceptionStateSettings ThreatSeeingPerceptionSettings; // 0x0 (0xc8)
	struct FPerceptionStateSettings ThreatLKPPerceptionSettings; // 0xc8 (0xc8)
	struct FPerceptionStateSettings ThreatAlertedPerceptionSettings; // 0x190 (0xc8)
	struct FScalableFloat ThreatDamageWeight; // 0x258 (0x28)
	struct FScalableFloat ThreatDamageWeightMultiplier; // 0x280 (0x28)
	struct FScalableFloat ThreatTimeSinceLastDamageMultiplier; // 0x2a8 (0x28)
	struct FScalableFloat ThreatLoFWeight; // 0x2d0 (0x28)
	struct FScalableFloat DBNOWeightModifier; // 0x2f8 (0x28)
	struct FScalableFloat GameParticipantWeightModifier; // 0x320 (0x28)
};

