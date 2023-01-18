// ScriptStruct /Script/FortniteAI.FortAthenaAIBotDigestedTargetHeuristicSettings
// Size: 0x190
struct FFortAthenaAIBotDigestedTargetHeuristicSettings
{
	struct FDigestedPerceptionStateSettings PerceptionStateSettings[0x6]; // 0x0 (0x38) (ARRAY) 
	float ThreatDamageWeight; // 0x150 (0x4)
	float ThreatDamageWeightMultiplier; // 0x154 (0x4)
	struct FScalableFloat ThreatTimeSinceLastDamageMultiplier; // 0x158 (0x28)
	float ThreatLoFWeight; // 0x180 (0x4)
	float DBNOWeightModifier; // 0x184 (0x4)
	float GameParticipantWeightModifier; // 0x188 (0x4)
	unsigned char padding_18c[0x4]; // 0x18c (0x4)
};

