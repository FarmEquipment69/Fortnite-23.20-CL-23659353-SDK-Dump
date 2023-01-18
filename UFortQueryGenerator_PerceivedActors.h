// Class /Script/FortniteAI.FortQueryGenerator_PerceivedActors
// Size: 0x128
class UFortQueryGenerator_PerceivedActors : public UEnvQueryGenerator
{
	bool bGenerateHostileActorGoal; // 0x50 (0x1)
	unsigned char unreflected_51[0x7]; // 0x51 (0x7) 
	struct FFortQueryGenerator_PerceivedActors_Settings HostileActorSettings; // 0x58 (0x40)
	bool bGenerateNeutralActorGoal; // 0x98 (0x1)
	unsigned char unreflected_99[0x7]; // 0x99 (0x7) 
	struct FFortQueryGenerator_PerceivedActors_Settings NeutralActorSettings; // 0xa0 (0x40)
	bool bGenerateFriendlyActorGoal; // 0xe0 (0x1)
	unsigned char unreflected_e1[0x7]; // 0xe1 (0x7) 
	struct FFortQueryGenerator_PerceivedActors_Settings FriendlyActorSettings; // 0xe8 (0x40)
};

