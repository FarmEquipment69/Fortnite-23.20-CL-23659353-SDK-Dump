// Class /Script/FortniteAI.FortAthenaAIRuntimeParameters_ReviveBehavior
// Size: 0x40
class UFortAthenaAIRuntimeParameters_ReviveBehavior : public UFortAthenaAIRuntimeParameters
{
	unsigned char bAllowReviveSquadmates; // 0x30 (0x1)
	unsigned char bAllowReviveSameFactionNPCs; // 0x30 (0x1)
	unsigned char bAllowReviveConverter; // 0x30 (0x1)
	unsigned char bAllowReviveConverterSquadmates; // 0x30 (0x1)
	unsigned char bUseReviveToken; // 0x30 (0x1)
	unsigned char unreflected_31[0x3]; // 0x31 (0x3) 
	float MaxDistanceToRevive; // 0x34 (0x4)
	float MaxDistanceToReviveHumanPlayer; // 0x38 (0x4)
	unsigned char padding_3c[0x4]; // 0x3c (0x4)
};

