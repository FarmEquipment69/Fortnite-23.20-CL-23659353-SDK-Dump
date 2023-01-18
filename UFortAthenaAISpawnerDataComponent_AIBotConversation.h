// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponent_AIBotConversation
// Size: 0x1f0
class UFortAthenaAISpawnerDataComponent_AIBotConversation : public UFortAthenaAISpawnerDataComponent_ConversationBase
{
	class UClass* ConversationComponentClass; // 0x30 (0x8)
	struct FGameplayTag ConversationEntryTag; // 0x38 (0x4)
	struct FGameplayTag InteractorParticipantTag; // 0x3c (0x4)
	struct FGameplayTag SelfParticipantTag; // 0x40 (0x4)
	unsigned char unreflected_44[0x4]; // 0x44 (0x4) 
	struct FScalableFloat EnterBTTaskConversationIfPlayerAround; // 0x48 (0x28)
	struct FScalableFloat EnterBTTaskConversationIfPlayerAroundDist; // 0x70 (0x28)
	struct TArray<class UAthenaDanceItemDefinition*> GreetingEmotes; // 0x98 (0x10)
	struct FScalableFloat GreetingEmoteMaxDuration; // 0xa8 (0x28)
	class UFortTandemCharacterData* CharacterData; // 0xd0 (0x8)
	struct FName ConversationInteractionCollisionProfile; // 0xd8 (0x4)
	unsigned char unreflected_dc[0x4]; // 0xdc (0x4) 
	struct FVector ConversationInteractionBoxExtent; // 0xe0 (0x18)
	struct FVector ConversationInteractionBoxOffset; // 0xf8 (0x18)
	struct FScalableFloat SpawnOutOfTheLoop; // 0x110 (0x28)
	struct FScalableFloat RespawnOutsideTheLoop; // 0x138 (0x28)
	struct FScalableFloat RemoveInvulnerabilityOutsideSafeZone; // 0x160 (0x28)
	class UClass* NPCLoopStateComponentClass; // 0x188 (0x8)
	struct FScalableFloat UseSpecialActorComponent; // 0x190 (0x28)
	class UClass* SpecialActorComponentClass; // 0x1b8 (0x8)
	struct FScalableFloat BlockSpecialActorUntilOutsideTheLoop; // 0x1c0 (0x28)
	bool bCanConverseWhenConverted; // 0x1e8 (0x1)
	unsigned char padding_1e9[0x7]; // 0x1e9 (0x7)
};

