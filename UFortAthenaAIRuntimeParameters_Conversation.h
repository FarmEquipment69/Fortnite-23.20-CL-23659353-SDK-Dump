// Class /Script/FortniteAI.FortAthenaAIRuntimeParameters_Conversation
// Size: 0x58
class UFortAthenaAIRuntimeParameters_Conversation : public UFortAthenaAIRuntimeParameters
{
	unsigned char bEnterBTTaskConversationIfPlayerAround; // 0x30 (0x1)
	unsigned char bCanConverseWhenConverted; // 0x30 (0x1)
	unsigned char unreflected_31[0x3]; // 0x31 (0x3) 
	float EnterBTTaskConversationIfPlayerAroundDistSqr; // 0x34 (0x4)
	struct TArray<class UAthenaDanceItemDefinition*> GreetingEmotes; // 0x38 (0x10)
	float GreetingEmoteMaxDuration; // 0x48 (0x4)
	unsigned char unreflected_4c[0x4]; // 0x4c (0x4) 
	class UFortTandemCharacterData* CharacterData; // 0x50 (0x8)
};

