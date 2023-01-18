// ScriptStruct /Script/LagerRuntime.FortAthenaLivingWorldEventDespawnCondition
// Size: 0x18
struct FFortAthenaLivingWorldEventDespawnCondition
{
	bool bCanBeDespawned; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	float MinDistanceToPlayer; // 0x4 (0x4)
	float TimeAsCandidateBeforeDespawn; // 0x8 (0x4)
	enum EAthenaGamePhaseStep CanStartDespawningPhaseStep; // 0xc (0x1)
	unsigned char unreflected_d[0x3]; // 0xd (0x3) 
	int CanStartDespawningSafeZonePhase; // 0x10 (0x4)
	bool bCanDespawnWhenInCombatWithPlayer; // 0x14 (0x1)
	bool bCanDespawnInTheStorm; // 0x15 (0x1)
	unsigned char padding_16[0x2]; // 0x16 (0x2)
};

