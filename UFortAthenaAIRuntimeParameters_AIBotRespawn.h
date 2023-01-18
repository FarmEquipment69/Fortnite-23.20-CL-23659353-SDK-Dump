// Class /Script/FortniteAI.FortAthenaAIRuntimeParameters_AIBotRespawn
// Size: 0x40
class UFortAthenaAIRuntimeParameters_AIBotRespawn : public UFortAthenaAIRuntimeParameters
{
	unsigned char bCanRespawnOnDeath; // 0x30 (0x1)
	unsigned char bRespawnOnDeathLocation; // 0x30 (0x1)
	unsigned char unreflected_31[0x3]; // 0x31 (0x3) 
	float RespawnTime; // 0x34 (0x4)
	class UFortAthenaAISpawnerDataComponentList* AISpawnerDataComponentList; // 0x38 (0x8)
};

